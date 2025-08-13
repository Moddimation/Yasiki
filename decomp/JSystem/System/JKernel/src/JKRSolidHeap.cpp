#include <JKRSolidHeap.h>

JKRSolidHeap*
JKRSolidHeap::create (size_t size, JKRHeap* parent, BOOL isError)
{
    if (parent == Nil)
    {
        parent = sRootHeap;
    }

    const u32 expHeapSize = ALIGN_NEXT (sizeof (JKRSolidHeap), 0x10);
    const u32 alignedSize = ALIGN_PREV (size, 0x10);

    JKRSolidHeap* heap    = (JKRSolidHeap*)JKRHeap::alloc (alignedSize, 0x10, parent);
    void*         dataPtr = (char*)heap + 0x80;

    return new (heap) JKRSolidHeap (dataPtr, alignedSize - expHeapSize, parent, isError);
}

void
JKRSolidHeap::destroy ()
{
    JKRHeap* parent = getParent();
    if (parent != Nil)
    {
        this->~JKRSolidHeap();
        JKRHeap::free (this, parent);
    }
}

JKRSolidHeap::JKRSolidHeap (void* obj, size_t size, JKRHeap* parent, bool is_error)
  : JKRHeap (obj, size, parent, is_error),
    mFreeSize (mSize),
    mHead (mStart),
    mTail (mEnd),
    mIter (Nil)
{}

JKRSolidHeap::~JKRSolidHeap ()
{
    dispose();
}

s32
JKRSolidHeap::adjustSize ()
{
    JKRHeap* parent = getParent();
    if (parent != Nil)
    {
        lock();

        size_t sizeOld = (u32)mStart - (u32)this;
        size_t sizeNew = ALIGN_NEXT ((u32)mHead - (u32)mStart, 0x20);

        size_t result  = parent->resize (this, (size_t)(sizeOld + sizeNew));
        if (result != -1)
        {
            mFreeSize = 0;
            mSize     = sizeNew;
            mEnd      = (void*)((u32)mStart + mSize);
            mHead     = mEnd;
            mTail     = mEnd;
        }

        unlock();

        return (s32)(sizeOld + sizeNew);
    }
    else
    {
        return -1;
    }
}

void*
JKRSolidHeap::alloc (size_t size, int align)
{
    void* mem;

    lock();
    if (size < 4)
    {
        size = 4;
    }

    if (align >= 0)
    {
        mem = allocFromHead (size, align < 4 ? 4 : align);
    }
    else
    {
        mem = allocFromTail (size, align > -4 ? 4 : -align);
    }

    unlock();

    return mem;
}

void*
JKRSolidHeap::allocFromHead (size_t size, int align)
{
    size          = ALIGN_NEXT (size, align);

    void* mem     = Nil;

    u32 startNext = ALIGN_NEXT ((u32)mHead, align);
    u32 sizeNext  = size + (startNext - (u32)mHead);

    if (sizeNext <= mFreeSize)
    {
        mHead      = (void*)((u32)mHead + sizeNext);
        mFreeSize -= sizeNext;
        mem        = (void*)startNext;
    }
    else
    {
        if (mErrorFlag == true && (JKRHeap::mErrorHandler != Nil))
        {
            (*mErrorHandler) (this, size, align);
        }
    }

    return mem;
}

void*
JKRSolidHeap::allocFromTail (size_t size, int align)
{
    size          = ALIGN_NEXT (size, align);

    void* mem     = Nil;

    u32 startLast = ALIGN_PREV ((u32)mTail - size, align);
    u32 sizeLast  = (u32)mTail - startLast;

    if (sizeLast <= mFreeSize)
    {
        mTail      = (void*)((u32)mTail - sizeLast);
        mFreeSize -= sizeLast;
        mem        = (void*)startLast;
    }
    else
    {
        if (mErrorFlag == true && (JKRHeap::mErrorHandler != Nil))
        {
            (*mErrorHandler) (this, size, align);
        }
    }

    return mem;
}

void
JKRSolidHeap::free (void* ptr)
{
#pragma unused(ptr)
}

void
JKRSolidHeap::freeAll (void)
{
    lock();

    JKRHeap::freeAll();

    mFreeSize = mSize;
    mHead     = mStart;
    mTail     = mEnd;
    mIter     = Nil;

    unlock();
}

void
JKRSolidHeap::freeTail (void)
{
    lock();

    if (mTail != mEnd)
    {
        dispose (mTail, mEnd);
    }
    mFreeSize = mFreeSize + ((u32)mEnd - (u32)mTail);
    mTail     = mEnd;
    for (Iter* s = mIter; s != Nil; s = s->mHead) { s->mTail = mEnd; }

    unlock();
}

size_t
JKRSolidHeap::resize (void* obj, size_t size)
{
#pragma unused(obj)
#pragma unused(size)

    return (size_t)-1;
}

size_t
JKRSolidHeap::getSize (void* obj)
{
#pragma unused(obj)

    return (size_t)-1;
}

BOOL
JKRSolidHeap::check (void)
{
    lock();

    u32  check = mFreeSize + ((u32)mHead - (u32)mStart) + ((u32)mEnd - (u32)mTail);
    BOOL ok    = true;

    if (check != mSize)
    {
        ok = false;
    }

    unlock();

    return ok;
}

BOOL
JKRSolidHeap::dump (void)
{
    BOOL ret = dump();

    lock();

#ifdef DEBUG

#endif

    unlock();

    return ret;
}

size_t
JKRSolidHeap::getTotalFreeSize (void)
{
    return getTotalFreeSize();
}

u32
JKRSolidHeap::getHeapType (void)
{
    return 'SLID';
}
