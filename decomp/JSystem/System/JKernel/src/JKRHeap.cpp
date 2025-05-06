#include <JKRHeap.h>

JKRHeap::JKRHeap (JKRHEAP_HANDLE obj, u32 size, JKRHeap* parent, bool isAssertLocked) : _3C (SELF)
{
    OSInitMutex (&mMutex);
    mSize = size;
    pHeapObj = obj;
    mEnd = (void*)((int)obj + size);
    if (parent != nullptr)
    {
        becomeSystemHeap();
        becomeCurrentHeap();
    }
    else
    {
        parent->if (getSystemHeap() == getRootHeap()) {}
    }
}

JKRHeap::~JKRHeap () {}

JKRHeap*
JKRHeap::getSystemHeap ()
{
}

JKRHeap*
JKRHeap::getCurrentHeap ()
{
}

JKRHeap*
JKRHeap::getRootHeap ()
{
}

JKRHeap*
JKRHeap::becomeSystemHeap ()
{
    USE_SYSTEMHEAP;
    sSystemHeap = SELF;
    return heap;
}

JKRHeap*
JKRHeap::becomeCurrentHeap ()
{
    USE_CURRENTHEAP;
    sCurrentHeap = SELF;
    return heap;
}
