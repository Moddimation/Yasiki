#include <JKRSolidHeap.h>

#include <new>

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
    HANDLE        dataPtr = (char*)heap + 0x80;

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

JKRSolidHeap::JKRSolidHeap (HANDLE obj, size_t size, JKRHeap* parent, bool is_error)
  : JKRHeap (obj, size, parent, is_error), mFreeSize (mSize), mHead (mStart), mTail (mEnd),
    _74 (0)
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

        s32 result     = parent->resize (this, (int)(sizeOld + sizeNew));
        if (result != -1)
        {
            mFreeSize = 0;
            mSize     = sizeNew;
            mEnd      = (HANDLE)((u32)mStart + mSize);
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

HANDLE
JKRSolidHeap::alloc (size_t size, int align)
{
    HANDLE mem;

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

HANDLE
JKRSolidHeap::allocFromHead (size_t size, int align)
{
    size          = ALIGN_NEXT (size, align);

    HANDLE mem    = Nil;

    u32 startNext = ALIGN_NEXT ((u32)mHead, align);
    u32 sizeNext  = size + (startNext - (u32)mHead);

    if (sizeNext <= mFreeSize)
    {
        mHead      = (HANDLE)((u32)mHead + sizeNext);
        mFreeSize -= sizeNext;
        mem        = (HANDLE)startNext;
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

HANDLE
JKRSolidHeap::allocFromTail (size_t size, int align)
{
    size          = ALIGN_NEXT (size, align);

    HANDLE mem    = Nil;

    u32 startLast = ALIGN_PREV ((u32)mTail - size, align);
    u32 sizeLast  = (u32)mTail - startLast;

    if (sizeLast <= mFreeSize)
    {
        mTail      = (HANDLE)((u32)mTail - sizeLast);
        mFreeSize -= sizeLast;
        mem        = (HANDLE)startLast;
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
