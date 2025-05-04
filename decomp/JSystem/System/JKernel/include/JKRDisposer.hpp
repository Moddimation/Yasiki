#ifndef __JKR_DISPOSER_HPP__
#define __JKR_DISPOSER_HPP__

#include <JSUList.hpp>

// find where to put these
#define constructor explicit
#define destructor  virtual

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
