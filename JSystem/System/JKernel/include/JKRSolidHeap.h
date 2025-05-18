#ifndef __JKR_SOLIDHEAP_H__
#define __JKR_SOLIDHEAP_H__

#include <JKRHeap.h>

class JKRSolidHeap : public JKRHeap
{
public:
    static JKRSolidHeap* create (size_t size, JKRHeap* parent, BOOL isError);
    void                 destroy (void);

    s32    adjustSize (void);
    HANDLE allocFromHead (size_t size, int align);
    HANDLE allocFromTail (size_t size, int align);

protected:
    struct Iter
    {
        unk32  _0;
        unk32  _4;
        unk32  _8;
        HANDLE mTail;
        Iter*  mHead;
    };
    typedef struct Iter Iter;

    size_t mFreeSize;
    HANDLE mHead;
    HANDLE mTail;
    Iter*  mIter;

protected:
    constructor JKRSolidHeap (HANDLE obj, size_t size, JKRHeap* parent, bool is_error);
    destructor ~JKRSolidHeap();

public:
    override HANDLE alloc (size_t size, int align);
    override void   free (HANDLE ptr);
    override void   freeAll (void);
    override void   freeTail (void);
    override s32    resize (HANDLE obj, size_t size);
    override s32    getSize (HANDLE obj);
    override size_t getFreeSize (void);
    override size_t getTotalFreeSize (void);
    override u32    getHeapType (void);
    override BOOL   check (void);
    override void*  dump (void);
};

SASSERT_SIZE (JKRSolidHeap, 0x78);

#endif
