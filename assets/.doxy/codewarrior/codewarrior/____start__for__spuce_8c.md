

# File \_\_start\_for\_spuce.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Runtime**](dir_e69745e3285a8d4f155d29d88e1a7b6b.md) **>** [**Src**](dir_1789e36d750963f536ec280b459db2bf.md) **>** [**\_\_start\_for\_spuce.c**](____start__for__spuce_8c.md)

[Go to the source code of this file](____start__for__spuce_8c_source.md)



* `#include <__mem.h>`
* `#include <__ppc_eabi_linker.h>`
* `#include <__ppc_eabi_init.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**\_\_start**](#function-__start) (void) <br> |
|  void | [**exit**](#function-exit) (int) <br> |
|  void | [**main**](#function-main) () <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  void | [**\_\_copy\_rom\_section**](#function-__copy_rom_section) (void \* dst, const void \* src, unsigned long size) <br> |
|  void | [**\_\_init\_bss\_section**](#function-__init_bss_section) (void \* dst, unsigned long size) <br> |
|  void | [**\_\_init\_data**](#function-__init_data) (void) <br> |
|  void | [**\_\_init\_registers**](#function-__init_registers) (void) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**USE\_FAR\_ADDRESSING\_TO\_TEXT\_SECTION**](____start__for__spuce_8c.md#define-use_far_addressing_to_text_section)  <br> |

## Public Functions Documentation




### function \_\_start 

```C++
void __start (
    void
) 
```




<hr>



### function exit 

```C++
void exit (
    int
) 
```




<hr>



### function main 

```C++
void main () 
```




<hr>
## Public Static Functions Documentation




### function \_\_copy\_rom\_section 

```C++
static void __copy_rom_section (
    void * dst,
    const void * src,
    unsigned long size
) 
```




<hr>



### function \_\_init\_bss\_section 

```C++
static void __init_bss_section (
    void * dst,
    unsigned long size
) 
```




<hr>



### function \_\_init\_data 

```C++
static void __init_data (
    void
) 
```




<hr>



### function \_\_init\_registers 

```C++
static void __init_registers (
    void
) 
```




<hr>
## Macro Definition Documentation





### define USE\_FAR\_ADDRESSING\_TO\_TEXT\_SECTION 

```C++
#define USE_FAR_ADDRESSING_TO_TEXT_SECTION 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Runtime/Src/__start_for_spuce.c`

