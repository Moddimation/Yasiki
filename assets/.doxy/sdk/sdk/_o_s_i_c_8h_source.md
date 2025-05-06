

# File OSIC.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**os**](dir_ec7c732b679442ba7b10ef1b15f4b60e.md) **>** [**OSIC.h**](_o_s_i_c_8h.md)

[Go to the documentation of this file](_o_s_i_c_8h.md)


```C++
#ifndef _DOLPHIN_OSIC_H_
#define _DOLPHIN_OSIC_H_

#ifdef __cplusplus
extern "C"
{
#endif

void ICFlashInvalidate (void);
void ICEnable (void);
void ICDisable (void);
void ICFreeze (void);
void ICUnfreeze (void);
void ICBlockInvalidate (void* addr);
void ICSync (void);

#ifdef __cplusplus
}
#endif

#endif
```


