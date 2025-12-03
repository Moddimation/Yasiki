

# File mutex\_TRK.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Priv**](dir_ecf524e1d45118e058413ae4d34b2285.md) **>** [**Portable**](dir_ce9d0fbd51586ee7cfe465fa88acc648.md) **>** [**mutex\_TRK.h**](mutex___t_r_k_8h.md)

[Go to the documentation of this file](mutex___t_r_k_8h.md)


```C++
#ifndef METROTRK_PORTABLE_MUTEX_TRK_H
#define METROTRK_PORTABLE_MUTEX_TRK_H

#include "trk.h"

DSError TRKInitializeMutex(void*);
DSError TRKAcquireMutex(void*);
DSError TRKReleaseMutex(void*);

#endif /* METROTRK_PORTABLE_MUTEX_TRK_H */
```


