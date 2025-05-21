

# File nubevent.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Src**](dir_106e46045b07ca5148f57373b702a9f2.md) **>** [**Portable**](dir_f12ab36a6648fac4ab89605ba9aeecf6.md) **>** [**nubevent.c**](nubevent_8c.md)

[Go to the source code of this file](nubevent_8c_source.md)



* `#include "Portable/nubevent.h"`
* `#include "Portable/mutex_TRK.h"`
* `#include "Portable/msgbuf.h"`
* `#include "Portable/mem_TRK.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**TRKEventQueue**](struct_t_r_k_event_queue.md) | [**gTRKEventQueue**](#variable-gtrkeventqueue)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**TRKConstructEvent**](#function-trkconstructevent) ([**TRKEvent**](struct_t_r_k_event.md) \* event, [**NubEventType**](trk_8h.md#enum-nubeventtype) eventType) <br> |
|  void | [**TRKCopyEvent**](#function-trkcopyevent) ([**TRKEvent**](struct_t_r_k_event.md) \* dstEvent, const [**TRKEvent**](struct_t_r_k_event.md) \* srcEvent) <br> |
|  void | [**TRKDestructEvent**](#function-trkdestructevent) ([**TRKEvent**](struct_t_r_k_event.md) \* event) <br> |
|  BOOL | [**TRKGetNextEvent**](#function-trkgetnextevent) ([**TRKEvent**](struct_t_r_k_event.md) \* event) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKInitializeEventQueue**](#function-trkinitializeeventqueue) () <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKPostEvent**](#function-trkpostevent) ([**TRKEvent**](struct_t_r_k_event.md) \* event) <br> |




























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



### function TRKCopyEvent 

```C++
void TRKCopyEvent (
    TRKEvent * dstEvent,
    const TRKEvent * srcEvent
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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/MetroTRK/Src/Portable/nubevent.c`

