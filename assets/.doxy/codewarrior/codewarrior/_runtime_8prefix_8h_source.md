

# File Runtime.prefix.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Runtime**](dir_e69745e3285a8d4f155d29d88e1a7b6b.md) **>** [**Inc**](dir_192ee455ef94b5a11e62d491224058e4.md) **>** [**Runtime.prefix.h**](_runtime_8prefix_8h.md)

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


