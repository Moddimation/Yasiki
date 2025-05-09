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
    mStart = obj;
    mEnd = (void*)((int)obj + size);

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
        ret = heap->alloc (size, align);
    }
    else if (sCurrentHeap != Nil)
    {
        ret = sCurrentHeap->alloc (size, align);
    }

    return ret;
}

void
JKRHeap::free (HANDLE obj, JKRHeap* heap)
{
    if (heap == Nil)
    {
        heap = findFromRoot (obj);
        if (heap == Nil)
        {
            return;
        }
    }
    heap->free (obj);
}

void
JKRHeap::freeAll (void)
{
    unk64 _;

    JSUListIterator<JKRDisposer> iter;
    while (iter = mDisposerList.getFirst(), iter != mDisposerList.getEnd())
    {
        iter.getObject()->~JKRDisposer();
    }
}

JKRHeap*
JKRHeap::findFromRoot (HANDLE obj)
{
    return getRootHeap() != Nil ? getRootHeap()->find (obj) : Nil;
}

JKRHeap*
JKRHeap::find (HANDLE obj) const
{
    if (mStart <= obj && obj <= mEnd)
    {
        if (mHeapTree.getNumChildren() != 0)
        {
            for (JSUTreeIterator<JKRHeap> treeIter (mHeapTree.getFirstChild());
                 treeIter != mHeapTree.getEndChild();
                 ++treeIter)
            {
                JKRHeap* search = treeIter->find (obj);
                if (search == Nil)
                {
                    continue;
                }

                return search;
            }
        }
        return const_cast<JKRHeap*> (SELF);
    }
    return Nil;
}

void
JKRDefaultMemoryErrorRoutine (void*, u32, int)
{
    OSPanic (__FILE__, 629, "abort\n");
}

void*
operator new (size_t size)
{
    return JKRHeap::alloc (size, 4, Nil);
}

void*
operator new (size_t size, int align)
{
    return JKRHeap::alloc (size, align, Nil);
}

void*
operator new (size_t size, JKRHeap* heap, int align)
{
    return JKRHeap::alloc (size, align, heap);
}

void*
operator new[] (size_t size)
{
    return operator new (size);
}

void*
operator new[] (size_t size, int align)
{
    return operator new (size, align);
}

void*
operator new[] (size_t size, JKRHeap* heap, int align)
{
    return operator new (size, heap, align);
}

void
operator delete (void* obj)
{
    JKRHeap::free (obj, Nil);
}

void
operator delete[] (void* obj)
{
    operator delete (obj);
}

