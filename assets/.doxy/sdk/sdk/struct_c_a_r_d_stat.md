

# Struct CARDStat



[**ClassList**](annotated.md) **>** [**CARDStat**](struct_c_a_r_d_stat.md)





* `#include <card.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u8**](types_8h.md#typedef-u8) | [**bannerFormat**](#variable-bannerformat)  <br>_0x2E_  |
|  [**u32**](types_8h.md#typedef-u32) | [**commentAddr**](#variable-commentaddr)  <br>_0x38 // (offset to the pair of 32 byte character strings)_  |
|  [**u8**](types_8h.md#typedef-u8) | [**company**](#variable-company)  <br>_0x2C_  |
|  [**s8**](types_8h.md#typedef-s8) | [**fileName**](#variable-filename)  <br>_0x00_  |
|  [**u8**](types_8h.md#typedef-u8) | [**gameName**](#variable-gamename)  <br>_0x28_  |
|  [**u32**](types_8h.md#typedef-u32) | [**iconAddr**](#variable-iconaddr)  <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**iconFormat**](#variable-iconformat)  <br>_0x34_  |
|  [**u16**](types_8h.md#typedef-u16) | [**iconSpeed**](#variable-iconspeed)  <br>_0x36_  |
|  [**u32**](types_8h.md#typedef-u32) | [**length**](#variable-length)  <br>_0x20_  |
|  [**u32**](types_8h.md#typedef-u32) | [**offsetBanner**](#variable-offsetbanner)  <br>_0x3C_  |
|  [**u32**](types_8h.md#typedef-u32) | [**offsetBannerTlut**](#variable-offsetbannertlut)  <br>_0x40_  |
|  [**u32**](types_8h.md#typedef-u32) | [**offsetData**](#variable-offsetdata)  <br>_0x68_  |
|  [**u32**](types_8h.md#typedef-u32) | [**offsetIcon**](#variable-offseticon)  <br>_0x44 // per entry (8 entries \* = 3)_  |
|  [**u32**](types_8h.md#typedef-u32) | [**offsetIconTlut**](#variable-offseticontlut)  <br>_0x64_  |
|  [**u32**](types_8h.md#typedef-u32) | [**time**](#variable-time)  <br>_0x24 // (seconds since 01/01/2000 midnight)_  |












































## Public Attributes Documentation




### variable bannerFormat 

_0x2E_ 
```C++
u8 CARDStat::bannerFormat;
```




<hr>



### variable commentAddr 

_0x38 // (offset to the pair of 32 byte character strings)_ 
```C++
u32 CARDStat::commentAddr;
```




<hr>



### variable company 

_0x2C_ 
```C++
u8 CARDStat::company[2];
```




<hr>



### variable fileName 

_0x00_ 
```C++
s8 CARDStat::fileName[CARD_FILENAME_MAX];
```




<hr>



### variable gameName 

_0x28_ 
```C++
u8 CARDStat::gameName[4];
```




<hr>



### variable iconAddr 

```C++
u32 CARDStat::iconAddr;
```




<hr>



### variable iconFormat 

_0x34_ 
```C++
u16 CARDStat::iconFormat;
```




<hr>



### variable iconSpeed 

_0x36_ 
```C++
u16 CARDStat::iconSpeed;
```




<hr>



### variable length 

_0x20_ 
```C++
u32 CARDStat::length;
```




<hr>



### variable offsetBanner 

_0x3C_ 
```C++
u32 CARDStat::offsetBanner;
```




<hr>



### variable offsetBannerTlut 

_0x40_ 
```C++
u32 CARDStat::offsetBannerTlut;
```




<hr>



### variable offsetData 

_0x68_ 
```C++
u32 CARDStat::offsetData;
```




<hr>



### variable offsetIcon 

_0x44 // per entry (8 entries \* = 3)_ 
```C++
u32 CARDStat::offsetIcon[CARD_ICON_MAX];
```




<hr>



### variable offsetIconTlut 

_0x64_ 
```C++
u32 CARDStat::offsetIconTlut;
```




<hr>



### variable time 

_0x24 // (seconds since 01/01/2000 midnight)_ 
```C++
u32 CARDStat::time;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/card.h`

