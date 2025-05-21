

# File JKRThread.h

[**File List**](files.md) **>** [**include**](dir_aa4045410c0ff4a0352c8e4463772829.md) **>** [**JKRThread.h**](_j_k_r_thread_8h.md)

[Go to the documentation of this file](_j_k_r_thread_8h.md)


```C++
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
    JSULink<JKRThread> mLink;      
    JKRHeap*           mCurrHeap;  
    OSThread*          mOSThread;  
    OSMessageQueue     mMesgQueue; 
    void*              mMesgArray; 
    u32                mMesgCount; 
    unk32              _58;        
    unk32              _5C;        

private:
    void setCommon_mesgQueue (JKRHeap*, int);
    void setCommon_heapSpecified (JKRHeap*, u32, int);
};

#endif
```


