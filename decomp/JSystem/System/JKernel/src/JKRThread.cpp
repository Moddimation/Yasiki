#include <dolphin/os.h>

#include <JKRHeap.h>
#include <JKRThread.h>

#include "dolphin/os/OSMessage.h"
#include "dolphin/os/OSThread.h"
#include "JKRDisposer.h"

#define ALIGN_VAL 32

JSUList<JKRThread> sThreadList;

inline void
JKRThread::setCommon_mesgQueue (int mesg_count)
{
    mMesgCount = mesg_count;
    mMesgArray = JKRAllocFromHeap (mCurrHeap, (u32)(mMesgCount << 2), 4);

    OSInitMessageQueue (&mMesgQueue, mMesgArray, mMesgCount);

    sThreadList.append (&mLink);
}

inline void
JKRThread::setCommon_heapSpecified (size_t size, int pri)
{
    mStackSize    = ALIGN_PREV (size, ALIGN_VAL);
    mStack        = JKRAllocFromHeap (mCurrHeap, mStackSize, ALIGN_VAL);
    mThreadRecord = (OSThread*)JKRAllocFromHeap (mCurrHeap, sizeof (OSThread), ALIGN_VAL);

    OSCreateThread (mThreadRecord,
                    start,
                    (void*)this,
                    (void*)((u32)mStack + mStackSize),
                    mStackSize,
                    pri,
                    (u16)1);
}

JKRThread::JKRThread (size_t size, int p1, int pri)
  : JKRDisposer(),
    mLink (this)
{
    mCurrHeap = JKRHeap::findFromRoot (this);
    if (mCurrHeap == Nil)
    {
        mCurrHeap = JKRHeap::getSystemHeap();
    }
    setCommon_heapSpecified (size, pri);
    setCommon_mesgQueue (p1);
}

JKRThread::~JKRThread ()
{
    sThreadList.remove (&mLink);
    if (mCurrHeap != Nil)
    {
        if (!OSIsThreadTerminated (mThreadRecord))
        {
            OSDetachThread (mThreadRecord);
            OSCancelThread (mThreadRecord);
        }
        JKRFreeToHeap (mCurrHeap, mStack);
        JKRFreeToHeap (mCurrHeap, mThreadRecord);
    }
    JKRFree (mMesgArray);
}

void*
JKRThread::start (void* _this)
{
    return ((JKRThread*)_this)->run();
}
