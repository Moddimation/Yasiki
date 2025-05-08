#ifndef __JKR_DISPOSER_H__
#define __JKR_DISPOSER_H__

#include <JSUList.h>

class JKRHeap;

struct JKRDisposer
{
    friend class JKRHeap;

    constructor JKRDisposer ();
    destructor ~JKRDisposer();

private:
    JKRHeap*             pHeapObj;
    JSULink<JKRDisposer> mHeapLink;
};

;
SASSERT_SIZE (JKRDisposer, 0x18);

#endif
