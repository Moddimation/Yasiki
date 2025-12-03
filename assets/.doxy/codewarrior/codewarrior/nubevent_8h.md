

# File nubevent.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Priv**](dir_ecf524e1d45118e058413ae4d34b2285.md) **>** [**Portable**](dir_ce9d0fbd51586ee7cfe465fa88acc648.md) **>** [**nubevent.h**](nubevent_8h.md)

[Go to the source code of this file](nubevent_8h_source.md)



* `#include "trk.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**TRKEvent**](struct_t_r_k_event.md) <br> |
| struct | [**TRKEventQueue**](struct_t_r_k_event_queue.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef u32 | [**NubEventID**](#typedef-nubeventid)  <br> |
| typedef struct [**TRKEvent**](struct_t_r_k_event.md) | [**TRKEvent**](#typedef-trkevent)  <br> |
| typedef struct [**TRKEventQueue**](struct_t_r_k_event_queue.md) | [**TRKEventQueue**](#typedef-trkeventqueue)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**TRKEventQueue**](struct_t_r_k_event_queue.md) | [**gTRKEventQueue**](#variable-gtrkeventqueue)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**TRKConstructEvent**](#function-trkconstructevent) ([**TRKEvent**](struct_t_r_k_event.md) \* event, [**NubEventType**](trk_8h.md#enum-nubeventtype) eventType) <br> |
|  void | [**TRKDestructEvent**](#function-trkdestructevent) ([**TRKEvent**](struct_t_r_k_event.md) \* event) <br> |
|  BOOL | [**TRKGetNextEvent**](#function-trkgetnextevent) ([**TRKEvent**](struct_t_r_k_event.md) \* event) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKInitializeEventQueue**](#function-trkinitializeeventqueue) () <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKPostEvent**](#function-trkpostevent) ([**TRKEvent**](struct_t_r_k_event.md) \* event) <br> |




























## Public Types Documentation




### typedef NubEventID 

```C++
typedef u32 NubEventID;
```




<hr>



### typedef TRKEvent 

```C++
typedef struct TRKEvent TRKEvent;
```




<hr>



### typedef TRKEventQueue 

```C++
typedef struct TRKEventQueue TRKEventQueue;
```




<hr>
## Public Attributes Documentation




### variable gTRKEventQueue 

```C++
TRKEventQueue gTRKEventQueue;
```




<hr>
## Public Functions Documentation




### function TRKConstructEvent 

```C++
void TRKConstructEvent (
    TRKEvent * event,
    NubEventType eventType
) 
```




<hr>



### function TRKDestructEvent 

```C++
void TRKDestructEvent (
    TRKEvent * event
) 
```




<hr>



### function TRKGetNextEvent 

```C++
BOOL TRKGetNextEvent (
    TRKEvent * event
) 
```




<hr>



### function TRKInitializeEventQueue 

```C++
DSError TRKInitializeEventQueue () 
```




<hr>



### function TRKPostEvent 

```C++
DSError TRKPostEvent (
    TRKEvent * event
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/MetroTRK/Priv/Portable/nubevent.h`

