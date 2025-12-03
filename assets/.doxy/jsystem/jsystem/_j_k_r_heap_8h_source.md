

# File JKRHeap.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**JSystem**](dir_2add8750dabb2c81b6f2c3c5af4cfeba.md) **>** [**System**](dir_e5be38218225624e70ebb9ea7ff5d81f.md) **>** [**JKernel**](dir_cddf90ee7c92ffd4474a8c27c5ea5882.md) **>** [**include**](dir_f5aca01ef7e59deeb7bfd439213c8ac0.md) **>** [**JKRHeap.h**](_j_k_r_heap_8h.md)

[Go to the documentation of this file](_j_k_r_heap_8h.md)


```C++
#ifndef __JKR_HEAP_H__
#define __JKR_HEAP_H__

#include <dolphin/os.h>

#include <JKRDisposer.h>

typedef void (*JKRErrorRoutine) (JKRHeap* heap, size_t size, int align);

class JKRSolidHeap;
class JKRExpHeap;

class JKRHeap : public JKRDisposer
{
    friend class JKRSolidHeap;
    friend class JKRExpHeap;

public:
    // static
    static BOOL     initArena (char** ramStart, u32* ramSize, int maxHeaps);
    static void*    alloc (size_t size, int align, JKRHeap* heap);
    static void     free (void* ptr, JKRHeap* heap);
    static JKRHeap* findFromRoot (void*);
    static void     copyMemory (void*, void*, u32);

    static JKRHeap*
    getSystemHeap ()
    {
        return sSystemHeap;
    }

    static JKRHeap*
    getCurrentHeap ()
    {
        return sCurrentHeap;
    }

    static JKRHeap*
    getRootHeap ()
    {
        return sRootHeap;
    }

    void
    appendDisposer (JKRDisposer* disposer)
    {
        mDisposerList.append (&disposer->mHeapLink);
    }

    void
    removeDisposer (JKRDisposer* disposer)
    {
        mDisposerList.remove (&disposer->mHeapLink);
    }

    BOOL
    getErrorFlag ()
    {
        return mErrorFlag == true;
    }

    void
    callErrorHandler (JKRHeap* heap, size_t size, int align)
    {
        if (mErrorHandler != Nil)
        {
            (*mErrorHandler) (heap, size, align);
        }
    }

    // static members
    static JKRHeap* sSystemHeap;
    static JKRHeap* sCurrentHeap;
    static JKRHeap* sRootHeap;

    static JKRErrorRoutine mErrorHandler;

protected:
    // members

    OSMutex              mMutex;        
    void*                mStart;        
    void*                mEnd;          
    size_t               mSize;         
    JSUTree<JKRHeap>     mHeapTree;     
    JSUList<JKRDisposer> mDisposerList; 
    BOOL                 mErrorFlag;    

protected:
    // base
    constructor JKRHeap (void* obj, size_t size, JKRHeap* parent, bool is_error);
    destructor ~JKRHeap();                             

    JKRHeap* becomeSystemHeap (void);
    JKRHeap* becomeCurrentHeap (void);
    JKRHeap* find (void* obj) const;
    void     dispose_subroutine (size_t start, size_t end);
    int      dispose (void*, u32);
    void     dispose (void*, void*);
    void     dispose (void);

    virtual void*  alloc (size_t size, int align) = 0; 
    virtual void   free (void* ptr)               = 0; 
    virtual void   freeAll (void);                     
    virtual void   freeTail (void)         = 0;        
    virtual size_t resize (void*, size_t)  = 0;        
    virtual size_t getSize (void*)         = 0;        
    virtual size_t getFreeSize (void)      = 0;        
    virtual size_t getTotalFreeSize (void) = 0;        
    virtual u32    getHeapType (void)      = 0;        
    virtual BOOL   check (void)            = 0;        
    virtual BOOL   dump (void)             = 0;        
    virtual u32    getUNK (void);                      
    virtual u32    getCurrentGroupId (void);           

    void
    unlock ()
    {
        OSUnlockMutex (&mMutex);
    }

    void
    lock ()
    {
        OSLockMutex (&mMutex);
    }

    JSUTree<JKRHeap>&
    getHeapTree ()
    {
        return mHeapTree;
    }

    JKRHeap*
    getParent () const
    {
        return mHeapTree.getParent()->getObject();
    }
};

SASSERT_SIZE (JKRHeap, 0x68);

#define USE_MYHEAP      JKRHeap* heap = JKRHeap::findFromRoot (this)
#define USE_SYSTEMHEAP  JKRHeap* heap = JKRHeap::sSystemHeap
#define USE_CURRENTHEAP JKRHeap* heap = JKRHeap::sCurrentHeap
#define USE_ROOTHEAP    JKRHeap* heap = JKRHeap::sRootHeap

void JKRDefaultMemoryErrorRoutine (JKRHeap* heao, size_t size, int align);

extern "C"
{
static inline void*
JKRAllocFromHeap (JKRHeap* heap, size_t size, int align)
{
    return JKRHeap::alloc (size, align, heap);
}

static inline JKRHeap*
JKRGetSystemHeap ()
{
    return JKRHeap::sSystemHeap;
}

static inline JKRHeap*
JKRGetCurrentHeap ()
{
    return JKRHeap::sCurrentHeap;
}

static inline JKRHeap*
JKRGetRootHeap ()
{
    return JKRHeap::sRootHeap;
}
}

static inline void
JKRFree (void* obj)
{
    JKRHeap::free (obj, Nil);
}

static inline void
JKRFreeToHeap (JKRHeap* heap, void* obj)
{
    JKRHeap::free (obj, heap);
}

void* operator new (size_t size);
void* operator new (size_t size, int align);
void* operator new (size_t size, JKRHeap* heap, int align);

void* operator new[] (size_t size);
void* operator new[] (size_t size, int align);
void* operator new[] (size_t size, JKRHeap* heap, int align);

void operator delete (void* data);
void operator delete[] (void* data);

#endif
```


