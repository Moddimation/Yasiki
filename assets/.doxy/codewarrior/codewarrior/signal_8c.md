

# File signal.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**signal.c**](signal_8c.md)

[Go to the source code of this file](signal_8c_source.md)



* `#include "critical_regions.h"`
* `#include <errno.h>`
* `#include <signal.h>`
* `#include <stdlib.h>`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  \_\_signal\_func\_ptr | [**signal\_funcs**](#variable-signal_funcs)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  int | [**raise**](#function-raise) (int signal) <br> |
|  \_\_signal\_func\_ptr | [**signal**](#function-signal) (int signal, \_\_signal\_func\_ptr signal\_func) <br> |




























## Public Static Attributes Documentation




### variable signal\_funcs 

```C++
__signal_func_ptr signal_funcs[__signal_max];
```




<hr>
## Public Functions Documentation




### function raise 

```C++
int raise (
    int signal
) 
```




<hr>



### function signal 

```C++
__signal_func_ptr signal (
    int signal,
    __signal_func_ptr signal_func
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/signal.c`

