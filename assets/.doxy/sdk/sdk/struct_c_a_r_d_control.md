

# Struct CARDControl



[**ClassList**](annotated.md) **>** [**CARDControl**](struct_c_a_r_d_control.md)





* `#include <CARDPrivate.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u8**](types_8h.md#typedef-u8) | [**\_pad9D**](#variable-_pad9d)  <br>_0x9D_  |
|  [**u32**](types_8h.md#typedef-u32) | [**addr**](#variable-addr)  <br>_0xB0_  |
|  [**OSAlarm**](struct_o_s_alarm.md) | [**alarm**](#variable-alarm)  <br>_0xE4_  |
|  [**CARDCallback**](card_8h.md#typedef-cardcallback) | [**apiCallback**](#variable-apicallback)  <br>_0xD0_  |
|  [**BOOL**](types_8h.md#typedef-bool) | [**attached**](#variable-attached)  <br>_0x00_  |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**buffer**](#variable-buffer)  <br>_0xB4_  |
|  [**u16**](types_8h.md#typedef-u16) | [**cBlock**](#variable-cblock)  <br>_0x10_  |
|  [**u8**](types_8h.md#typedef-u8) | [**cmd**](#variable-cmd)  <br>_0x94_  |
|  [**s32**](types_8h.md#typedef-s32) | [**cmdlen**](#variable-cmdlen)  <br>_0xA0_  |
|  [**CARDDir**](struct_c_a_r_d_dir.md) \* | [**currentDir**](#variable-currentdir)  <br>_0x84_  |
|  [**u16**](types_8h.md#typedef-u16) \* | [**currentFat**](#variable-currentfat)  <br>_0x88_  |
|  [**CARDCallback**](card_8h.md#typedef-cardcallback) | [**eraseCallback**](#variable-erasecallback)  <br>_0xD8_  |
|  [**CARDCallback**](card_8h.md#typedef-cardcallback) | [**exiCallback**](#variable-exicallback)  <br>_0xCC_  |
|  [**CARDCallback**](card_8h.md#typedef-cardcallback) | [**extCallback**](#variable-extcallback)  <br>_0xC4_  |
|  [**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* | [**fileInfo**](#variable-fileinfo)  <br>_0xC0_  |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**formatStep**](#variable-formatstep)  <br>_0x2C_  |
|  [**u16**](types_8h.md#typedef-u16) | [**freeNo**](#variable-freeno)  <br>_0xBC_  |
|  [**u8**](types_8h.md#typedef-u8) | [**id**](#variable-id)  <br>_0x18_  |
|  [**s32**](types_8h.md#typedef-s32) | [**latency**](#variable-latency)  <br>_0x14_  |
|  [**vs32**](types_8h.md#typedef-vs32) | [**mode**](#variable-mode)  <br>_0xA4_  |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**mountStep**](#variable-mountstep)  <br>_0x24_  |
|  [**u16**](types_8h.md#typedef-u16) | [**pageSize**](#variable-pagesize)  <br>_0x0A_  |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**repeat**](#variable-repeat)  <br>_0xAC_  |
|  [**s32**](types_8h.md#typedef-s32) | [**result**](#variable-result)  <br>_0x04_  |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**retry**](#variable-retry)  <br>_0xA8_  |
|  [**u32**](types_8h.md#typedef-u32) | [**scramble**](#variable-scramble)  <br>_0x28_  |
|  [**s32**](types_8h.md#typedef-s32) | [**sectorSize**](#variable-sectorsize)  <br>_0x0C_  |
|  [**u16**](types_8h.md#typedef-u16) | [**size**](#variable-size)  <br>_0x08_  |
|  [**u16**](types_8h.md#typedef-u16) | [**startBlock**](#variable-startblock)  <br>_0xBE_  |
|  [**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) | [**task**](#variable-task)  <br>_0x30_  |
|  [**OSThreadQueue**](struct_o_s_thread_queue.md) | [**threadQueue**](#variable-threadqueue)  <br>_0x8C_  |
|  [**CARDCallback**](card_8h.md#typedef-cardcallback) | [**txCallback**](#variable-txcallback)  <br>_0xC8_  |
|  [**CARDCallback**](card_8h.md#typedef-cardcallback) | [**unlockCallback**](#variable-unlockcallback)  <br>_0xDC_  |
|  [**u16**](types_8h.md#typedef-u16) | [**vendorID**](#variable-vendorid)  <br>_0x12_  |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**workArea**](#variable-workarea)  <br>_0x80_  |
|  [**CARDCallback**](card_8h.md#typedef-cardcallback) | [**xferCallback**](#variable-xfercallback)  <br>_0xD4_  |
|  [**s32**](types_8h.md#typedef-s32) | [**xferred**](#variable-xferred)  <br>_0xB8_  |












































## Public Attributes Documentation




### variable \_pad9D 

_0x9D_ 
```C++
u8 CARDControl::_pad9D[3];
```




<hr>



### variable addr 

_0xB0_ 
```C++
u32 CARDControl::addr;
```




<hr>



### variable alarm 

_0xE4_ 
```C++
OSAlarm CARDControl::alarm;
```




<hr>



### variable apiCallback 

_0xD0_ 
```C++
CARDCallback CARDControl::apiCallback;
```




<hr>



### variable attached 

_0x00_ 
```C++
BOOL CARDControl::attached;
```




<hr>



### variable buffer 

_0xB4_ 
```C++
void* CARDControl::buffer;
```




<hr>



### variable cBlock 

_0x10_ 
```C++
u16 CARDControl::cBlock;
```




<hr>



### variable cmd 

_0x94_ 
```C++
u8 CARDControl::cmd[9];
```




<hr>



### variable cmdlen 

_0xA0_ 
```C++
s32 CARDControl::cmdlen;
```




<hr>



### variable currentDir 

_0x84_ 
```C++
CARDDir* CARDControl::currentDir;
```




<hr>



### variable currentFat 

_0x88_ 
```C++
u16* CARDControl::currentFat;
```




<hr>



### variable eraseCallback 

_0xD8_ 
```C++
CARDCallback CARDControl::eraseCallback;
```




<hr>



### variable exiCallback 

_0xCC_ 
```C++
CARDCallback CARDControl::exiCallback;
```




<hr>



### variable extCallback 

_0xC4_ 
```C++
CARDCallback CARDControl::extCallback;
```




<hr>



### variable fileInfo 

_0xC0_ 
```C++
CARDFileInfo* CARDControl::fileInfo;
```




<hr>



### variable formatStep 

_0x2C_ 
```C++
int CARDControl::formatStep;
```




<hr>



### variable freeNo 

_0xBC_ 
```C++
u16 CARDControl::freeNo;
```




<hr>



### variable id 

_0x18_ 
```C++
u8 CARDControl::id[12];
```




<hr>



### variable latency 

_0x14_ 
```C++
s32 CARDControl::latency;
```




<hr>



### variable mode 

_0xA4_ 
```C++
vs32 CARDControl::mode;
```




<hr>



### variable mountStep 

_0x24_ 
```C++
int CARDControl::mountStep;
```




<hr>



### variable pageSize 

_0x0A_ 
```C++
u16 CARDControl::pageSize;
```




<hr>



### variable repeat 

_0xAC_ 
```C++
int CARDControl::repeat;
```




<hr>



### variable result 

_0x04_ 
```C++
s32 CARDControl::result;
```




<hr>



### variable retry 

_0xA8_ 
```C++
int CARDControl::retry;
```




<hr>



### variable scramble 

_0x28_ 
```C++
u32 CARDControl::scramble;
```




<hr>



### variable sectorSize 

_0x0C_ 
```C++
s32 CARDControl::sectorSize;
```




<hr>



### variable size 

_0x08_ 
```C++
u16 CARDControl::size;
```




<hr>



### variable startBlock 

_0xBE_ 
```C++
u16 CARDControl::startBlock;
```




<hr>



### variable task 

_0x30_ 
```C++
DSPTaskInfo CARDControl::task;
```




<hr>



### variable threadQueue 

_0x8C_ 
```C++
OSThreadQueue CARDControl::threadQueue;
```




<hr>



### variable txCallback 

_0xC8_ 
```C++
CARDCallback CARDControl::txCallback;
```




<hr>



### variable unlockCallback 

_0xDC_ 
```C++
CARDCallback CARDControl::unlockCallback;
```




<hr>



### variable vendorID 

_0x12_ 
```C++
u16 CARDControl::vendorID;
```




<hr>



### variable workArea 

_0x80_ 
```C++
void* CARDControl::workArea;
```




<hr>



### variable xferCallback 

_0xD4_ 
```C++
CARDCallback CARDControl::xferCallback;
```




<hr>



### variable xferred 

_0xB8_ 
```C++
s32 CARDControl::xferred;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/card/CARDPrivate.h`

