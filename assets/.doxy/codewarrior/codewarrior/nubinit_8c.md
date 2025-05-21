

# File nubinit.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Src**](dir_106e46045b07ca5148f57373b702a9f2.md) **>** [**Portable**](dir_f12ab36a6648fac4ab89605ba9aeecf6.md) **>** [**nubinit.c**](nubinit_8c.md)

[Go to the source code of this file](nubinit_8c_source.md)



* `#include "Portable/nubinit.h"`
* `#include "Portable/nubevent.h"`
* `#include "Portable/msgbuf.h"`
* `#include "Portable/serpoll.h"`
* `#include "Portable/dispatch.h"`
* `#include "Os/dolphin/dolphin_trk.h"`
* `#include "Os/dolphin/dolphin_trk_glue.h"`
* `#include "Os/dolphin/usr_put.h"`
* `#include "Processor/ppc/Generic/targimpl.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  BOOL | [**gTRKBigEndian**](#variable-gtrkbigendian)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  BOOL | [**TRKInitializeEndian**](#function-trkinitializeendian) (void) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKInitializeNub**](#function-trkinitializenub) (void) <br> |
|  void | [**TRKNubWelcome**](#function-trknubwelcome) (void) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTerminateNub**](#function-trkterminatenub) (void) <br> |




























## Public Attributes Documentation




### variable gTRKBigEndian 

```C++
BOOL gTRKBigEndian;
```




<hr>
## Public Functions Documentation




### function TRKInitializeEndian 

```C++
BOOL TRKInitializeEndian (
    void
) 
```




<hr>



### function TRKInitializeNub 

```C++
DSError TRKInitializeNub (
    void
) 
```




<hr>



### function TRKNubWelcome 

```C++
void TRKNubWelcome (
    void
) 
```




<hr>



### function TRKTerminateNub 

```C++
DSError TRKTerminateNub (
    void
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/MetroTRK/Src/Portable/nubinit.c`

