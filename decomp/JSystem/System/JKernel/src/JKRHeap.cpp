#include <JKRHeap.h>

JKRHeap*        JKRHeap::sSystemHeap = Nil;
JKRHeap*        JKRHeap::sCurrentHeap = Nil;
JKRHeap*        JKRHeap::sRootHeap = Nil;
JKRErrorRoutine JKRHeap::mErrorHandler = Nil;

JKRHeap::JKRHeap (HANDLE obj, u32 size, JKRHeap* parent, BOOL error)
  : JKRDisposer(), mHeapTree (SELF), mDisposerList()
{
    OSInitMutex (&mMutex);
    mSize = size;
    pHeapObj = obj;
    mStart = (void*)((int)obj + size);

    if (parent == Nil)
    {
        becomeSystemHeap();
        becomeCurrentHeap();
    }
    else
    {
        parent->mHeapTree.appendChild (&mHeapTree);

        if (sSystemHeap == sRootHeap)
        {
            becomeSystemHeap();
        }
        if (sCurrentHeap == sRootHeap)
        {
            becomeCurrentHeap();
        }
    }
    mErrorFlag = error;
    if (mErrorFlag == true && mErrorHandler == Nil)
    {
        mErrorHandler = JKRDefaultMemoryErrorRoutine;
    }
}

JKRHeap::~JKRHeap ()
{
    mHeapTree.getParent()->removeChild (&mHeapTree);
    JSUTree<JKRHeap>* pNewRoot = sRootHeap->mHeapTree.getFirstChild();
    if (sCurrentHeap == SELF)
    {
        sCurrentHeap = pNewRoot == Nil ? sRootHeap : (JKRHeap*)pNewRoot->getObject();
    }
    if (sSystemHeap == SELF)
    {
        sSystemHeap = pNewRoot == Nil ? sRootHeap : (JKRHeap*)pNewRoot->getObject();
    }
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

void*
JKRHeap::alloc (size_t size, int align, JKRHeap* heap)
{
    void* ret = Nil;

    if (heap != Nil)
    {
        ret = heap->alloc (align, align);
    }
    else if (sCurrentHeap != Nil)
    {
        ret = sCurrentHeap->alloc (align, size);
    }

    return ret;
}

void
JKRDefaultMemoryErrorRoutine (void*, u32, int)
{
    OSPanic (__FILE__, 629, "abort\n");
}

void*
operator new (size_t size)
{
    return JKRHeap::alloc (4, size, JKRHeap::getCurrentHeap());
}

void*
operator new (size_t size, int align)
{
    return JKRHeap::alloc (align, size, JKRHeap::getCurrentHeap());
}

void*
operator new (size_t size, JKRHeap* heap, int align)
{
    return JKRHeap::alloc (align, size, heap);
}

void*
operator new[] (size_t size)
{
}

void*
operator new[] (size_t size, int align)
{
}

void*
operator new[] (size_t size, JKRHeap* heap, int align)
{
}

void
operator delete (void*)
{
}

void
operator delete[] (void*)
{
}

