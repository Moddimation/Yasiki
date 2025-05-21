

# File OSStopwatch.c



[**FileList**](files.md) **>** [**dolphin**](dir_5daac82a3cf194997369e9388ff34711.md) **>** [**os**](dir_2110adc24753dd29d2ec0361943e7a71.md) **>** [**OSStopwatch.c**](_o_s_stopwatch_8c.md)

[Go to the source code of this file](_o_s_stopwatch_8c_source.md)



* `#include <dolphin/os.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s64**](types_8h.md#typedef-s64) | [**OSCheckStopwatch**](#function-oscheckstopwatch) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSStopwatch**](struct_o_s_stopwatch.md) \* sw) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSDumpStopwatch**](#function-osdumpstopwatch) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSStopwatch**](struct_o_s_stopwatch.md) \* sw) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSInitStopwatch**](#function-osinitstopwatch) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSStopwatch**](struct_o_s_stopwatch.md) \* sw, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* name) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSResetStopwatch**](#function-osresetstopwatch) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSStopwatch**](struct_o_s_stopwatch.md) \* sw) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSStartStopwatch**](#function-osstartstopwatch) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSStopwatch**](struct_o_s_stopwatch.md) \* sw) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSStopStopwatch**](#function-osstopstopwatch) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSStopwatch**](struct_o_s_stopwatch.md) \* sw) <br> |




























## Public Functions Documentation




### function OSCheckStopwatch 

```C++
s64 OSCheckStopwatch (
    struct  OSStopwatch * sw
) 
```




<hr>



### function OSDumpStopwatch 

```C++
void OSDumpStopwatch (
    struct  OSStopwatch * sw
) 
```




<hr>



### function OSInitStopwatch 

```C++
void OSInitStopwatch (
    struct  OSStopwatch * sw,
    char * name
) 
```




<hr>



### function OSResetStopwatch 

```C++
void OSResetStopwatch (
    struct  OSStopwatch * sw
) 
```




<hr>



### function OSStartStopwatch 

```C++
void OSStartStopwatch (
    struct  OSStopwatch * sw
) 
```




<hr>



### function OSStopStopwatch 

```C++
void OSStopStopwatch (
    struct  OSStopwatch * sw
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `DolphinSDK/src/dolphin/os/OSStopwatch.c`

