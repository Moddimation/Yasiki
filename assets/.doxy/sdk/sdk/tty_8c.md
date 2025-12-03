

# File tty.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**mcc**](dir_09af956a0e77733960814cc502aa891a.md) **>** [**tty.c**](tty_8c.md)

[Go to the source code of this file](tty_8c_source.md)



* `#include <dolphin/mcc.h>`
* `#include <dolphin.h>`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u8**](types_8h.md#typedef-u8) | [**gBuf**](#variable-gbuf)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**gBufHead**](#variable-gbufhead)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**gBufTail**](#variable-gbuftail)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) | [**gChID**](#variable-gchid)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**gOldEvent**](#variable-goldevent)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**gPrintfID**](#variable-gprintfid)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**gQuery**](#variable-gquery)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**gReadDone**](#variable-greaddone)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ShowChannelInfo**](#function-showchannelinfo) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**TTYExit**](#function-ttyexit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**TTYFlush**](#function-ttyflush) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**TTYInit**](#function-ttyinit) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_EXI**](mcc_8h.md#enum-mcc_exi) exiChannel, [**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**TTYPrintf**](#function-ttyprintf) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* format, ...) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**TTYQuery**](#function-ttyquery) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ttyClearProperty**](#function-ttyclearproperty) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ttyFlush**](#function-ttyflush) ([**u32**](types_8h.md#typedef-u32) msgID, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) waitResult) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ttyIsInitialized**](#function-ttyisinitialized) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ttyMccChannelEvent**](#function-ttymccchannelevent) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID, [**u32**](types_8h.md#typedef-u32) event, [**u32**](types_8h.md#typedef-u32) value) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ttyWaiting**](#function-ttywaiting) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) timeout, [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* flag) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ttyWrite**](#function-ttywrite) ([**u32**](types_8h.md#typedef-u32) offset, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* data, [**s32**](types_8h.md#typedef-s32) size) <br> |


























## Public Static Attributes Documentation




### variable gBuf 

```C++
volatile u8 gBuf[8192];
```




<hr>



### variable gBufHead 

```C++
volatile u32 gBufHead;
```




<hr>



### variable gBufTail 

```C++
volatile u32 gBufTail;
```




<hr>



### variable gChID 

```C++
volatile enum MCC_CHANNEL gChID;
```




<hr>



### variable gOldEvent 

```C++
u32 gOldEvent;
```




<hr>



### variable gPrintfID 

```C++
volatile u32 gPrintfID;
```




<hr>



### variable gQuery 

```C++
volatile int gQuery;
```




<hr>



### variable gReadDone 

```C++
volatile u32 gReadDone;
```




<hr>
## Public Functions Documentation




### function ShowChannelInfo 

```C++
void ShowChannelInfo (
    enum  MCC_CHANNEL chID
) 
```




<hr>



### function TTYExit 

```C++
void TTYExit (
    void
) 
```




<hr>



### function TTYFlush 

```C++
int TTYFlush (
    void
) 
```




<hr>



### function TTYInit 

```C++
int TTYInit (
    enum  MCC_EXI exiChannel,
    enum  MCC_CHANNEL chID
) 
```




<hr>



### function TTYPrintf 

```C++
int TTYPrintf (
    const  char * format,
    ...
) 
```




<hr>



### function TTYQuery 

```C++
int TTYQuery (
    void
) 
```




<hr>
## Public Static Functions Documentation




### function ttyClearProperty 

```C++
static void ttyClearProperty (
    enum  MCC_CHANNEL chID
) 
```




<hr>



### function ttyFlush 

```C++
static int ttyFlush (
    u32 msgID,
    int waitResult
) 
```




<hr>



### function ttyIsInitialized 

```C++
static int ttyIsInitialized () 
```




<hr>



### function ttyMccChannelEvent 

```C++
static void ttyMccChannelEvent (
    enum  MCC_CHANNEL chID,
    u32 event,
    u32 value
) 
```




<hr>



### function ttyWaiting 

```C++
static int ttyWaiting (
    int timeout,
    volatile  int * flag
) 
```




<hr>



### function ttyWrite 

```C++
static int ttyWrite (
    u32 offset,
    void * data,
    s32 size
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/mcc/tty.c`

