#include <dolphin/os.h>

#include <JKRThread.h>

void
JKRThread::setCommon_mesgQueue (JKRHeap*, int)
{}

void
JKRThread::setCommon_heapSpecified (JKRHeap*, u32, int)
{}

JKRThread::JKRThread (OSThread* thread, int i) {}

JKRThread::~JKRThread () {}

void
JKRThread::start (void*)
{}
