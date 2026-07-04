

# Struct OSAlarm



[**ClassList**](annotated.md) **>** [**OSAlarm**](struct_o_s_alarm.md)





* `#include <OSAlarm.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**fire**](#variable-fire)  <br>_0x08_  |
|  [**OSAlarmHandler**](_o_s_alarm_8h.md#typedef-osalarmhandler) | [**handler**](#variable-handler)  <br>_0x00_  |
|  [**OSAlarm**](struct_o_s_alarm.md) \* | [**next**](#variable-next)  <br>_0x14_  |
|  [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**period**](#variable-period)  <br>_0x1C_  |
|  [**OSAlarm**](struct_o_s_alarm.md) \* | [**prev**](#variable-prev)  <br>_0x10_  |
|  [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**start**](#variable-start)  <br>_0x24_  |
|  [**u32**](types_8h.md#typedef-u32) | [**tag**](#variable-tag)  <br>_0x04_  |












































## Public Attributes Documentation




### variable fire 

_0x08_ 
```C++
OSTime OSAlarm::fire;
```




<hr>



### variable handler 

_0x00_ 
```C++
OSAlarmHandler OSAlarm::handler;
```




<hr>



### variable next 

_0x14_ 
```C++
OSAlarm* OSAlarm::next;
```




<hr>



### variable period 

_0x1C_ 
```C++
OSTime OSAlarm::period;
```




<hr>



### variable prev 

_0x10_ 
```C++
OSAlarm* OSAlarm::prev;
```




<hr>



### variable start 

_0x24_ 
```C++
OSTime OSAlarm::start;
```




<hr>



### variable tag 

_0x04_ 
```C++
u32 OSAlarm::tag;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSAlarm.h`

