

# File GXPerf.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**gx**](dir_9c5d6c2893da168c7817d80a53db0c8c.md) **>** [**GXPerf.h**](_g_x_perf_8h.md)

[Go to the documentation of this file](_g_x_perf_8h.md)


```C++
#ifndef _DOLPHIN_GX_GXPERF_H_
#define _DOLPHIN_GX_GXPERF_H_

#include <dolphin/gx/GXEnum.h>

#ifdef __cplusplus
extern "C"
{
#endif

void GXSetGPMetric (GXPerf0 perf0, GXPerf1 perf1);
void GXReadGPMetric (u32* cnt0, u32* cnt1);
void GXClearGPMetric (void);
u32  GXReadGP0Metric (void);
u32  GXReadGP1Metric (void);
void GXReadMemMetric (u32* cp_req,
                      u32* tc_req,
                      u32* cpu_rd_req,
                      u32* cpu_wr_req,
                      u32* dsp_req,
                      u32* io_req,
                      u32* vi_req,
                      u32* pe_req,
                      u32* rf_req,
                      u32* fi_req);
void GXClearMemMetric (void);
void GXReadPixMetric (u32* top_pixels_in,
                      u32* top_pixels_out,
                      u32* bot_pixels_in,
                      u32* bot_pixels_out,
                      u32* clr_pixels_in,
                      u32* copy_clks);
void GXClearPixMetric (void);
void GXSetVCacheMetric (GXVCachePerf attr);
void GXReadVCacheMetric (u32* check, u32* miss, u32* stall);
void GXClearVCacheMetric (void);
void GXInitXfRasMetric (void);
void GXReadXfRasMetric (u32* xf_wait_in, u32* xf_wait_out, u32* ras_busy, u32* clocks);
u32  GXReadClksPerVtx (void);

#ifdef __cplusplus
}
#endif

#endif
```


