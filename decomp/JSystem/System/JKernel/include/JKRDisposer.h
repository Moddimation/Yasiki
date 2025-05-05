#ifndef __JKR_DISPOSER_H__
#define __JKR_DISPOSER_H__

#include <JSUList.h>

class JKRHeap;

struct JKRDisposer
{
    constructor JKRDisposer ();
    destructor ~JKRDisposer();

    JKRHeap*             pHeap;
    JSULink<JKRDisposer> mPtr;
};

;
SASSERT_SIZE (JKRDisposer, 0x18);

#endif
