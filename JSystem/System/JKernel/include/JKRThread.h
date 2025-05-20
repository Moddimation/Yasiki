#ifndef __JKR_THREAD_H__
#define __JKR_THREAD_H__

#define WORK_IN_PROGRESS

#include <dolphin/os.h>

#include <JSUList.h>

class JKRHeap;

class JKRThread
{
public:
    constructor JKRThread (OSThread* thread, int i);
    destructor ~JKRThread();

    void start (void*);

    virtual int
    run ()
    {
        return 0;
    }

protected:
    JSULink<JKRThread> mLink;      ///< 0x18
    JKRHeap*           mCurrHeap;  ///< 0x28
    OSThread*          mOSThread;  ///< 0x2C
    OSMessageQueue     mMesgQueue; ///< 0x30
    void*              mMesgArray; ///< 0x50
    u32                mMesgCount; ///< 0x54
    unk32              _58;        ///< 0x58
    unk32              _5C;        ///< 0x5C

private:
    void setCommon_mesgQueue (JKRHeap*, int);
    void setCommon_heapSpecified (JKRHeap*, u32, int);
};

#endif
