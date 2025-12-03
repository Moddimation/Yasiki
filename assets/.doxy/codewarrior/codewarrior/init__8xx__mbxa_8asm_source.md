

# File init\_8xx\_mbxa.asm

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Runtime**](dir_e69745e3285a8d4f155d29d88e1a7b6b.md) **>** [**Src**](dir_1789e36d750963f536ec280b459db2bf.md) **>** [**init\_8xx\_mbxa.asm**](init__8xx__mbxa_8asm.md)

[Go to the documentation of this file](init__8xx__mbxa_8asm.md)


```C++
##############################################################################
#
# MBX8xx A Initialization Routine 
#
#
##############################################################################

# Define board type and processor speed

TARGET_SYSTEM_FREQUENCY .equ    50          # Target System Frequency
__MOT_MBX_A__           .equ    1
__MOT_MBX__             .equ    0
__MOT_ADS__             .equ    0

.include "init8xx.asm"                      # main init code

```


