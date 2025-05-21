

# File signal.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**signal.c**](signal_8c.md)

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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/signal.c`

