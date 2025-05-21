

# File JKRHeap.h

[**File List**](files.md) **>** [**include**](dir_aa4045410c0ff4a0352c8e4463772829.md) **>** [**JKRHeap.h**](_j_k_r_heap_8h.md)

[Go to the documentation of this file](_j_k_r_heap_8h.md)


```C++
#ifndef __JKR_HEAP_H__
#define __JKR_HEAP_H__

#include <dolphin/os.h>

#include <JKRDisposer.h>

#include <size_t.h>

typedef void* HANDLE;
typedef void  (*JKRErrorRoutine) (void*, u32, int);

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
    static void     free (HANDLE ptr, JKRHeap* heap);
    static JKRHeap* findFromRoot (HANDLE);
    static void     copyMemory (HANDLE, HANDLE, u32);

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

protected:
    // members
    static JKRHeap* sSystemHeap;
    static JKRHeap* sCurrentHeap;
    static JKRHeap* sRootHeap;

    static JKRErrorRoutine mErrorHandler;

    OSMutex              mMutex;        
    HANDLE               mStart;        
    HANDLE               mEnd;          
    size_t               mSize;         
    JSUTree<JKRHeap>     mHeapTree;     
    JSUList<JKRDisposer> mDisposerList; 
    BOOL                 mErrorFlag;    

protected:
    // base
    constructor JKRHeap (HANDLE obj, size_t size, JKRHeap* parent, bool is_error);
    destructor ~JKRHeap();

    JKRHeap* becomeSystemHeap (void);
    JKRHeap* becomeCurrentHeap (void);
    JKRHeap* find (HANDLE obj) const;
    void     dispose_subroutine (size_t start, size_t end);
    int      dispose (HANDLE, u32);
    void     dispose (HANDLE, HANDLE);
    void     dispose (void);

    virtual HANDLE alloc (size_t size, int align) = 0;
    virtual void   free (HANDLE ptr)              = 0;
    virtual void   freeAll (void);
    virtual void   freeTail (void)         = 0;
    virtual s32    resize (HANDLE, size_t) = 0;
    virtual s32    getSize (HANDLE)        = 0;
    virtual size_t getFreeSize (void)      = 0;
    virtual size_t getTotalFreeSize (void) = 0;
    virtual u32    getHeapType (void)      = 0;
    virtual BOOL   check (void)            = 0;
    virtual BOOL   dump (void)             = 0;
    virtual BOOL   dump_sort (void);
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

void JKRDefaultMemoryErrorRoutine (void*, u32, int);

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


