

# File OSDC.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**os**](dir_ec7c732b679442ba7b10ef1b15f4b60e.md) **>** [**OSDC.h**](_o_s_d_c_8h.md)

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


