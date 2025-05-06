#ifndef __JKR_HEAP_H__
#define __JKR_HEAP_H__

#include <dolphin/os.h>

#include <JKRDisposer.h>
#include <JSUList.h>

typedef JKRHeap* JKRHEAP_HANDLE;

class JKRHeap : JKRDisposer
{
public:
    static JKRHeap* initArena (char**, u32*, int maxHeaps);
    static void     alloc (u32, int, JKRHeap* parent);
    static JKRHeap* getSystemHeap (void);
    static JKRHeap* getCurrentHeap (void);
    static JKRHeap* getRootHeap (void);
    static JKRHeap* findFromRoot (JKRHEAP_HANDLE);
    static void     copyMemory (JKRHEAP_HANDLE, JKRHEAP_HANDLE, u32);

    void
    appendDisposer (JKRDisposer* disposer)
    {
        mDisposerList.append (&disposer->mPtr);
    }

    void
    removeDisposer (JKRDisposer* disposer)
    {
        mDisposerList.remove (&disposer->mPtr);
    }

protected:
    static JKRHeap* sSystemHeap;
    static JKRHeap* sCurrentHeap;
    static JKRHeap* sRootHeap;
    static void*    sErrorHandler;

    OSMutex              mMutex;          ///< 0x18
    JKRHEAP_HANDLE       pHeapObj;        ///< 0x30
    void*                mEnd;            ///< 0x34
    u32                  mSize;           ///< 0x38
    JSUTree<JKRHeap>     mHeapTree;       ///< 0x3C
    JSUList<JKRDisposer> mDisposerList;   ///< 0x58
    BOOL                 mIsAssertLocked; ///< 0x64

protected:
    constructor JKRHeap (JKRHEAP_HANDLE obj, u32 size, JKRHeap* parent, bool isAssertLocked);
    destructor ~JKRHeap();

    JKRHeap* becomeSystemHeap ();
    JKRHeap* becomeCurrentHeap ();
    JKRHeap* find (JKRHEAP_HANDLE) const;
    void     dispose_subroutine (u32, u32);
    void     dispose (JKRHEAP_HANDLE, u32);
    void     dispose (JKRHEAP_HANDLE, JKRHEAP_HANDLE);
    void     dispose ();

    virtual void alloc (u32, int);
    virtual void free (JKRHEAP_HANDLE);
    virtual void freeAll ();
    virtual void freeTail ();
    virtual void resize (JKRHEAP_HANDLE, int);
    virtual u32  getSize (JKRHEAP_HANDLE);
    virtual u32  getFreeSize ();
    virtual u32  getTotalFreeSize ();
    virtual u32  getHeapType ();
    virtual void check ();
    virtual void dump ();
    virtual void dump_sort ();
    virtual u32  getCurrentGroupId ();

    inline void
    append (JKRHeap* next)
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
};

SASSERT_SIZE (JKRHeap, 0x68);

#define USE_MYHEAP                        // JKRHeap* heap = JKRHeap::findFromRoot (SELF)
#define USE_SYSTEMHEAP  JKRHeap* heap = JKRHeap::getSystemHeap()
#define USE_CURRENTHEAP JKRHeap* heap = JKRHeap::getCurrentHeap()
#define USE_ROOTHEAP    JKRHeap* heap = JKRHeap::getRootHeap()

extern "C"
{
void JKRSetCurrentHeap ();
}

#endif
