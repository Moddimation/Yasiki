

# File OSDC.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSDC.h**](_o_s_d_c_8h.md)

[Go to the documentation of this file](_o_s_d_c_8h.md)


```C++
#ifndef _DOLPHIN_OSDC_H_
#define _DOLPHIN_OSDC_H_

#ifdef __cplusplus
extern "C"
{
#endif

void DCFlashInvalidate (void);
void DCEnable (void);
void DCDisable (void);
void DCFreeze (void);
void DCUnfreeze (void);
void DCTouchLoad (void* addr);
void DCBlockZero (void* addr);
void DCBlockStore (void* addr);
void DCBlockFlush (void* addr);
void DCBlockInvalidate (void* addr);

#ifdef __cplusplus
}
#endif

#endif
```


