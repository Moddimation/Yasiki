

# File JKRHeap.cpp

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**JSystem**](dir_2add8750dabb2c81b6f2c3c5af4cfeba.md) **>** [**System**](dir_e5be38218225624e70ebb9ea7ff5d81f.md) **>** [**JKernel**](dir_cddf90ee7c92ffd4474a8c27c5ea5882.md) **>** [**src**](dir_2af99252d1c483de143a7a3f414b45a2.md) **>** [**JKRHeap.cpp**](_j_k_r_heap_8cpp.md)

[Go to the documentation of this file](_j_k_r_heap_8cpp.md)


```C++
#include <JKRHeap.h>

JKRHeap*        JKRHeap::sSystemHeap   = Nil;
JKRHeap*        JKRHeap::sCurrentHeap  = Nil;
JKRHeap*        JKRHeap::sRootHeap     = Nil;
JKRErrorRoutine JKRHeap::mErrorHandler = Nil;

JKRHeap::JKRHeap (void* obj, size_t size, JKRHeap* parent, BOOL error)
  : JKRDisposer(),
    mHeapTree (this),
    mDisposerList()
{
    OSInitMutex (&mMutex);
    mSize  = size;
    mStart = obj;
    mEnd   = (void*)((int)obj + size);

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
    if (sCurrentHeap == this)
    {
        sCurrentHeap = pNewRoot == Nil ? sRootHeap : (JKRHeap*)pNewRoot->getObject();
    }
    if (sSystemHeap == this)
    {
        sSystemHeap = pNewRoot == Nil ? sRootHeap : (JKRHeap*)pNewRoot->getObject();
    }
}

BOOL
JKRHeap::initArena (char** ramStart, u32* ramSize, int maxHeaps)
{
    void* arenaLo = OSGetArenaLo();
    void* arenaHi = OSGetArenaHi();

    if (arenaLo == arenaHi)
    {
        return FALSE;
    }

    void* arenaStart = OSInitAlloc (arenaLo, arenaHi, maxHeaps);

    arenaHi          = (void*)OSRoundDown32B (arenaHi);
    arenaLo          = (void*)OSRoundUp32B (arenaStart);

    OSSetArenaLo (arenaHi);
    OSSetArenaHi (arenaHi);

    *ramStart = (char*)arenaLo;
    *ramSize  = (u32)arenaHi - (u32)arenaLo;

    return TRUE;
}

JKRHeap*
JKRHeap::becomeSystemHeap ()
{
    USE_SYSTEMHEAP;
    sSystemHeap = this;
    return heap;
}

JKRHeap*
JKRHeap::becomeCurrentHeap ()
{
    USE_CURRENTHEAP;
    sCurrentHeap = this;
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
JKRHeap::free (void* obj, JKRHeap* heap)
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
#pragma unused(_)

    JSUListIterator<JKRDisposer> iter;
    while (iter = mDisposerList.getFirst(), iter != mDisposerList.getEnd())
    {
        iter.getObject()->~JKRDisposer();
    }
}

JKRHeap*
JKRHeap::findFromRoot (void* obj)
{
    if (getRootHeap() != Nil)
    {
        return getRootHeap()->find (obj);
    }

    return Nil;
}

JKRHeap*
JKRHeap::find (void* obj) const
{
    if (mStart <= obj && obj <= mEnd)
    {
        if (mHeapTree.getNumChildren() != 0)
        {
            for (JSUTreeIterator<JKRHeap> iter (mHeapTree.getFirstChild());
                 iter != mHeapTree.getEndChild();
                 --iter)
            {
                JKRHeap* search = iter->find (obj);
                if (search != Nil)
                {
                    return search;
                }
            }
        }
        return const_cast<JKRHeap*> (this);
    }
    return Nil;
}

void
JKRHeap::dispose_subroutine (size_t begin, size_t end)
{
    JSUListIterator<JKRDisposer> iter_prev;
    JSUListIterator<JKRDisposer> iter_next;
    JSUListIterator<JKRDisposer> iter_curr;

    for (iter_curr = mDisposerList.getFirst(); iter_curr != mDisposerList.getEnd();
         iter_curr = iter_next)
    {
        void* obj = iter_curr.getObject();
        if ((void*)begin <= obj && obj < (void*)end)
        {
            iter_curr.getObject()->~JKRDisposer();
            if (iter_prev == Nil)
            {
                iter_next = mDisposerList.getFirst();
            }
            else
            {
                iter_next = iter_prev;
                iter_next--;
            }
        }
        else
        {
            iter_prev = iter_curr;
            iter_next = iter_curr;
            iter_next--;
        }
    }
}

int
JKRHeap::dispose (void* obj, u32 size)
{
    u32 begin = (u32)obj;
    u32 end   = (u32)obj + size;
    dispose_subroutine (begin, end);
    return 0;
}

void
JKRHeap::dispose (void* begin, void* end)
{
    dispose_subroutine ((u32)begin, (u32)end);
}

void
JKRHeap::dispose ()
{
    unk64 _;
#pragma unused(_)

    JSUListIterator<JKRDisposer> iterator;
    while (iterator = mDisposerList.getFirst(), iterator != mDisposerList.getEnd())
    {
        iterator->~JKRDisposer();
    }
}

static inline void
__copyMemory (u32* __dest, u32* __source, u32 size)
{
    while (size-- > 0)
    {
        *__dest = *__source;
        __dest++;
        __source++;
    }
}

void
JKRHeap::copyMemory (void* dest, void* source, u32 size)
{
    __copyMemory ((u32*)dest, (u32*)source, (size + 3) / 4);
}

void
JKRDefaultMemoryErrorRoutine (JKRHeap* heap, size_t size, int align)
{
#pragma unused(heap)
#pragma unused(size)
#pragma unused(align)

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

u32
JKRHeap::getUNK (void)
{
    return 0;
}

u32
JKRHeap::getCurrentGroupId (void)
{
    return 0;
}
```


