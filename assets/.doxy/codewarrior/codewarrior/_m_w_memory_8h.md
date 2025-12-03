

# File MWMemory.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Runtime**](dir_e69745e3285a8d4f155d29d88e1a7b6b.md) **>** [**Inc**](dir_192ee455ef94b5a11e62d491224058e4.md) **>** [**MWMemory.h**](_m_w_memory_8h.md)

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
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Runtime/Inc/MWMemory.h`

