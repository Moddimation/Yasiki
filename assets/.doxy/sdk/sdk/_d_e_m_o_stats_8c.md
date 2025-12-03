

# File DEMOStats.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**demo**](dir_12b9b9f3614a19f67fa121459aa56b48.md) **>** [**DEMOStats.c**](_d_e_m_o_stats_8c.md)

[Go to the source code of this file](_d_e_m_o_stats_8c_source.md)



* `#include <dolphin/demo.h>`
* `#include <dolphin/gx.h>`
* `#include <dolphin.h>`
* `#include "DEMOPrivate.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u16**](types_8h.md#typedef-u16) | [**DemoStatEnable**](#variable-demostatenable)   = `0`<br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**DemoStatData**](struct_demo_stat_data.md) \* | [**DemoStat**](#variable-demostat)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DemoStatClocks**](#variable-demostatclocks)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DemoStatDisp**](#variable-demostatdisp)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DemoStatIndx**](#variable-demostatindx)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DemoStatMaxIndx**](#variable-demostatmaxindx)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DemoStatStrLen**](#variable-demostatstrlen)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**botPixIn**](#variable-botpixin)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**botPixOut**](#variable-botpixout)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**clrPixIn**](#variable-clrpixin)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**copyClks**](#variable-copyclks)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**cpReq**](#variable-cpreq)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**cpuRdReq**](#variable-cpurdreq)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**cpuWrReq**](#variable-cpuwrreq)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**dspReq**](#variable-dspreq)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**fiReq**](#variable-fireq)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**ioReq**](#variable-ioreq)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**peReq**](#variable-pereq)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**rfReq**](#variable-rfreq)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**tcReq**](#variable-tcreq)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**topPixIn**](#variable-toppixin)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**topPixOut**](#variable-toppixout)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**vcCheck**](#variable-vccheck)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**vcMiss**](#variable-vcmiss)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**vcStall**](#variable-vcstall)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**viReq**](#variable-vireq)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOPrintStats**](#function-demoprintstats) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOSetStats**](#function-demosetstats) ([**DemoStatData**](struct_demo_stat_data.md) \* stat, [**u32**](types_8h.md#typedef-u32) nstats, [**DEMO\_STAT\_DISP**](_d_e_m_o_stats_8h.md#enum-demo_stat_disp) disp) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOUpdateStats**](#function-demoupdatestats) ([**u16**](types_8h.md#typedef-u16) inc) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWriteStats**](#function-demowritestats) ([**u16**](types_8h.md#typedef-u16) update) <br> |


























## Public Attributes Documentation




### variable DemoStatEnable 

```C++
u16 DemoStatEnable;
```




<hr>
## Public Static Attributes Documentation




### variable DemoStat 

```C++
DemoStatData* DemoStat;
```




<hr>



### variable DemoStatClocks 

```C++
u32 DemoStatClocks;
```




<hr>



### variable DemoStatDisp 

```C++
u32 DemoStatDisp;
```




<hr>



### variable DemoStatIndx 

```C++
u32 DemoStatIndx;
```




<hr>



### variable DemoStatMaxIndx 

```C++
u32 DemoStatMaxIndx;
```




<hr>



### variable DemoStatStrLen 

```C++
u32 DemoStatStrLen;
```




<hr>



### variable botPixIn 

```C++
u32 botPixIn;
```




<hr>



### variable botPixOut 

```C++
u32 botPixOut;
```




<hr>



### variable clrPixIn 

```C++
u32 clrPixIn;
```




<hr>



### variable copyClks 

```C++
u32 copyClks;
```




<hr>



### variable cpReq 

```C++
u32 cpReq;
```




<hr>



### variable cpuRdReq 

```C++
u32 cpuRdReq;
```




<hr>



### variable cpuWrReq 

```C++
u32 cpuWrReq;
```




<hr>



### variable dspReq 

```C++
u32 dspReq;
```




<hr>



### variable fiReq 

```C++
u32 fiReq;
```




<hr>



### variable ioReq 

```C++
u32 ioReq;
```




<hr>



### variable peReq 

```C++
u32 peReq;
```




<hr>



### variable rfReq 

```C++
u32 rfReq;
```




<hr>



### variable tcReq 

```C++
u32 tcReq;
```




<hr>



### variable topPixIn 

```C++
u32 topPixIn;
```




<hr>



### variable topPixOut 

```C++
u32 topPixOut;
```




<hr>



### variable vcCheck 

```C++
u32 vcCheck;
```




<hr>



### variable vcMiss 

```C++
u32 vcMiss;
```




<hr>



### variable vcStall 

```C++
u32 vcStall;
```




<hr>



### variable viReq 

```C++
u32 viReq;
```




<hr>
## Public Functions Documentation




### function DEMOPrintStats 

```C++
void DEMOPrintStats (
    void
) 
```




<hr>



### function DEMOSetStats 

```C++
void DEMOSetStats (
    DemoStatData * stat,
    u32 nstats,
    DEMO_STAT_DISP disp
) 
```




<hr>



### function DEMOUpdateStats 

```C++
void DEMOUpdateStats (
    u16 inc
) 
```




<hr>
## Public Static Functions Documentation




### function DEMOWriteStats 

```C++
static void DEMOWriteStats (
    u16 update
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/demo/DEMOStats.c`

