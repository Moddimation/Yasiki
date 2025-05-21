

# File serpoll.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Src**](dir_106e46045b07ca5148f57373b702a9f2.md) **>** [**Portable**](dir_f12ab36a6648fac4ab89605ba9aeecf6.md) **>** [**serpoll.c**](serpoll_8c.md)

[Go to the source code of this file](serpoll_8c_source.md)



* `#include "Portable/serpoll.h"`
* `#include "Portable/nubevent.h"`
* `#include "Portable/msgbuf.h"`
* `#include "Portable/msghndlr.h"`
* `#include "Os/dolphin/dolphin_trk_glue.h"`
* `#include "trk.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  void \* | [**gTRKInputPendingPtr**](#variable-gtrkinputpendingptr)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**TRKFramingState**](struct_t_r_k_framing_state.md) | [**gTRKFramingState**](#variable-gtrkframingstate)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**TRKGetInput**](#function-trkgetinput) (void) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKInitializeSerialHandler**](#function-trkinitializeserialhandler) (void) <br> |
|  void | [**TRKProcessInput**](#function-trkprocessinput) (int bufferIdx) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTerminateSerialHandler**](#function-trkterminateserialhandler) (void) <br> |
|  [**MessageBufferID**](trk_8h.md#typedef-messagebufferid) | [**TRKTestForPacket**](#function-trktestforpacket) () <br> |




























## Public Attributes Documentation




### variable gTRKInputPendingPtr 

```C++
void* gTRKInputPendingPtr;
```




<hr>
## Public Static Attributes Documentation




### variable gTRKFramingState 

```C++
TRKFramingState gTRKFramingState;
```




<hr>
## Public Functions Documentation




### function TRKGetInput 

```C++
void TRKGetInput (
    void
) 
```




<hr>



### function TRKInitializeSerialHandler 

```C++
DSError TRKInitializeSerialHandler (
    void
) 
```




<hr>



### function TRKProcessInput 

```C++
void TRKProcessInput (
    int bufferIdx
) 
```




<hr>



### function TRKTerminateSerialHandler 

```C++
DSError TRKTerminateSerialHandler (
    void
) 
```




<hr>



### function TRKTestForPacket 

```C++
MessageBufferID TRKTestForPacket () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/MetroTRK/Src/Portable/serpoll.c`

