

# File dolphin\_trk\_glue.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Priv**](dir_58866132d53834b5384652e07310e785.md) **>** [**Os**](dir_c56ed9b4d0a834609820f8ece539b317.md) **>** [**dolphin**](dir_dce8d8183be8371126a2be5b42bed669.md) **>** [**dolphin\_trk\_glue.h**](dolphin__trk__glue_8h.md)

[Go to the source code of this file](dolphin__trk__glue_8h_source.md)



* `#include "dolphin/os.h"`
* `#include "trk.h"`
* `#include "stddef.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**DBCommTable**](struct_d_b_comm_table.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef void(\* | [**DBCommFunc**](#typedef-dbcommfunc)  <br> |
| typedef void(\* | [**DBCommInitFunc**](#typedef-dbcomminitfunc)  <br> |
| typedef int(\* | [**DBCommReadFunc**](#typedef-dbcommreadfunc)  <br> |
| typedef struct [**DBCommTable**](struct_d_b_comm_table.md) | [**DBCommTable**](#typedef-dbcommtable)  <br> |
| typedef int(\* | [**DBCommWriteFunc**](#typedef-dbcommwritefunc)  <br> |
| typedef u32(\* | [**DBPollFunc**](#typedef-dbpollfunc)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**EnableEXI2Interrupts**](#function-enableexi2interrupts) (void) <br> |
|  int | [**InitMetroTRKCommTable**](#function-initmetrotrkcommtable) (int hwId) <br> |
|  void | [**ReserveEXI2Port**](#function-reserveexi2port) (void) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKInitializeIntDrivenUART**](#function-trkinitializeintdrivenuart) (u32 param\_0, u32 param\_1, u32 param\_2, volatile u8 \*\* param\_3) <br> |
|  void | [**TRKLoadContext**](#function-trkloadcontext) (OSContext \* ctx, u32 r4) <br> |
|  int | [**TRKPollUART**](#function-trkpolluart) (void) <br> |
|  [**UARTError**](trk_8h.md#typedef-uarterror) | [**TRKReadUARTN**](#function-trkreaduartn) (void \* bytes, u32 length) <br> |
|  [**UARTError**](trk_8h.md#typedef-uarterror) | [**TRKWriteUARTN**](#function-trkwriteuartn) (const void \* bytes, u32 length) <br> |
|  void | [**TRK\_board\_display**](#function-trk_board_display) (char \* str) <br> |
|  void | [**UnreserveEXI2Port**](#function-unreserveexi2port) (void) <br> |




























## Public Types Documentation




### typedef DBCommFunc 

```C++
typedef void(* DBCommFunc) (void);
```




<hr>



### typedef DBCommInitFunc 

```C++
typedef void(* DBCommInitFunc) (volatile u8 **, __OSInterruptHandler);
```




<hr>



### typedef DBCommReadFunc 

```C++
typedef int(* DBCommReadFunc) (void *, size_t);
```




<hr>



### typedef DBCommTable 

```C++
typedef struct DBCommTable DBCommTable;
```




<hr>



### typedef DBCommWriteFunc 

```C++
typedef int(* DBCommWriteFunc) (const void *, size_t);
```




<hr>



### typedef DBPollFunc 

```C++
typedef u32(* DBPollFunc) (void);
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
void TRKLoadContext (
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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/MetroTRK/Priv/Os/dolphin/dolphin_trk_glue.h`

