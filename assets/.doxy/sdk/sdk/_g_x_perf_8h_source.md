

# File GXPerf.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXPerf.h**](_g_x_perf_8h.md)

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


