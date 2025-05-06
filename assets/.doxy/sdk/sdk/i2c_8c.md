

# File i2c.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**vi**](dir_4c4bdd086c28c27443eb7acfc670f6a8.md) **>** [**i2c.c**](i2c_8c.md)

[Go to the source code of this file](i2c_8c_source.md)



* `#include <dolphin/vi.h>`
* `#include "__vi.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**lastError**](#variable-lasterror)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_VISendI2CData**](#function-__visendi2cdata) ([**u8**](types_8h.md#typedef-u8) slaveAddr, [**u8**](types_8h.md#typedef-u8) \* pData, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) nBytes) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**sendSlaveAddr**](#function-sendslaveaddr) ([**u8**](types_8h.md#typedef-u8) slaveAddr) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**wait4ClkHigh**](#function-wait4clkhigh) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


























## Public Static Attributes Documentation




### variable lastError 

```C++
int lastError;
```




<hr>
## Public Functions Documentation




### function \_\_VISendI2CData 

```C++
int __VISendI2CData (
    u8 slaveAddr,
    u8 * pData,
    int nBytes
) 
```




<hr>
## Public Static Functions Documentation




### function sendSlaveAddr 

```C++
static int sendSlaveAddr (
    u8 slaveAddr
) 
```




<hr>



### function wait4ClkHigh 

```C++
static int wait4ClkHigh (
    void
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/src/dolphin/vi/i2c.c`

