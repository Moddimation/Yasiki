#include <JKRHeap.h>

JKRHeap* sSystemHeap;
JKRHeap* sCurrentHeap;
JKRHeap* sRootHeap;
void*    sErrorHandler;

JKRHeap::JKRHeap (JKRHeapObj obj, u32, JKRHeap*, bool handleError) : _3C (this) {}

JKRHeap::~JKRHeap () {}
