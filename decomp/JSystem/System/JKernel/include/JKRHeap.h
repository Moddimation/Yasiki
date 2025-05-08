#ifndef __JKR_HEAP_H__
#define __JKR_HEAP_H__

#include <dolphin/os.h>

#include <JKRDisposer.h>
#include <JSUList.h>

typedef void* HANDLE;
typedef void  (*JKRErrorRoutine) (void*, u32, int);

class JKRHeap : JKRDisposer
{
public:
    // static
    static JKRHeap* initArena (char**, u32*, int maxHeaps);
    static void*    alloc (size_t size, int align, JKRHeap* heap);
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

protected:
    // members
    static JKRHeap* sSystemHeap;
    static JKRHeap* sCurrentHeap;
    static JKRHeap* sRootHeap;

    static JKRErrorRoutine mErrorHandler;

    OSMutex              mMutex;        ///< 0x18
    HANDLE               pHeapObj;      ///< 0x30
    void*                mStart;        ///< 0x34
    u32                  mSize;         ///< 0x38
    JSUTree<JKRHeap>     mHeapTree;     ///< 0x3C
    JSUList<JKRDisposer> mDisposerList; ///< 0x58
    BOOL                 mErrorFlag;    ///< 0x64

protected:
    // base
    constructor JKRHeap (HANDLE obj, u32 size, JKRHeap* parent, bool isAssertLocked);
    destructor ~JKRHeap();

    JKRHeap* becomeSystemHeap (void);
    JKRHeap* becomeCurrentHeap (void);
    JKRHeap* find (HANDLE) const;
    void     dispose_subroutine (u32, u32);
    void     dispose (HANDLE, u32);
    void     dispose (HANDLE, HANDLE);
    void     dispose (void);

    virtual void* alloc (int align, size_t size);
    virtual void  free (HANDLE);
    virtual void  freeAll (void);
    virtual void  freeTail (void);
    virtual void  resize (HANDLE, int);
    virtual u32   getSize (HANDLE);
    virtual u32   getFreeSize (void);
    virtual u32   getTotalFreeSize (void);
    virtual u32   getHeapType (void);
    virtual void  check (void);
    virtual void  dump (void);
    virtual void  dump_sort (void);
    virtual u32   getCurrentGroupId (void);

    void
    appendDisposer (JKRDisposer* disposer)
    {
        mDisposerList.append (&disposer->mHeapLink);
    }

    void
    append (JKRHeap* parent)
    {
    }

    void
    removeDisposer (JKRDisposer* disposer)
    {
        mDisposerList.remove (&disposer->mHeapLink);
    }

    void
    remove (JKRHeap* parent)
    {
    }

    void
    unlock ()
    {
        OSLockMutex (&mMutex);
    }

    void
    lock ()
    {
        OSUnlockMutex (&mMutex);
    }

    JSUTree<JKRHeap>&
    getHeapTree ()
    {
        return mHeapTree;
    }
};

SASSERT_SIZE (JKRHeap, 0x68);

#define USE_MYHEAP      JKRHeap* heap = JKRHeap::findFromRoot (SELF)
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
