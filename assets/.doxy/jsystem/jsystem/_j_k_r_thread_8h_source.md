

# File JKRThread.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**JSystem**](dir_2add8750dabb2c81b6f2c3c5af4cfeba.md) **>** [**System**](dir_e5be38218225624e70ebb9ea7ff5d81f.md) **>** [**JKernel**](dir_cddf90ee7c92ffd4474a8c27c5ea5882.md) **>** [**include**](dir_f5aca01ef7e59deeb7bfd439213c8ac0.md) **>** [**JKRThread.h**](_j_k_r_thread_8h.md)

[Go to the documentation of this file](_j_k_r_thread_8h.md)


```C++
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
    JSULink<JKRThread> mLink;         
    JKRHeap*           mCurrHeap;     
    OSThread*          mThreadRecord; 
    OSMessageQueue     mMesgQueue;    
    void*              mMesgArray;    
    int                mMesgCount;    
    void*              mStack;        
    size_t             mStackSize;    

private:
    void setCommon_mesgQueue (int mesg_count);
    void setCommon_heapSpecified (size_t size, int priority);

    static void* start (void*);
};

#endif
```


