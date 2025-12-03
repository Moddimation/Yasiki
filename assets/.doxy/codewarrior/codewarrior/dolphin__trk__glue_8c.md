

# File dolphin\_trk\_glue.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Src**](dir_6f2d6a2144e1eea12d16d0bd9685bdc9.md) **>** [**Os**](dir_c356d50d36c69ac9e068ee6cfcebacd1.md) **>** [**dolphin**](dir_620a2d14b5c78596f4b6e2cb4db579d5.md) **>** [**dolphin\_trk\_glue.c**](dolphin__trk__glue_8c.md)

[Go to the source code of this file](dolphin__trk__glue_8c_source.md)



* `#include "Os/dolphin/dolphin_trk_glue.h"`
* `#include "Processor/ppc/Generic/targimpl.h"`
* `#include <OdemuExi2Lib/DebuggerDriver.h>`
* `#include <dolphin/amcstubs/AmcExi2Stubs.h>`
* `#include "trk.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**DBCommTable**](struct_d_b_comm_table.md) | [**gDBCommTable**](#variable-gdbcommtable)   = `{}`<br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**EnableEXI2Interrupts**](#function-enableexi2interrupts) (void) <br> |
|  int | [**InitMetroTRKCommTable**](#function-initmetrotrkcommtable) (int hwId) <br> |
|  void | [**ReserveEXI2Port**](#function-reserveexi2port) (void) <br> |
|  void | [**TRKEXICallBack**](#function-trkexicallback) (\_\_OSInterrupt param\_0, OSContext \* ctx) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKInitializeIntDrivenUART**](#function-trkinitializeintdrivenuart) (u32 param\_0, u32 param\_1, u32 param\_2, volatile u8 \*\* param\_3) <br> |
|  asm void | [**TRKLoadContext**](#function-trkloadcontext) (OSContext \* ctx, u32 r4) <br> |
|  int | [**TRKPollUART**](#function-trkpolluart) (void) <br> |
|  [**UARTError**](trk_8h.md#typedef-uarterror) | [**TRKReadUARTN**](#function-trkreaduartn) (void \* bytes, u32 length) <br> |
|  void | [**TRKUARTInterruptHandler**](#function-trkuartinterrupthandler) () <br> |
|  [**UARTError**](trk_8h.md#typedef-uarterror) | [**TRKWriteUARTN**](#function-trkwriteuartn) (const void \* bytes, u32 length) <br> |
|  void | [**TRK\_board\_display**](#function-trk_board_display) (char \* str) <br> |
|  void | [**UnreserveEXI2Port**](#function-unreserveexi2port) (void) <br> |




























## Public Attributes Documentation




### variable gDBCommTable 

```C++
DBCommTable gDBCommTable;
```




<hr>
## Public Functions Documentation




### function EnableEXI2Interrupts 

```C++
void EnableEXI2Interrupts (
    void
) 
```




<hr>



### function InitMetroTRKCommTable 

```C++
int InitMetroTRKCommTable (
    int hwId
) 
```




<hr>



### function ReserveEXI2Port 

```C++
void ReserveEXI2Port (
    void
) 
```




<hr>



### function TRKEXICallBack 

```C++
void TRKEXICallBack (
    __OSInterrupt param_0,
    OSContext * ctx
) 
```




<hr>



### function TRKInitializeIntDrivenUART 

```C++
DSError TRKInitializeIntDrivenUART (
    u32 param_0,
    u32 param_1,
    u32 param_2,
    volatile u8 ** param_3
) 
```




<hr>



### function TRKLoadContext 

```C++
asm void TRKLoadContext (
    OSContext * ctx,
    u32 r4
) 
```




<hr>



### function TRKPollUART 

```C++
int TRKPollUART (
    void
) 
```




<hr>



### function TRKReadUARTN 

```C++
UARTError TRKReadUARTN (
    void * bytes,
    u32 length
) 
```




<hr>



### function TRKUARTInterruptHandler 

```C++
void TRKUARTInterruptHandler () 
```




<hr>



### function TRKWriteUARTN 

```C++
UARTError TRKWriteUARTN (
    const void * bytes,
    u32 length
) 
```




<hr>



### function TRK\_board\_display 

```C++
void TRK_board_display (
    char * str
) 
```




<hr>



### function UnreserveEXI2Port 

```C++
void UnreserveEXI2Port (
    void
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/MetroTRK/Src/Os/dolphin/dolphin_trk_glue.c`

