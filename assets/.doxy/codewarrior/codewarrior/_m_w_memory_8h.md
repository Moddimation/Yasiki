

# File MWMemory.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Runtime**](dir_ab14c6633277f31934f3117250613416.md) **>** [**Inc**](dir_897f0b8955620369fec815c20eca3684.md) **>** [**MWMemory.h**](_m_w_memory_8h.md)

[Go to the source code of this file](_m_w_memory_8h_source.md)




















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**Ptr**](_m_w_memory_8h.md#typedef-ptr) \* | [**Handle**](#typedef-handle)  <br> |
| typedef int | [**OSErr**](#typedef-oserr)  <br> |
| typedef char \* | [**Ptr**](#typedef-ptr)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  pascal void | [**DisposeHandle**](#function-disposehandle) ([**Handle**](_m_w_memory_8h.md#typedef-handle) h) <br> |
|  pascal [**Handle**](_m_w_memory_8h.md#typedef-handle) | [**NewHandle**](#function-newhandle) (long dataSize) <br> |




























## Public Types Documentation




### typedef Handle 

```C++
typedef Ptr* Handle;
```




<hr>



### typedef OSErr 

```C++
typedef int OSErr;
```




<hr>



### typedef Ptr 

```C++
typedef char* Ptr;
```




<hr>
## Public Functions Documentation




### function DisposeHandle 

```C++
pascal void DisposeHandle (
    Handle h
) 
```




<hr>



### function NewHandle 

```C++
pascal Handle NewHandle (
    long dataSize
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Runtime/Inc/MWMemory.h`

