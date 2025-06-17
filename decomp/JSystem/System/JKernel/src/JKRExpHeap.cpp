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

