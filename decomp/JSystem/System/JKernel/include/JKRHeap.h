#ifndef __JKR_HEAP_H__
#define __JKR_HEAP_H__

#include <dolphin/os.h>

#include <JKRDisposer.h>

typedef void (*JKRErrorRoutine) (void*, u32, int);

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

    // static members
    static JKRHeap* sSystemHeap;
    static JKRHeap* sCurrentHeap;
    static JKRHeap* sRootHeap;

    static JKRErrorRoutine mErrorHandler;

protected:
    // members

    OSMutex              mMutex;        ///< 0x18
    void*                mStart;        ///< 0x30
    void*                mEnd;          ///< 0x34
    size_t               mSize;         ///< 0x38
    JSUTree<JKRHeap>     mHeapTree;     ///< 0x3C
    JSUList<JKRDisposer> mDisposerList; ///< 0x58
    BOOL                 mErrorFlag;    ///< 0x64

protected:
    // base
    constructor JKRHeap (void* obj, size_t size, JKRHeap* parent, bool is_error);
    destructor ~JKRHeap();                             ///< 0x08v

    JKRHeap* becomeSystemHeap (void);
    JKRHeap* becomeCurrentHeap (void);
    JKRHeap* find (void* obj) const;
    void     dispose_subroutine (size_t start, size_t end);
    int      dispose (void*, u32);
    void     dispose (void*, void*);
    void     dispose (void);

    virtual void*  alloc (size_t size, int align) = 0; ///< 0x0Cv
    virtual void   free (void* ptr)               = 0; ///< 0x10v
    virtual void   freeAll (void);                     ///< 0x14v
    virtual void   freeTail (void)         = 0;        ///< 0x18v
    virtual s32    resize (void*, size_t)  = 0;        ///< 0x1Cv
    virtual s32    getSize (void*)         = 0;        ///< 0x20v
    virtual size_t getFreeSize (void)      = 0;        ///< 0x24v
    virtual size_t getTotalFreeSize (void) = 0;        ///< 0x28v
    virtual u32    getHeapType (void)      = 0;        ///< 0x2Cv
    virtual BOOL   check (void)            = 0;        ///< 0x30v
    virtual BOOL   dump (void)             = 0;        ///< 0x34v
    virtual BOOL   dump_sort (void);                   ///< 0x38v
    virtual u32    getCurrentGroupId (void);           ///< 0x3Cv

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
