

# File nubinit.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Src**](dir_6f2d6a2144e1eea12d16d0bd9685bdc9.md) **>** [**Portable**](dir_5cbf840bf773d4847fc83ef20b01209e.md) **>** [**nubinit.c**](nubinit_8c.md)

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
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/MetroTRK/Src/Portable/nubinit.c`

