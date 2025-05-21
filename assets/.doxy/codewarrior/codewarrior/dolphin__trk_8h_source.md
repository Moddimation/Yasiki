

# File dolphin\_trk.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Priv**](dir_58866132d53834b5384652e07310e785.md) **>** [**Os**](dir_c56ed9b4d0a834609820f8ece539b317.md) **>** [**dolphin**](dir_dce8d8183be8371126a2be5b42bed669.md) **>** [**dolphin\_trk.h**](dolphin__trk_8h.md)

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


