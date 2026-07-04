

# File JKRExpHeap.cpp

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**JSystem**](dir_2add8750dabb2c81b6f2c3c5af4cfeba.md) **>** [**System**](dir_e5be38218225624e70ebb9ea7ff5d81f.md) **>** [**JKernel**](dir_cddf90ee7c92ffd4474a8c27c5ea5882.md) **>** [**src**](dir_2af99252d1c483de143a7a3f414b45a2.md) **>** [**JKRExpHeap.cpp**](_j_k_r_exp_heap_8cpp.md)

[Go to the documentation of this file](_j_k_r_exp_heap_8cpp.md)


```C++
#include <dolphin/os.h>

#include <JKRExpHeap.h>

static int whatdo;  // some sort of state, possibly for dump()?
static int whatdo2; // possibly something for dump()

static size_t DBfoundSize;
static u32    DBfoundOffset;
static void*  DBfoundBlock;
static void*  DBnewFreeBlock;
static void*  DBnewUsedBlock;

JKRExpHeap*
JKRExpHeap::createRoot (int max, bool err)
{
    JKRExpHeap* heap = Nil;

    // create root heap if missing
    if (sRootHeap == Nil)
    {
        void*  mem;
        size_t memSize;

        initArena ((char**)&mem, &memSize, max);

        size_t thisSize  = ALIGN_NEXT (sizeof (JKRExpHeap), 16);
        void*  start     = (void*)((int)mem + thisSize);
        size_t alignSize = memSize - thisSize;

        heap             = new (mem) JKRExpHeap (start, alignSize, Nil, err);

        sRootHeap        = (JKRHeap*)heap;
    }

    // mark heap as root
    heap->mIsRoot = TRUE;

    return heap;
}

JKRExpHeap*
JKRExpHeap::create (size_t size, JKRHeap* parent, bool err)
{
    JKRExpHeap* heap = Nil;

    if (parent == Nil)
    {
        parent = sRootHeap;
    }

    size_t alignSize = ALIGN_PREV (size, 16);
    size_t thisSize  = ALIGN_NEXT (sizeof (JKRExpHeap), 16);

    void* mem        = (void*)JKRAllocFromHeap (parent, alignSize, 16);
    void* data       = (void*)((int)mem + thisSize);

    // if allocated, create heap
    if (mem != Nil)
    {
        heap = new (mem) JKRExpHeap (data, alignSize - thisSize, parent, err);
    }

    // mark heap as not root
    heap->mIsRoot = FALSE;

    return heap;
}

void
JKRExpHeap::destroy ()
{
    unk64 _;
#pragma unused(_)

    if (mIsRoot == false)
    {
        JKRHeap* parent = mHeapTree.getParent()->getObject();
        if (parent != Nil)
        {
            this->~JKRExpHeap();
            JKRFreeToHeap (parent, this);
        }
    }
    else
    {
        this->~JKRExpHeap();
    }
}

JKRExpHeap::JKRExpHeap (void* data, size_t size, JKRHeap* parent, bool err)
  : JKRHeap (data, size, parent, err)
{
    mAllocMode    = ALLOC_HEAD;
    mGroupID      = (u8)-1;

    mFreeHeadList = (CMemBlock*)data;
    mFreeTailList = mFreeHeadList;

    mFreeHeadList->initiate (Nil, Nil, size - 16, 0, 0);

    mUsedHeadList = Nil;
    mUsedTailList = Nil;
}

JKRExpHeap::~JKRExpHeap ()
{
    dispose();
}

u8
JKRExpHeap::changeGroupID (u8 id)
{
    lock();

    u8 old   = mGroupID;
    mGroupID = id;

    unlock();

    return old;
}

void*
JKRExpHeap::alloc (size_t size, int align)
{
    void* ptr;

    lock();

    whatdo2 = 0;
    if (align >= 0)
    {
        if (align <= 4)
        {
            whatdo = 1;
            ptr    = allocFromHead (size);
        }
        else
        {
            whatdo = 2;
            ptr    = allocFromHead (size, align);
        }
    }
    else
    {
        if (-align <= 4)
        {
            whatdo = 3;
            ptr    = allocFromTail (size);
        }
        else
        {
            whatdo = 4;
            ptr    = allocFromTail (size, -align);
        }
    }

    if (ptr == Nil)
    {
        if (getErrorFlag())
        {
            callErrorHandler (this, size, align);
        }
        dump();
        JKRExpHeap::dump_sort();
    }

    unlock();

    return ptr;
}

void*
JKRExpHeap::allocFromHead (size_t size, int align)
{
    size                 = ALIGN_NEXT (size, align);
    size_t     foundSize = (size_t)-1;
    u32        foundOff  = 0;
    CMemBlock* foundBlk  = (CMemBlock*)Nil;

    for (CMemBlock* blk = mFreeHeadList; blk != Nil; blk = blk->mNext)
    {
        u32 data = (u32)blk->getContent();
        u32 off  = ALIGN_PREV (align - 1 + data, align) - data;

        if (blk->mSize < (size + off) || foundSize <= blk->mSize)
        {
            continue;
        }

        foundSize = blk->mSize;
        foundBlk  = blk;
        foundOff  = off;

        if (mAllocMode != ALLOC_HEAD || blk->mSize == size)
        {
            break;
        }
    }

    DBfoundSize   = foundSize;
    DBfoundOffset = foundOff;
    DBfoundBlock  = foundBlk;

    if (foundBlk != Nil)
    {
        CMemBlock* newFreeBlock;
        CMemBlock* newUsedBlock;

        if (foundOff >= sizeof (CMemBlock))
        {
            whatdo2         += 0x1;

            CMemBlock* prev  = foundBlk->mPrev;
            CMemBlock* next  = foundBlk->mNext;
            newUsedBlock     = foundBlk->allocFore (foundOff - sizeof (CMemBlock), 0, 0, 0, 0);

            if (newUsedBlock != Nil)
            {
                whatdo2      += 0x2;

                newFreeBlock  = newUsedBlock->allocFore (size, mGroupID, 0, 0, 0);
            }
            else
            {
                newUsedBlock = Nil;
            }

            if (newFreeBlock != Nil)
            {
                setFreeBlock (foundBlk, prev, newFreeBlock);
            }
            else
            {
                setFreeBlock (foundBlk, prev, next);
            }
            if (newFreeBlock != Nil)
            {
                whatdo2 += 0x4;

                setFreeBlock (newFreeBlock, foundBlk, next);
            }

            appendUsedList (newUsedBlock);

            whatdo2        += 0x8;

            DBnewFreeBlock  = newFreeBlock;
            DBnewUsedBlock  = newUsedBlock;

            return newUsedBlock->getContent();
        }

        if (foundOff != 0)
        {
            whatdo2         += 0x10;

            CMemBlock* prev  = foundBlk->mPrev;
            CMemBlock* next  = foundBlk->mNext;

            removeFreeBlock (foundBlk);
            newUsedBlock        = (CMemBlock*)((u32)foundBlk + foundOff);
            newUsedBlock->mSize = foundBlk->mSize - foundOff;
            newFreeBlock        = newUsedBlock->allocFore (size, mGroupID, (u8)foundOff, 0, 0);

            if (newFreeBlock != Nil)
            {
                whatdo2 += 0x20;

                setFreeBlock (newFreeBlock, prev, next);
            }

            appendUsedList (newUsedBlock);

            whatdo2 += 0x40;

            return newUsedBlock->getContent();
        }
        else
        {
            whatdo2         += 0x80;

            CMemBlock* prev  = foundBlk->mPrev;
            CMemBlock* next  = foundBlk->mNext;

            newFreeBlock     = foundBlk->allocFore (size, mGroupID, 0, 0, 0);
            removeFreeBlock (foundBlk);

            if (newFreeBlock != Nil)
            {
                whatdo2 += 0x100;

                setFreeBlock (newFreeBlock, prev, next);
            }

            appendUsedList (newUsedBlock);

            whatdo2 += 0x200;

            return foundBlk->getContent();
        }
    }

    whatdo2 += 0x400;

    return Nil;
}

void*
JKRExpHeap::allocFromHead (size_t size)
{
    size                 = ALIGN_NEXT (size, 4);
    size_t     foundSize = (size_t)-1;
    CMemBlock* foundBlk  = (CMemBlock*)Nil;

    for (CMemBlock* blk = mFreeHeadList; blk != Nil; blk = blk->mNext)
    {
        if (blk->mSize < size || foundSize <= blk->mSize)
        {
            continue;
        }

        foundSize = blk->mSize;
        foundBlk  = blk;

        if (mAllocMode != ALLOC_HEAD || foundSize == size)
        {
            break;
        }
    }

    whatdo2 += 0x1;

    if (foundBlk != Nil)
    {
        CMemBlock* newFreeBlock  = foundBlk->allocFore (size, mGroupID, 0, 0, 0);

        whatdo2                 += 0x2;

        if (newFreeBlock != Nil)
        {
            whatdo2 += 0x4;
            setFreeBlock (newFreeBlock, foundBlk->mPrev, foundBlk->mNext);
        }
        else
        {
            whatdo2 += 0x8;
            removeFreeBlock (foundBlk);
        }

        appendUsedList (foundBlk);

        whatdo2 += 0x10;

        return foundBlk->getContent();
    }

    whatdo2 += 0x20;

    return Nil;
}

void*
JKRExpHeap::allocFromTail (u32 size, int align)
{
    u32        offset     = 0;
    CMemBlock* foundBlock = Nil;
    CMemBlock* newBlock   = Nil;
    u32        usedSize;
    u32        start;

    for (CMemBlock* block = mFreeTailList; block; block = block->mPrev)
    {
        start    = ALIGN_PREV ((u32)block->getContent() + block->mSize - size, align);
        usedSize = (u32)block->getContent() + block->mSize - start;
        if (block->mSize >= usedSize)
        {
            foundBlock = block;
            offset     = block->mSize - usedSize;
            newBlock   = (CMemBlock*)start - 1;
            break;
        }
    }
    if (foundBlock != Nil)
    {
        if (offset >= sizeof (CMemBlock))
        {
            newBlock->initiate (Nil, Nil, usedSize, mGroupID, (u8)(-0x80));
            foundBlock->mSize = foundBlock->mSize - usedSize - sizeof (CMemBlock);
            appendUsedList (newBlock);
            return newBlock->getContent();
        }
        else
        {
            if (offset != 0)
            {
                removeFreeBlock (foundBlock);
                newBlock->initiate (Nil, Nil, usedSize, mGroupID, (u8)(offset | 0x80));
                appendUsedList (newBlock);
                return newBlock->getContent();
            }
            else
            {
                removeFreeBlock (foundBlock);
                newBlock->initiate (Nil, Nil, usedSize, mGroupID, (u8)(-0x80));
                appendUsedList (newBlock);
                return newBlock->getContent();
            }
        }
    }
    return Nil;
}

void*
JKRExpHeap::allocFromTail (u32 size)
{
    u32        size2      = ALIGN_NEXT (size, 4);
    CMemBlock* foundBlock = Nil;

    for (CMemBlock* block = mFreeTailList; block; block = block->mPrev)
    {
        if (block->mSize >= size2)
        {
            foundBlock = block;
            break;
        }
    }

    if (foundBlock != Nil)
    {
        CMemBlock* usedBlock = foundBlock->allocBack (size2, 0, 0, mGroupID, 0);
        CMemBlock* freeBlock;

        if (usedBlock)
        {
            freeBlock = foundBlock;
        }
        else
        {
            removeFreeBlock (foundBlock);
            usedBlock = foundBlock;
            freeBlock = Nil;
        }
        if (freeBlock)
        {
            setFreeBlock (freeBlock, foundBlock->mPrev, foundBlock->mNext);
        }

        appendUsedList (usedBlock);

        return usedBlock->getContent();
    }

    return Nil;
}

void
JKRExpHeap::free (void* ptr)
{
    lock();

    if (mStart <= ptr && ptr <= mEnd)
    {
        CMemBlock* block = CMemBlock::getHeapBlock (ptr);
        if (block != Nil)
        {
            block->free (this);
        }
    }
    else
    {
        // JUT_WARNING_F ("free: memblock %x not in heap %x", memblock, this);
    }

    unlock();
}

s32
JKRExpHeap::freeGroup (u8 groupID)
{
    lock();

    CMemBlock* block = mUsedHeadList;
    s32        count = 0;

    while (block != Nil)
    {
        if (block->mGroupID == groupID)
        {
            CMemBlock* nextBlk = (CMemBlock*)(block + 1);
            dispose (nextBlk, block->mSize);

            CMemBlock* temp = block->mNext;

            block->free (this);
            count++;

            block = temp;
        }
        else
        {
            block = block->mNext;
        }
    }
    unlock();

    return count;
}

void
JKRExpHeap::freeAll ()
{
    lock();

    JKRHeap::freeAll();

    mFreeHeadList = (CMemBlock*)mStart;
    mFreeTailList = mFreeHeadList;
    mFreeHeadList->initiate (Nil, Nil, mSize - sizeof (CMemBlock), 0, 0);
    mUsedHeadList = Nil;
    mUsedTailList = Nil;

    unlock();
}

void
JKRExpHeap::freeTail ()
{
    lock();

    for (CMemBlock* block = mUsedHeadList; block != Nil;)
    {
        if ((block->mFlags & 0x80) != 0)
        {
            dispose (block->getContent(), block->mSize);
            CMemBlock* temp = block->mNext;
            block->free (this);
            block = temp;
        }
        else
        {
            block = block->mNext;
        }
    }

    unlock();
}

size_t
JKRExpHeap::resize (void* ptr, size_t size)
{
    lock();

    CMemBlock* block = CMemBlock::getHeapBlock (ptr);
    if (block == Nil || ptr < mStart || mEnd < ptr)
    {
        unlock();
        return (size_t)-1;
    }

    size = ALIGN_NEXT (size, 4);
    if (size == block->mSize)
    {
        unlock();
        return size;
    }

    if (size > block->mSize)
    {
        CMemBlock* foundBlock = Nil;
        CMemBlock* nextBlock  = block + 1;
        for (CMemBlock* freeBlock = mFreeHeadList; freeBlock; freeBlock = freeBlock->mNext)
        {
            if (freeBlock == (CMemBlock*)((u8*)nextBlock + block->mSize))
            {
                foundBlock = freeBlock;
                break;
            }
        }

        if (foundBlock == Nil)
        {
            unlock();
            return (size_t)-1;
        }

        if (size > block->mSize + sizeof (CMemBlock) + foundBlock->mSize)
        {
            unlock();
            return (size_t)-1;
        }

        removeFreeBlock (foundBlock);
        block->mSize += foundBlock->mSize + sizeof (CMemBlock);

        if (block->mSize - size > sizeof (CMemBlock))
        {
            CMemBlock* newBlock = block->allocFore (size, block->mGroupID, block->mFlags, 0, 0);
            if (newBlock)
            {
                recycleFreeBlock (newBlock);
            }
        }
    }
    else
    {
        if (block->mSize - size > sizeof (CMemBlock))
        {
            CMemBlock* freeBlock =
                block->allocFore (size, block->mGroupID, block->mFlags, 0, 0);
            if (freeBlock)
            {
                recycleFreeBlock (freeBlock);
            }
        }
    }
    unlock();

    return block->mSize;
}

size_t
JKRExpHeap::getSize (void* ptr)
{
    lock();

    CMemBlock* block = CMemBlock::getHeapBlock (ptr);

    if (block == Nil || ptr < mStart || mEnd < ptr)
    {
        unlock();
        return (size_t)-1;
    }
    unlock();

    return block->mSize;
}

size_t
JKRExpHeap::getFreeSize ()
{
    lock();

    size_t maxFreeSize = 0;

    for (CMemBlock* block = mFreeHeadList; block != Nil; block = block->mNext)
    {
        if (maxFreeSize < (s32)block->mSize)
            maxFreeSize = block->mSize;
    }
    unlock();

    return maxFreeSize;
}

size_t
JKRExpHeap::getTotalFreeSize ()
{
    size_t freeSize = 0;

    lock();

    for (CMemBlock* block = mFreeHeadList; block != Nil; block = block->mNext)
    {
        freeSize += block->mSize;
    }
    unlock();

    return freeSize;
}

size_t
JKRExpHeap::getUsedSize (u8 groupId) const
{
    JKRExpHeap* this2 = const_cast<JKRExpHeap*> (this);

    this2->lock();

    u32 size = 0;

    for (CMemBlock* block = mUsedHeadList; block; block = block->mNext)
    {
        u8 blockGroupId = block->mGroupID;
        if (blockGroupId == groupId)
        {
            size += block->mSize + sizeof (CMemBlock);
        }
    }
    this2->unlock();

    return size;
}

/*bool
JKRExpHeap::isEmpty ()
{
    u32 newSize;
    // JUT_ASSERT (newSize > 0);

    return true;
}*/
bool
JKRExpHeap::check ()
{
    lock();

    int  totalBytes = 0;
    bool ok         = true;

    for (CMemBlock* block = mUsedHeadList; block; block = block->mNext)
    {
        totalBytes += sizeof (CMemBlock) + block->mSize + block->getAlignment();
        if (!block->isValid())
        {
            ok = false;
        }
        if (block->mNext)
        {
            if (!block->mNext->isValid())
            {
                ok = false;
                break;
            }
            if (block->mNext->mPrev != block)
            {
                ok = false;
            }
        }
        else
        {
            if (mUsedTailList != block)
            {
                ok = false;
            }
        }
    }
    for (CMemBlock* block = mFreeHeadList; block; block = block->mNext)
    {
        totalBytes += block->mSize + sizeof (CMemBlock);
        if (block->mNext)
        {
            if (block->mNext->mPrev != block)
            {
                ok = false;
            }
            if ((u32)block + block->mSize + sizeof (CMemBlock) > (u32)block->mNext)
            {
                ok = false;
            }
        }
        else
        {
            if (mFreeTailList != block)
            {
                ok = false;
            }
        }
    }
    if (totalBytes != mSize)
    {
        ok = false;
    }

    // if (!ok) {}

    unlock();
    return ok;
}

void
JKRExpHeap::appendUsedList (JKRExpHeap::CMemBlock* blockToAppend)
{
    if (!blockToAppend)
    {
        OSPanic (__FILE__, 1553, ":::ERROR! appendUsedList\n");
    }
    CMemBlock* tail       = mUsedTailList;
    blockToAppend->mMagic = 'HM';
    if (tail)
    {
        tail->mNext          = blockToAppend;
        blockToAppend->mPrev = tail;
    }
    else
    {
        blockToAppend->mPrev = Nil;
    }
    mUsedTailList = blockToAppend;
    if (!mUsedHeadList)
    {
        mUsedHeadList = blockToAppend;
    }
    blockToAppend->mNext = Nil;
}

void
JKRExpHeap::setFreeBlock (JKRExpHeap::CMemBlock* p1,
                          JKRExpHeap::CMemBlock* p2,
                          JKRExpHeap::CMemBlock* p3)
{
    if (p2 == Nil)
    {
        mFreeHeadList = p1;
        p1->mPrev     = Nil;
    }
    else
    {
        p2->mNext = p1;
        p1->mPrev = p2;
    }
    if (p3 == Nil)
    {
        mFreeTailList = p1;
        p1->mNext     = Nil;
    }
    else
    {
        p3->mPrev = p1;
        p1->mNext = p3;
    }
    p1->mMagic = 0;
}

void
JKRExpHeap::removeFreeBlock (JKRExpHeap::CMemBlock* blockToRemove)
{
    CMemBlock* prev = blockToRemove->mPrev;
    CMemBlock* next = blockToRemove->mNext;
    if (prev == Nil)
    {
        mFreeHeadList = next;
    }
    else
    {
        prev->mNext = next;
    }
    if (next == Nil)
    {
        mFreeTailList = prev;
    }
    else
    {
        next->mPrev = prev;
    }
}

void
JKRExpHeap::removeUsedBlock (JKRExpHeap::CMemBlock* blockToRemove)
{
    CMemBlock* prev = blockToRemove->mPrev;
    CMemBlock* next = blockToRemove->mNext;
    if (prev == Nil)
    {
        mUsedHeadList = next;
    }
    else
    {
        prev->mNext = next;
    }
    if (next == Nil)
    {
        mUsedTailList = prev;
    }
    else
    {
        next->mPrev = prev;
    }
}

void
JKRExpHeap::recycleFreeBlock (JKRExpHeap::CMemBlock* block)
{
    JKRExpHeap::CMemBlock* newBlock = block;
    size_t                 size     = block->mSize;
    void*                  blockEnd = (u8*)block + size;
    block->mMagic                   = 0;
    // int offset = block->mFlags & 0x7f;

    if ((u32)(block->mFlags & 0x7f) != 0)
    {
        newBlock            = (CMemBlock*)((u8*)block - (block->mFlags & 0x7f));
        size               += (block->mFlags & 0x7f);
        blockEnd            = (u8*)newBlock + size;
        newBlock->mGroupID  = 0;
        newBlock->mFlags    = 0;
        newBlock->mSize     = size;
    }

    if (!mFreeHeadList)
    {
        newBlock->initiate (Nil, Nil, size, 0, 0);
        mFreeHeadList = newBlock;
        mFreeTailList = newBlock;
        setFreeBlock (newBlock, Nil, Nil);
        return;
    }

    if (mFreeHeadList >= blockEnd)
    {
        newBlock->initiate (Nil, Nil, size, 0, 0);
        setFreeBlock (newBlock, Nil, mFreeHeadList);
        joinTwoBlocks (newBlock);
        return;
    }

    if (mFreeTailList <= newBlock)
    {
        newBlock->initiate (Nil, Nil, size, 0, 0);
        setFreeBlock (newBlock, mFreeTailList, Nil);
        joinTwoBlocks (newBlock->mPrev);
        return;
    }

    for (CMemBlock* freeBlock = mFreeHeadList; freeBlock; freeBlock = freeBlock->mNext)
    {
        if (freeBlock >= newBlock || newBlock >= freeBlock->mNext)
        {
            continue;
        }

        newBlock->mNext        = freeBlock->mNext;
        newBlock->mPrev        = freeBlock;
        freeBlock->mNext       = newBlock;
        newBlock->mNext->mPrev = newBlock;
        newBlock->mGroupID     = 0;
        joinTwoBlocks (newBlock);
        joinTwoBlocks (freeBlock);

        return;
    }
}

void
JKRExpHeap::joinTwoBlocks (CMemBlock* block)
{
    // for some reason this gets rid of regswaps for the debug version, however
    // is most likely incorrect u32 endAddr; u32 nextAddr; CMemBlock *next;

    u32        endAddr  = (u32)(block + 1) + block->mSize;
    CMemBlock* next     = block->mNext;
    u32        nextAddr = (u32)next - (next->mFlags & 0x7f);
    u32        _;
#pragma unused(_)
    if (endAddr > nextAddr)
    {
        JKRGetCurrentHeap()->dump();
        OSPanic (__FILE__, 1836, ":::: Bad Block\n");
    }
    if (endAddr == nextAddr)
    {
        block->mSize = next->mSize + sizeof (CMemBlock) + (next->mFlags & 0x7f) + block->mSize;
        setFreeBlock (block, block->mPrev, next->mNext);
    }
}

bool
JKRExpHeap::dump ()
{
    lock();
    bool result    = check();
    u32  usedBytes = 0;
    u32  usedCount = 0;
    u32  freeCount = 0;
    JUTReportConsole (" attr  address:   size    gid aln   prev_ptr next_ptr\n");
    JUTReportConsole ("(Used Blocks)\n");
    if (!mUsedHeadList)
    {
        JUTReportConsole (" NONE\n");
    }
    for (CMemBlock* block = mUsedHeadList; block; block = block->mNext)
    {
        if (!block->isValid())
        {
            JUTReportConsole_f ("xxxxx %08x: --------  --- ---  (-------- --------)\nabort\n",
                                block);
            break;
        }

        JUTReportConsole_f ("%s %08x: %08x  %3d %3d  (%08x %08x)\n",
                            block->_isTempMemBlock() ? " temp" : "alloc",
                            block->getContent(),
                            block->mSize,
                            block->mGroupID,
                            block->getAlignment(),
                            block->mPrev,
                            block->mNext);
        usedBytes += sizeof (CMemBlock) + block->mSize + block->getAlignment();
        usedCount++;
    }
    JUTReportConsole ("(Free Blocks)\n");
    if (!mFreeHeadList)
    {
        JUTReportConsole (" NONE\n");
    }
    for (CMemBlock* block = mFreeHeadList; block; block = block->mNext)
    {
        JUTReportConsole_f ("%s %08x: %08x  %3d %3d  (%08x %08x)\n",
                            " free",
                            block->getContent(),
                            block->mSize,
                            block->mGroupID,
                            block->getAlignment(),
                            block->mPrev,
                            block->mNext);
        freeCount++;
    }
    float percent = ((float)usedBytes / (float)mSize) * 100.0f;
    JUTReportConsole_f ("%d / %d bytes (%6.2f%%) used (U:%d F:%d)\n",
                        usedBytes,
                        mSize,
                        percent,
                        usedCount,
                        freeCount);
    unlock();
    return result;
}

#ifndef _DEBUG
BOOL
JKRExpHeap::dump_sort ()
{
    lock();
    JKRExpHeap::CMemBlock* block;

    for (block = mFreeHeadList; block != NULL; block = block->mNext) {}
    for (block = mFreeTailList; block != NULL; block = (JKRExpHeap::CMemBlock*)block->mPrev) {}
    for (block = mUsedHeadList; block != NULL; block = block->mNext) {}
    for (block = mUsedTailList; block != NULL; block = (JKRExpHeap::CMemBlock*)block->mPrev) {}
    unlock();
}
#else
BOOL
JKRExpHeap::dump_sort ()
{
    lock();
    bool result    = check();
    u32  usedBytes = 0;
    u32  usedCount = 0;
    u32  freeCount = 0;
    JUTReportConsole (" attr  address:   size    gid aln   prev_ptr next_ptr\n");
    JUTReportConsole ("(Used Blocks)\n");
    if (mUsedHeadList == Nil)
    {
        JUTReportConsole (" NONE\n");
    }
    else
    {
        CMemBlock* var1 = Nil;
        while (true)
        {
            CMemBlock* block = (CMemBlock*)0xffffffff;
            for (CMemBlock* iterBlock = mUsedHeadList; iterBlock; iterBlock = iterBlock->mNext)
            {
                if (var1 < iterBlock && iterBlock < block)
                {
                    block = iterBlock;
                }
            }
            if (block == (CMemBlock*)0xffffffff)
            {
                break;
            }
            if (!block->isValid())
            {
                JUTReportConsole_f (
                    "xxxxx %08x: --------  --- ---  (-------- --------)\nabort\n",
                    block);
                break;
            }
            int         offset  = block->getAlignment();
            void*       content = block->getContent();
            const char* type    = block->_isTempMemBlock() ? " temp" : "alloc";
            JUTReportConsole_f ("%s %08x: %08x  %3d %3d  (%08x %08x)\n",
                                type,
                                content,
                                block->mSize,
                                block->mGroupID,
                                offset,
                                block->mPrev,
                                block->mNext);
            usedBytes += sizeof (CMemBlock) + block->mSize + block->getAlignment();
            usedCount++;
            var1 = block;
        }
    }
    JUTReportConsole ("(Free Blocks)\n");
    if (mFreeHeadList == Nil)
    {
        JUTReportConsole (" NONE\n");
    }
    for (CMemBlock* block = mFreeHeadList; block; block = block->mNext)
    {
        JUTReportConsole_f ("%s %08x: %08x  %3d %3d  (%08x %08x)\n",
                            " free",
                            block->getContent(),
                            block->mSize,
                            block->mGroupID,
                            block->getAlignment(),
                            block->mPrev,
                            block->mNext);
        freeCount++;
    }
    float percent = ((float)usedBytes / (float)mSize) * 100.0f;
    JUTReportConsole_f ("%d / %d bytes (%6.2f%%) used (U:%d F:%d)\n",
                        usedBytes,
                        mSize,
                        percent,
                        usedCount,
                        freeCount);
    unlock();
    return result;
}
#endif
void
JKRExpHeap::CMemBlock::initiate (JKRExpHeap::CMemBlock* prev,
                                 JKRExpHeap::CMemBlock* next,
                                 u32                    size,
                                 u8                     groupID,
                                 u8                     alignment)
{
    mMagic   = 'HM';
    mFlags   = alignment;
    mGroupID = groupID;
    mSize    = size;
    mPrev    = prev;
    mNext    = next;
}

JKRExpHeap::CMemBlock*
JKRExpHeap::CMemBlock::allocFore (u32 size,
                                  u8  groupId1,
                                  u8  alignment1,
                                  u8  groupId2,
                                  u8  alignment2)
{
    CMemBlock* block = Nil;
    mGroupID         = groupId1;
    mFlags           = alignment1;
    if (mSize >= size + sizeof (CMemBlock))
    {
        block           = (CMemBlock*)(size + (u32)this);
        block           = block + 1;
        block->mGroupID = groupId2;
        block->mFlags   = alignment2;
        block->mSize    = mSize - (size + sizeof (CMemBlock));
        mSize           = size;
    }
    return block;
}

JKRExpHeap::CMemBlock*
JKRExpHeap::CMemBlock::allocBack (unsigned long size,
                                  unsigned char groupID,
                                  unsigned char p3,
                                  unsigned char allocGroupID,
                                  unsigned char p5)
{
    CMemBlock* newBlock = Nil;
    if (mSize >= size + sizeof (CMemBlock))
    {
        newBlock = reinterpret_cast<CMemBlock*> (mSize + reinterpret_cast<u8*> (this) - size);
        newBlock->mGroupID  = allocGroupID;
        newBlock->mFlags    = p5 | 0x80;
        newBlock->mSize     = size;
        mGroupID            = groupID;
        mFlags              = p3;
        mSize              -= (size + sizeof (CMemBlock));
    }
    else
    {
        mGroupID = allocGroupID;
        mFlags   = 0x80;
    }
    return newBlock;
}

void*
JKRExpHeap::CMemBlock::free (JKRExpHeap* heap)
{
    heap->removeUsedBlock (this);
    heap->recycleFreeBlock (this);
    return Nil;
}

JKRExpHeap::CMemBlock*
JKRExpHeap::CMemBlock::getHeapBlock (void* mem)
{
    if (mem != Nil && (static_cast<CMemBlock*> (mem) - 1)->mMagic == 0x484D)
    {
        return static_cast<CMemBlock*> (mem) - 1;
    }
    return Nil;
}

u32
JKRExpHeap::getHeapType (void)
{
    return 'EXPH';
}

u32
JKRExpHeap::getUNK (void)
{
    return 10;
}

u32
JKRExpHeap::getCurrentGroupId (void)
{
    return mGroupID;
}
```


