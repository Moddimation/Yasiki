

# File OSThread.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**os**](dir_ec7c732b679442ba7b10ef1b15f4b60e.md) **>** [**OSThread.h**](_o_s_thread_8h.md)

[Go to the documentation of this file](_o_s_thread_8h.md)


```C++
#ifndef __OSTHREAD_H__
#define __OSTHREAD_H__

#ifdef __cplusplus
extern "C"
{
#endif

#include <dolphin/os/OSContext.h>

typedef struct OSThread      OSThread;
typedef struct OSThreadQueue OSThreadQueue;
typedef struct OSThreadLink  OSThreadLink;
typedef s32                  OSPriority; //  0 highest, 31 lowest

typedef struct OSMutex      OSMutex;
typedef struct OSMutexQueue OSMutexQueue;
typedef struct OSMutexLink  OSMutexLink;
typedef struct OSCond       OSCond;

typedef void (*OSIdleFunction) (void* param);

struct OSThreadQueue
{
    OSThread* head;                      
    OSThread* tail;                      
};

struct OSThreadLink
{
    OSThread* next;                      
    OSThread* prev;                      
};

struct OSMutexQueue
{
    OSMutex* head;                       
    OSMutex* tail;                       
};

struct OSMutexLink
{
    OSMutex* next;                       
    OSMutex* prev;                       
};

struct OSThread
{
    OSContext context;                   

    u16        state;                    
    u16        attr;                     
    s32        suspend;                  
    OSPriority priority;                 
    OSPriority base;                     
    void*      val;                      

    OSThreadQueue* queue;                
    OSThreadLink   link;                 

    OSThreadQueue queueJoin;             

    OSMutex*     mutex;                  
    OSMutexQueue queueMutex;             

    OSThreadLink linkActive;             

    u8*  stackBase;                      
    u32* stackEnd;                       
};

// Thread states
enum OS_THREAD_STATE
{
    OS_THREAD_STATE_READY = 1,
    OS_THREAD_STATE_RUNNING = 2,
    OS_THREAD_STATE_WAITING = 4,
    OS_THREAD_STATE_MORIBUND = 8
};

// Thread priorities
#define OS_PRIORITY_MIN       0  // highest
#define OS_PRIORITY_MAX       31 // lowest
#define OS_PRIORITY_IDLE      OS_PRIORITY_MAX

// Thread attributes
#define OS_THREAD_ATTR_DETACH 0x0001u // detached

// Stack magic value
#define OS_THREAD_STACK_MAGIC 0xDEADBABE

void       OSInitThreadQueue (OSThreadQueue* queue);
OSThread*  OSGetCurrentThread (void);
BOOL       OSIsThreadSuspended (OSThread* thread);
BOOL       OSIsThreadTerminated (OSThread* thread);
s32        OSDisableScheduler (void);
s32        OSEnableScheduler (void);
void       OSYieldThread (void);
BOOL       OSCreateThread (OSThread*  thread,
                           void*      (*func) (void*),
                           void*      param,
                           void*      stack,
                           u32        stackSize,
                           OSPriority priority,
                           u16        attr);
void       OSExitThread (void* val);
void       OSCancelThread (OSThread* thread);
BOOL       OSJoinThread (OSThread* thread, void** val);
void       OSDetachThread (OSThread* thread);
s32        OSResumeThread (OSThread* thread);
s32        OSSuspendThread (OSThread* thread);
BOOL       OSSetThreadPriority (OSThread* thread, OSPriority priority);
OSPriority OSGetThreadPriority (OSThread* thread);
void       OSSleepThread (OSThreadQueue* queue);
void       OSWakeupThread (OSThreadQueue* queue);

OSThread* OSSetIdleFunction (OSIdleFunction idleFunction, void* param, void* stack, u32 stackSize);
OSThread* OSGetIdleFunction (void);

long OSCheckActiveThreads (void);

#ifdef __cplusplus
}
#endif

#endif // __OSTHREAD_H__
```


