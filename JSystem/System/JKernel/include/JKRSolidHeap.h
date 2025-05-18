#ifndef __JKR_SOLIDHEAP_H__
#define __JKR_SOLIDHEAP_H__

#include <JKRHeap.h>

class JKRSolidHeap : public JKRHeap
{
public:

protected:
    size_t mFreeSize;
    HANDLE _6C;
    HANDLE _70;
    u32    _74;

protected:
    constructor JKRSolidHeap (HANDLE obj, size_t size, JKRHeap* parent, bool is_error);
    destructor ~JKRSolidHeap();
};

;
SASSERT_SIZE (JKRSolidHeap, 0x78);

#endif
