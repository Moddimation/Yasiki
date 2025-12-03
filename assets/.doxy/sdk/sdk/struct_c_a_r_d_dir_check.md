

# Struct CARDDirCheck



[**ClassList**](annotated.md) **>** [**CARDDirCheck**](struct_c_a_r_d_dir_check.md)





* `#include <CARDPrivate.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**s16**](types_8h.md#typedef-s16) | [**checkCode**](#variable-checkcode)  <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**checkSum**](#variable-checksum)  <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**checkSumInv**](#variable-checksuminv)  <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**padding0**](#variable-padding0)  <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**padding1**](#variable-padding1)  <br> |












































## Public Attributes Documentation




### variable checkCode 

```C++
s16 CARDDirCheck::checkCode;
```




<hr>



### variable checkSum 

```C++
u16 CARDDirCheck::checkSum;
```




<hr>



### variable checkSumInv 

```C++
u16 CARDDirCheck::checkSumInv;
```




<hr>



### variable padding0 

```C++
u8 CARDDirCheck::padding0[64 - 2 *4];
```




<hr>



### variable padding1 

```C++
u16 CARDDirCheck::padding1;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/card/CARDPrivate.h`

