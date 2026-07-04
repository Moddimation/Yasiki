

# File GXPerf.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**gx**](dir_b80c028b3e970eff7f2a07684ffcf104.md) **>** [**GXPerf.c**](_g_x_perf_8c.md)

[Go to the source code of this file](_g_x_perf_8c_source.md)



* `#include <macros.h>`
* `#include <dolphin/gx.h>`
* `#include <dolphin/os.h>`
* `#include "GXPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXClearGPMetric**](#function-gxcleargpmetric) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXClearMemMetric**](#function-gxclearmemmetric) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXClearPixMetric**](#function-gxclearpixmetric) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXClearVCacheMetric**](#function-gxclearvcachemetric) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitXfRasMetric**](#function-gxinitxfrasmetric) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**GXReadClksPerVtx**](#function-gxreadclkspervtx) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**GXReadGP0Metric**](#function-gxreadgp0metric) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**GXReadGP1Metric**](#function-gxreadgp1metric) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXReadGPMetric**](#function-gxreadgpmetric) ([**u32**](types_8h.md#typedef-u32) \* cnt0, [**u32**](types_8h.md#typedef-u32) \* cnt1) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXReadMemMetric**](#function-gxreadmemmetric) ([**u32**](types_8h.md#typedef-u32) \* cp\_req, [**u32**](types_8h.md#typedef-u32) \* tc\_req, [**u32**](types_8h.md#typedef-u32) \* cpu\_rd\_req, [**u32**](types_8h.md#typedef-u32) \* cpu\_wr\_req, [**u32**](types_8h.md#typedef-u32) \* dsp\_req, [**u32**](types_8h.md#typedef-u32) \* io\_req, [**u32**](types_8h.md#typedef-u32) \* vi\_req, [**u32**](types_8h.md#typedef-u32) \* pe\_req, [**u32**](types_8h.md#typedef-u32) \* rf\_req, [**u32**](types_8h.md#typedef-u32) \* fi\_req) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXReadPixMetric**](#function-gxreadpixmetric) ([**u32**](types_8h.md#typedef-u32) \* top\_pixels\_in, [**u32**](types_8h.md#typedef-u32) \* top\_pixels\_out, [**u32**](types_8h.md#typedef-u32) \* bot\_pixels\_in, [**u32**](types_8h.md#typedef-u32) \* bot\_pixels\_out, [**u32**](types_8h.md#typedef-u32) \* clr\_pixels\_in, [**u32**](types_8h.md#typedef-u32) \* copy\_clks) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXReadVCacheMetric**](#function-gxreadvcachemetric) ([**u32**](types_8h.md#typedef-u32) \* check, [**u32**](types_8h.md#typedef-u32) \* miss, [**u32**](types_8h.md#typedef-u32) \* stall) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXReadXfRasMetric**](#function-gxreadxfrasmetric) ([**u32**](types_8h.md#typedef-u32) \* xf\_wait\_in, [**u32**](types_8h.md#typedef-u32) \* xf\_wait\_out, [**u32**](types_8h.md#typedef-u32) \* ras\_busy, [**u32**](types_8h.md#typedef-u32) \* clocks) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetGPMetric**](#function-gxsetgpmetric) ([**GXPerf0**](_g_x_enum_8h.md#typedef-gxperf0) perf0, [**GXPerf1**](_g_x_enum_8h.md#typedef-gxperf1) perf1) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetVCacheMetric**](#function-gxsetvcachemetric) ([**GXVCachePerf**](_g_x_enum_8h.md#typedef-gxvcacheperf) attr) <br> |




























## Public Functions Documentation




### function GXClearGPMetric 

```C++
void GXClearGPMetric (
    void
) 
```




<hr>



### function GXClearMemMetric 

```C++
void GXClearMemMetric (
    void
) 
```




<hr>



### function GXClearPixMetric 

```C++
void GXClearPixMetric (
    void
) 
```




<hr>



### function GXClearVCacheMetric 

```C++
void GXClearVCacheMetric (
    void
) 
```




<hr>



### function GXInitXfRasMetric 

```C++
void GXInitXfRasMetric (
    void
) 
```




<hr>



### function GXReadClksPerVtx 

```C++
u32 GXReadClksPerVtx (
    void
) 
```




<hr>



### function GXReadGP0Metric 

```C++
u32 GXReadGP0Metric (
    void
) 
```




<hr>



### function GXReadGP1Metric 

```C++
u32 GXReadGP1Metric (
    void
) 
```




<hr>



### function GXReadGPMetric 

```C++
void GXReadGPMetric (
    u32 * cnt0,
    u32 * cnt1
) 
```




<hr>



### function GXReadMemMetric 

```C++
void GXReadMemMetric (
    u32 * cp_req,
    u32 * tc_req,
    u32 * cpu_rd_req,
    u32 * cpu_wr_req,
    u32 * dsp_req,
    u32 * io_req,
    u32 * vi_req,
    u32 * pe_req,
    u32 * rf_req,
    u32 * fi_req
) 
```




<hr>



### function GXReadPixMetric 

```C++
void GXReadPixMetric (
    u32 * top_pixels_in,
    u32 * top_pixels_out,
    u32 * bot_pixels_in,
    u32 * bot_pixels_out,
    u32 * clr_pixels_in,
    u32 * copy_clks
) 
```




<hr>



### function GXReadVCacheMetric 

```C++
void GXReadVCacheMetric (
    u32 * check,
    u32 * miss,
    u32 * stall
) 
```




<hr>



### function GXReadXfRasMetric 

```C++
void GXReadXfRasMetric (
    u32 * xf_wait_in,
    u32 * xf_wait_out,
    u32 * ras_busy,
    u32 * clocks
) 
```




<hr>



### function GXSetGPMetric 

```C++
void GXSetGPMetric (
    GXPerf0 perf0,
    GXPerf1 perf1
) 
```




<hr>



### function GXSetVCacheMetric 

```C++
void GXSetVCacheMetric (
    GXVCachePerf attr
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/gx/GXPerf.c`

