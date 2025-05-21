

# File OSDC.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**os**](dir_c13ebdd3af764081039ea1aa77ad78f7.md) **>** [**OSDC.h**](_o_s_d_c_8h.md)

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


