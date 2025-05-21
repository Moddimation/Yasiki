

# File OSIC.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**os**](dir_c13ebdd3af764081039ea1aa77ad78f7.md) **>** [**OSIC.h**](_o_s_i_c_8h.md)

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


