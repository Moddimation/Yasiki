

# File Init\_8xx\_mbx.asm

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Runtime**](dir_ab14c6633277f31934f3117250613416.md) **>** [**Src**](dir_509e87e64e9810dafb4b9e7004107717.md) **>** [**Init\_8xx\_mbx.asm**](_init__8xx__mbx_8asm.md)

[Go to the documentation of this file](_init__8xx__mbx_8asm.md)


```C++
##############################################################################
#
# MBX8xx Initialization Routine 
#
#
##############################################################################

# Define board type and processor speed

TARGET_SYSTEM_FREQUENCY .equ    40          # Target System Frequency
__MOT_MBX_A__           .equ    0
__MOT_MBX__             .equ    1
__MOT_ADS__             .equ    0

.include "init8xx.asm"                      # main init code

```


