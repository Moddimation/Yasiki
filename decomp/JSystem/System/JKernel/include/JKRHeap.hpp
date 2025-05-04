#ifndef __JKR_HEAP_HPP__
#define __JKR_HEAP_HPP__

#include <JKRDisposer.hpp>
#include <JSUList.hpp>

// find where to put these
#define constructor explicit
#define destructor  virtual

typedef void* JKRHeapObj;

class JKRHeap
{
public:
    constructor JKRHeap (JKRHeapObj, u32, JKRHeap*, bool);
    destructor ~JKRHeap();

    static JKRHeap* initArena (char**, u32*, size_t size);
    static void     alloc (u32, size_t, JKRHeap* heap);
    static JKRHeap* findFromRoot (JKRHeapObj);
    static void     copyMemory (JKRHeapObj, JKRHeapObj, u32);

    void becomeSystemHeap ();
    void becomeCurrentHeap ();
    void find (JKRHeapObj) const;
    void dispose_subroutine (u32, u32);
    void dispose (JKRHeapObj, u32);
    void dispose (JKRHeapObj, JKRHeapObj);
    void dispose ();

    virtual void alloc (u32, size_t);
    virtual void free (JKRHeapObj);
    virtual void freeAll ();
    virtual void freeTail ();
    virtual void resize (JKRHeapObj size_t);
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
        mPtrList.append (&disposer->mPtr);
    }

    void
    removeDisposer (JKRDisposer* disposer)
    {
        mPtrList.remove (&disposer->mPtr);
    }

private:
    u8         pad[84];
    JSUPtrList mPtrList;
    bool       someBool;
};

#endif
