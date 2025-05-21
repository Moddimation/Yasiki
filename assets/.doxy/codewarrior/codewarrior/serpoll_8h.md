

# File serpoll.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Priv**](dir_58866132d53834b5384652e07310e785.md) **>** [**Portable**](dir_209eb07e7fc57e3cf528d8690e13aba6.md) **>** [**serpoll.h**](serpoll_8h.md)

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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/MetroTRK/Priv/Portable/serpoll.h`

