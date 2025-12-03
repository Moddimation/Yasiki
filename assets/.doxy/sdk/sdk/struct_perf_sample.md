

# Struct PerfSample



[**ClassList**](annotated.md) **>** [**PerfSample**](struct_perf_sample.md)





* `#include <perf.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**cacheMisses**](#variable-cachemisses)  <br>_0x20_  |
|  [**u32**](types_8h.md#typedef-u32) | [**cpReq**](#variable-cpreq)  <br>_0x40_  |
|  [**u32**](types_8h.md#typedef-u32) | [**cpuRdReq**](#variable-cpurdreq)  <br>_0x50_  |
|  [**u32**](types_8h.md#typedef-u32) | [**cpuTimeStampEnd**](#variable-cputimestampend)  <br>_0x08_  |
|  [**u32**](types_8h.md#typedef-u32) | [**cpuTimeStampStart**](#variable-cputimestampstart)  <br>_0x04_  |
|  [**u32**](types_8h.md#typedef-u32) | [**cpuWrReq**](#variable-cpuwrreq)  <br>_0x58_  |
|  [**u32**](types_8h.md#typedef-u32) | [**dspReq**](#variable-dspreq)  <br>_0x60_  |
|  [**u32**](types_8h.md#typedef-u32) | [**fiReq**](#variable-fireq)  <br>_0x88_  |
|  [**u32**](types_8h.md#typedef-u32) | [**gpTimeStampEnd**](#variable-gptimestampend)  <br>_0x10_  |
|  [**u32**](types_8h.md#typedef-u32) | [**gpTimeStampStart**](#variable-gptimestampstart)  <br>_0x0C_  |
|  [**u8**](types_8h.md#typedef-u8) | [**id**](#variable-id)  <br>_0x00_  |
|  [**u32**](types_8h.md#typedef-u32) | [**instructions**](#variable-instructions)  <br>_0x30_  |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**interrupted**](#variable-interrupted)  <br>_0x14_  |
|  [**u32**](types_8h.md#typedef-u32) | [**ioReq**](#variable-ioreq)  <br>_0x68_  |
|  [**u32**](types_8h.md#typedef-u32) | [**origcpuStart**](#variable-origcpustart)  <br>_0x18_  |
|  [**u32**](types_8h.md#typedef-u32) | [**origgpStart**](#variable-origgpstart)  <br>_0x1C_  |
|  [**u32**](types_8h.md#typedef-u32) | [**peReq**](#variable-pereq)  <br>_0x78_  |
|  [**u32**](types_8h.md#typedef-u32) | [**rasBusy**](#variable-rasbusy)  <br>_0xA0_  |
|  [**u32**](types_8h.md#typedef-u32) | [**rasClocks**](#variable-rasclocks)  <br>_0xA8_  |
|  [**u32**](types_8h.md#typedef-u32) | [**rfReq**](#variable-rfreq)  <br>_0x80_  |
|  [**u32**](types_8h.md#typedef-u32) | [**tcReq**](#variable-tcreq)  <br>_0x48_  |
|  [**u32**](types_8h.md#typedef-u32) | [**viReq**](#variable-vireq)  <br>_0x70_  |
|  [**u32**](types_8h.md#typedef-u32) | [**xfWaitIn**](#variable-xfwaitin)  <br>_0x90_  |
|  [**u32**](types_8h.md#typedef-u32) | [**xfWaitOut**](#variable-xfwaitout)  <br>_0x98_  |












































## Public Attributes Documentation




### variable cacheMisses 

_0x20_ 
```C++
u32 PerfSample::cacheMisses[4];
```




<hr>



### variable cpReq 

_0x40_ 
```C++
u32 PerfSample::cpReq[2];
```




<hr>



### variable cpuRdReq 

_0x50_ 
```C++
u32 PerfSample::cpuRdReq[2];
```




<hr>



### variable cpuTimeStampEnd 

_0x08_ 
```C++
u32 PerfSample::cpuTimeStampEnd;
```




<hr>



### variable cpuTimeStampStart 

_0x04_ 
```C++
u32 PerfSample::cpuTimeStampStart;
```




<hr>



### variable cpuWrReq 

_0x58_ 
```C++
u32 PerfSample::cpuWrReq[2];
```




<hr>



### variable dspReq 

_0x60_ 
```C++
u32 PerfSample::dspReq[2];
```




<hr>



### variable fiReq 

_0x88_ 
```C++
u32 PerfSample::fiReq[2];
```




<hr>



### variable gpTimeStampEnd 

_0x10_ 
```C++
u32 PerfSample::gpTimeStampEnd;
```




<hr>



### variable gpTimeStampStart 

_0x0C_ 
```C++
u32 PerfSample::gpTimeStampStart;
```




<hr>



### variable id 

_0x00_ 
```C++
u8 PerfSample::id;
```




<hr>



### variable instructions 

_0x30_ 
```C++
u32 PerfSample::instructions[4];
```




<hr>



### variable interrupted 

_0x14_ 
```C++
int PerfSample::interrupted;
```




<hr>



### variable ioReq 

_0x68_ 
```C++
u32 PerfSample::ioReq[2];
```




<hr>



### variable origcpuStart 

_0x18_ 
```C++
u32 PerfSample::origcpuStart;
```




<hr>



### variable origgpStart 

_0x1C_ 
```C++
u32 PerfSample::origgpStart;
```




<hr>



### variable peReq 

_0x78_ 
```C++
u32 PerfSample::peReq[2];
```




<hr>



### variable rasBusy 

_0xA0_ 
```C++
u32 PerfSample::rasBusy[2];
```




<hr>



### variable rasClocks 

_0xA8_ 
```C++
u32 PerfSample::rasClocks[2];
```




<hr>



### variable rfReq 

_0x80_ 
```C++
u32 PerfSample::rfReq[2];
```




<hr>



### variable tcReq 

_0x48_ 
```C++
u32 PerfSample::tcReq[2];
```




<hr>



### variable viReq 

_0x70_ 
```C++
u32 PerfSample::viReq[2];
```




<hr>



### variable xfWaitIn 

_0x90_ 
```C++
u32 PerfSample::xfWaitIn[2];
```




<hr>



### variable xfWaitOut 

_0x98_ 
```C++
u32 PerfSample::xfWaitOut[2];
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/perf.h`

