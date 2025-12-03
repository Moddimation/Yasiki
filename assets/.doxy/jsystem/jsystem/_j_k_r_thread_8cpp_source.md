

# File JKRThread.cpp

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**JSystem**](dir_2add8750dabb2c81b6f2c3c5af4cfeba.md) **>** [**System**](dir_e5be38218225624e70ebb9ea7ff5d81f.md) **>** [**JKernel**](dir_cddf90ee7c92ffd4474a8c27c5ea5882.md) **>** [**src**](dir_2af99252d1c483de143a7a3f414b45a2.md) **>** [**JKRThread.cpp**](_j_k_r_thread_8cpp.md)

[Go to the documentation of this file](_j_k_r_thread_8cpp.md)


```C++
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
```


