

# File serpoll.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Priv**](dir_ecf524e1d45118e058413ae4d34b2285.md) **>** [**Portable**](dir_ce9d0fbd51586ee7cfe465fa88acc648.md) **>** [**serpoll.h**](serpoll_8h.md)

[Go to the source code of this file](serpoll_8h_source.md)



* `#include "trk.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  void \* | [**gTRKInputPendingPtr**](#variable-gtrkinputpendingptr)  <br> |
















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
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/MetroTRK/Priv/Portable/serpoll.h`

