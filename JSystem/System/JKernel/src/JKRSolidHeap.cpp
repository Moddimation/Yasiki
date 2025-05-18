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
        unlock();

        size_t sizeOld = (u32)mStart - (u32)this;
        size_t sizeNew = ALIGN_NEXT ((u32)mHead - (u32)mStart, 0x20);

        s32 result     = parent->resize (this, sizeOld + sizeNew);
        if (result != -1)
        {
            mFreeSize = 0;
            mSize     = sizeNew;
            mEnd      = (void*)((u32)mStart + mSize);
            mHead     = mEnd;
            mTail     = mEnd;
        }

        lock();

        return sizeOld + sizeNew;
    }
    else
    {
        return -1;
    }
}

JKRHeap*
JKRSolidHeap::alloc (size_t size, int align)
{}
