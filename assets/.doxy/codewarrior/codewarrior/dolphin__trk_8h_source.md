

# File dolphin\_trk.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Priv**](dir_ecf524e1d45118e058413ae4d34b2285.md) **>** [**Os**](dir_2f2fdfbe259708b14c1b1957d535f4d4.md) **>** [**dolphin**](dir_54b1793060a27cda3d182d23bc617e99.md) **>** [**dolphin\_trk.h**](dolphin__trk_8h.md)

[Go to the documentation of this file](dolphin__trk_8h.md)


```C++
#ifndef OS_DOLPHIN_DOLPHIN_TRK_H
#define OS_DOLPHIN_DOLPHIN_TRK_H

#include "dolphin/types.h"
#include "trk.h"

#ifdef __cplusplus
extern "C" {
#endif

DSError TRKInitializeTarget();

void EnableMetroTRKInterrupts();
u32 TRKTargetTranslate(u32 param_0);
void TRK__read_aram(register int c, register u32 p2, void* p3);
void TRK__write_aram(register int c, register u32 p2, void* p3);

void __TRK_copy_vectors(void);

#ifdef __cplusplus
}
#endif

#endif /* OS_DOLPHIN_DOLPHIN_TRK_H */
```


