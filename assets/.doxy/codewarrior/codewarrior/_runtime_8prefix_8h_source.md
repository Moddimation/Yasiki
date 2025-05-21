

# File Runtime.prefix.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Runtime**](dir_ab14c6633277f31934f3117250613416.md) **>** [**Inc**](dir_897f0b8955620369fec815c20eca3684.md) **>** [**Runtime.prefix.h**](_runtime_8prefix_8h.md)

[Go to the documentation of this file](_runtime_8prefix_8h.md)


```C++
/*
 * Special Runtime prefix file created so CATS information can 
 * be turned off for Dolphin. This way any calls to Runtime
 * that are profiled will not crash the application if they 
 * are called *before* TRK has been initialized.
 */ 
 
 /*
  * Turn off CATS information
  */ 
  
#pragma cats off
  
#include  <ansi_prefix.PPCEABI.bare.h>
```


