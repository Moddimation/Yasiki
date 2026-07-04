

# File db.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**db.h**](db_8h.md)

[Go to the source code of this file](db_8h_source.md)



* `#include <types.h>`
* `#include <dolphin/db/DBInterface.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DBIsDebuggerPresent**](#function-dbisdebuggerpresent) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DBPrintf**](#function-dbprintf) ([**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* str, ...) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**OS\_DBINTERFACE\_ADDR**](db_8h.md#define-os_dbinterface_addr)  `0x00000040`<br> |

## Public Functions Documentation




### function DBIsDebuggerPresent 

```C++
BOOL DBIsDebuggerPresent (
    void
) 
```




<hr>



### function DBPrintf 

```C++
void DBPrintf (
    char * str,
    ...
) 
```




<hr>
## Macro Definition Documentation





### define OS\_DBINTERFACE\_ADDR 

```C++
#define OS_DBINTERFACE_ADDR `0x00000040`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/db.h`

