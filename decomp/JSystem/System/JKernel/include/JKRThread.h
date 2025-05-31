#ifndef __JKR_THREAD_H__
#define __JKR_THREAD_H__

#define WORK_IN_PROGRESS

#include <dolphin/os.h>

#include <JKRDisposer.h>
#include <JSUList.h>

class JKRHeap;

class JKRThread : public JKRDisposer
{
protected:
    constructor JKRThread (OSThread* thread, int i);
    constructor JKRThread (size_t size, int mesg_count, int priority);
    destructor ~JKRThread();

    virtual void*
    run ()
    {
        return Nil;
    }

protected:
    JSULink<JKRThread> mLink;         ///< 0x18
    JKRHeap*           mCurrHeap;     ///< 0x28
    OSThread*          mThreadRecord; ///< 0x2C
    OSMessageQueue     mMesgQueue;    ///< 0x30
    void*              mMesgArray;    ///< 0x50
    int                mMesgCount;    ///< 0x54
    void*              mStack;        ///< 0x58
    size_t             mStackSize;    ///< 0x5C

private:
    void setCommon_mesgQueue (int mesg_count);
    void setCommon_heapSpecified (size_t size, int priority);

    static void* start (void*);
};

#endif
