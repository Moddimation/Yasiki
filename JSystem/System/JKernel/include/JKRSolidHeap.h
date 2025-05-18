#ifndef __JKR_SOLIDHEAP_H__
#define __JKR_SOLIDHEAP_H__

#include <JKRHeap.h>

class JKRSolidHeap : public JKRHeap
{
public:
    static JKRSolidHeap* create (size_t size, JKRHeap* parent, BOOL isError);
    void                 destroy ();

    s32    adjustSize ();
    HANDLE allocFromHead (size_t size, int align);
    HANDLE allocFromTail (size_t size, int align);

    override HANDLE alloc (size_t size, int align);
    override void   free (HANDLE ptr);
    override void   freeAll (void);
    override void   freeTail (void);
    override s32    resize (HANDLE, int);
    override size_t getSize (HANDLE);
    override size_t getFreeSize (void);
    override size_t getTotalFreeSize (void);
    override u32    getHeapType (void);
    override void   check (void);
    override void   dump (void);

protected:
    size_t mFreeSize;
    HANDLE mHead;
    HANDLE mTail;
    u32    _74;

protected:
    constructor JKRSolidHeap (HANDLE obj, size_t size, JKRHeap* parent, bool is_error);
    destructor ~JKRSolidHeap();
};

SASSERT_SIZE (JKRSolidHeap, 0x78);

#endif
