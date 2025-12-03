

# Struct DolImage



[**ClassList**](annotated.md) **>** [**DolImage**](struct_dol_image.md)





* `#include <dolformat.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**bss**](#variable-bss)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**bssLen**](#variable-bsslen)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**data**](#variable-data)  <br> |
|  [**u8**](types_8h.md#typedef-u8) \* | [**dataData**](#variable-datadata)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**dataLen**](#variable-datalen)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**entry**](#variable-entry)  <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**padding**](#variable-padding)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**text**](#variable-text)  <br> |
|  [**u8**](types_8h.md#typedef-u8) \* | [**textData**](#variable-textdata)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**textLen**](#variable-textlen)  <br> |












































## Public Attributes Documentation




### variable bss 

```C++
u32 DolImage::bss;
```




<hr>



### variable bssLen 

```C++
u32 DolImage::bssLen;
```




<hr>



### variable data 

```C++
u32 DolImage::data[DOL_MAX_DATA];
```




<hr>



### variable dataData 

```C++
u8* DolImage::dataData[DOL_MAX_DATA];
```




<hr>



### variable dataLen 

```C++
u32 DolImage::dataLen[DOL_MAX_DATA];
```




<hr>



### variable entry 

```C++
u32 DolImage::entry;
```




<hr>



### variable padding 

```C++
u8 DolImage::padding[28];
```




<hr>



### variable text 

```C++
u32 DolImage::text[DOL_MAX_TEXT];
```




<hr>



### variable textData 

```C++
u8* DolImage::textData[DOL_MAX_TEXT];
```




<hr>



### variable textLen 

```C++
u32 DolImage::textLen[DOL_MAX_TEXT];
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/dolformat.h`

