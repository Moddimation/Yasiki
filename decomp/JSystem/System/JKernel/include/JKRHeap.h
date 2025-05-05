#ifndef __JKR_HEAP_H__
#define __JKR_HEAP_H__

#include <dolphin/os.h>

#include <JKRDisposer.h>
#include <JSUList.h>

typedef void* JKRHeapObj;

class JKRHeap : JKRDisposer
{
public:
    constructor JKRHeap (JKRHeapObj obj, u32, JKRHeap*, bool handleError);
    destructor ~JKRHeap();

    static JKRHeap* initArena (char**, u32*, int);
    static void     alloc (u32, int, JKRHeap* heap);
    static JKRHeap* findFromRoot (JKRHeapObj);
    static void     copyMemory (JKRHeapObj, JKRHeapObj, u32);

    void becomeSystemHeap ();
    void becomeCurrentHeap ();
    void find (JKRHeapObj) const;
    void dispose_subroutine (u32, u32);
    void dispose (JKRHeapObj, u32);
    void dispose (JKRHeapObj, JKRHeapObj);
    void dispose ();

    virtual void alloc (u32, int);
    virtual void free (JKRHeapObj);
    virtual void freeAll ();
    virtual void freeTail ();
    virtual void resize (JKRHeapObj, int);
    virtual u32  getSize (JKRHeapObj);
    virtual u32  getFreeSize ();
    virtual u32  getTotalFreeSize ();
    virtual u32  getHeapType ();
    virtual void check ();
    virtual void dump ();
    virtual void dump_sort ();
    virtual u32  getCurrentGroupId ();

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

private:
    OSMutex*             mMutex;
    u8                   _10[20];
    void*                _30;
    int                  _34;
    u32*                 _38;
    JSUTree<JKRHeap>     _3C;
    JSUList<JKRDisposer> mDisposerList;
    bool                 isError;
};

extern JKRHeap* sSystemHeap;
extern JKRHeap* sCurrentHeap;
extern JKRHeap* sRootHeap;
extern void*    sErrorHandler;
SASSERT_SIZE (JKRHeap, 0x68);
#endif
