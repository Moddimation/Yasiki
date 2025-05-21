

# File DBInterface.h

[**File List**](files.md) **>** [**db**](dir_399e703386b77c4e5fd5144a35429885.md) **>** [**DBInterface.h**](_d_b_interface_8h.md)

[Go to the documentation of this file](_d_b_interface_8h.md)


```C++
#ifndef _DOLPHIN_DBINTERFACE_H_
#define _DOLPHIN_DBINTERFACE_H_

#include <dolphin/os.h>

#ifdef __cplusplus
extern "C"
{
#endif

typedef void (*MTRCallbackType) (s32);

typedef struct DBInterface
{
    u32   bPresent;
    u32   exceptionMask;
    void  (*ExceptionDestination) (void);
    void* exceptionReturn;
} DBInterface;

extern DBInterface* __DBInterface;

void DBInit (void);
void DBInitComm (u8** inputFlagPtr, MTRCallbackType mtrCallback);
void __DBExceptionDestination (void);
void __DBExceptionDestinationAux (void);
BOOL __DBIsExceptionMarked (__OSException exception);
void __DBMarkException (__OSException exception, BOOL value);
void __DBSetPresent (u32 value);

#ifdef __cplusplus
}
#endif

#endif
```


