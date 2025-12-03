

# Struct CommandReply



[**ClassList**](annotated.md) **>** [**CommandReply**](struct_command_reply.md)





* `#include <trk.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  u32 | [**\_00**](#variable-_00)  <br> |
|  u32 | [**\_0C**](#variable-_0c)  <br> |
|  u8 | [**\_10**](#variable-_10)  <br> |
|  u8 | [**b**](#variable-b)  <br> |
|  union [**CommandReply**](struct_command_reply.md) | [**commandID**](#variable-commandid)  <br> |
|  [**MessageCommandID**](trk_8h.md#enum-messagecommandid) | [**m**](#variable-m)  <br> |
|  [**DSReplyError**](trk_8h.md#enum-dsreplyerror) | [**r**](#variable-r)  <br> |
|  union [**CommandReply**](struct_command_reply.md) | [**replyError**](#variable-replyerror)  <br> |












































## Public Attributes Documentation




### variable \_00 

```C++
u32 CommandReply::_00;
```




<hr>



### variable \_0C 

```C++
u32 CommandReply::_0C;
```




<hr>



### variable \_10 

```C++
u8 CommandReply::_10[0x30];
```




<hr>



### variable b 

```C++
u8 CommandReply::b;
```




<hr>



### variable commandID 

```C++
union CommandReply CommandReply::commandID;
```




<hr>



### variable m 

```C++
MessageCommandID CommandReply::m;
```




<hr>



### variable r 

```C++
DSReplyError CommandReply::r;
```




<hr>



### variable replyError 

```C++
union CommandReply CommandReply::replyError;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/MetroTRK/Priv/trk.h`

