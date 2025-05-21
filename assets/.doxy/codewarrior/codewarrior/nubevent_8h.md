

# File nubevent.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Priv**](dir_58866132d53834b5384652e07310e785.md) **>** [**Portable**](dir_209eb07e7fc57e3cf528d8690e13aba6.md) **>** [**nubevent.h**](nubevent_8h.md)

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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/MetroTRK/Priv/Portable/nubevent.h`

