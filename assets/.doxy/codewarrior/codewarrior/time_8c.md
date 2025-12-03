

# File time.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**time.c**](time_8c.md)

[Go to the source code of this file](time_8c_source.md)



* `#include "arith.h"`
* `#include <limits.h>`
* `#include <stdarg.h>`
* `#include <stdlib.h>`
* `#include <stdio.h>`
* `#include <string.h>`
* `#include <time.h>`
* `#include <ThreadLocalData.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  const short | [**\_\_month\_to\_days**](#variable-__month_to_days)   = `/* multi line expression */`<br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  const char \* | [**day\_name**](#variable-day_name)   = `{"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}`<br> |
|  const char \* | [**month\_name**](#variable-month_name)   = `/* multi line expression */`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  int | [**\_\_leap\_year**](#function-__leap_year) (int year) <br> |
|  clock\_t | [**clock**](#function-clock) (void) <br> |
|  time\_t | [**time**](#function-time) (time\_t \* timer) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  void | [**\_\_time2tm**](#function-__time2tm) (time\_t inTime, struct tm \* tm) <br> |
|  int | [**\_\_tm2time**](#function-__tm2time) (struct tm \* tm, time\_t \* time) <br> |
|  int | [**adjust**](#function-adjust) (int \* x, int y, int \* z) <br> |
|  void | [**asciitime**](#function-asciitime) (struct tm tm, char \* str) <br> |
|  void | [**clear\_tm**](#function-clear_tm) (struct tm \* tm) <br> |
|  int | [**emit**](#function-emit) (char \* str, [**size\_t**](size__t_8h.md#typedef-size_t) size, [**size\_t**](size__t_8h.md#typedef-size_t) \* max\_size, const char \* format\_str, ...) <br> |
|  int | [**leap\_days**](#function-leap_days) (int year, int mon) <br> |
|  int | [**week\_num**](#function-week_num) (const struct tm \* tm, int starting\_day) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**seconds\_per\_day**](time_8c.md#define-seconds_per_day)  `(24L \* [**seconds\_per\_hour**](time_8c.md#define-seconds_per_hour))`<br> |
| define  | [**seconds\_per\_hour**](time_8c.md#define-seconds_per_hour)  `(60L \* [**seconds\_per\_minute**](time_8c.md#define-seconds_per_minute))`<br> |
| define  | [**seconds\_per\_minute**](time_8c.md#define-seconds_per_minute)  `(60L)`<br> |

## Public Attributes Documentation




### variable \_\_month\_to\_days 

```C++
const short __month_to_days[2][13];
```




<hr>
## Public Static Attributes Documentation




### variable day\_name 

```C++
const char* day_name[];
```




<hr>



### variable month\_name 

```C++
const char* month_name[];
```




<hr>
## Public Functions Documentation




### function \_\_leap\_year 

```C++
int __leap_year (
    int year
) 
```




<hr>



### function clock 

```C++
clock_t clock (
    void
) 
```




<hr>



### function time 

```C++
time_t time (
    time_t * timer
) 
```




<hr>
## Public Static Functions Documentation




### function \_\_time2tm 

```C++
static void __time2tm (
    time_t inTime,
    struct tm * tm
) 
```




<hr>



### function \_\_tm2time 

```C++
static int __tm2time (
    struct tm * tm,
    time_t * time
) 
```




<hr>



### function adjust 

```C++
static int adjust (
    int * x,
    int y,
    int * z
) 
```




<hr>



### function asciitime 

```C++
static void asciitime (
    struct tm tm,
    char * str
) 
```




<hr>



### function clear\_tm 

```C++
static void clear_tm (
    struct tm * tm
) 
```




<hr>



### function emit 

```C++
static int emit (
    char * str,
    size_t size,
    size_t * max_size,
    const char * format_str,
    ...
) 
```




<hr>



### function leap\_days 

```C++
static int leap_days (
    int year,
    int mon
) 
```




<hr>



### function week\_num 

```C++
static int week_num (
    const struct tm * tm,
    int starting_day
) 
```




<hr>
## Macro Definition Documentation





### define seconds\_per\_day 

```C++
#define seconds_per_day `(24L * seconds_per_hour )`
```




<hr>



### define seconds\_per\_hour 

```C++
#define seconds_per_hour `(60L * seconds_per_minute )`
```




<hr>



### define seconds\_per\_minute 

```C++
#define seconds_per_minute `(60L)`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/time.c`

