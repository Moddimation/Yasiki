#include <JKRExpHeap.h>

#include "JKRHeap.h"
#include "JUTTypes.h"

static int whatdo;  // some sort of state, possibly for dump()?
static int whatdo2; // possibly something for dump()

static size_t DBfoundSize;
static u32    DBfoundOffset;
static void*  DBfoundBlock;
static void*  DBnewFreeBlock;
static void*  DBnewUserBlock;

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
        dump_sort();
    }

    unlock();

    return ptr;
}
