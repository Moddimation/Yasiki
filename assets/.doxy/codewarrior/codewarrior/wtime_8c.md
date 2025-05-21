

# File wtime.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**wtime.c**](wtime_8c.md)

[Go to the source code of this file](wtime_8c_source.md)



* `#include <arith.h>`
* `#include <climits>`
* `#include <cstdarg>`
* `#include <cstdlib>`
* `#include <cstdio>`
* `#include <cstring>`
* `#include <ctime>`
* `#include <wchar.h>`
* `#include <ThreadLocalData.h>`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* | [**day\_name**](#variable-day_name)   = `/* multi line expression */`<br> |
|  const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* | [**month\_name**](#variable-month_name)   = `/* multi line expression */`<br> |
|  const short | [**month\_to\_days**](#variable-month_to_days)   = `/* multi line expression */`<br> |
















## Public Static Functions

| Type | Name |
| ---: | :--- |
|  void | [**\_\_time2tm**](#function-__time2tm) (time\_t inTime, struct tm \* tm) <br> |
|  int | [**\_\_tm2time**](#function-__tm2time) (struct tm \* tm, time\_t \* time) <br> |
|  int | [**adjust**](#function-adjust) (int \* x, int y, int \* z) <br> |
|  void | [**clear\_tm**](#function-clear_tm) (struct tm \* tm) <br> |
|  int | [**leap\_days**](#function-leap_days) (int year, int mon) <br> |
|  int | [**leap\_year**](#function-leap_year) (int year) <br> |
|  void | [**wasciitime**](#function-wasciitime) (struct tm tm, [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str) <br> |
|  int | [**week\_num**](#function-week_num) (const struct tm \* tm, int starting\_day) <br> |
|  int | [**wemit**](#function-wemit) ([**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str, [**size\_t**](size__t_8h.md#typedef-size_t) size, [**size\_t**](size__t_8h.md#typedef-size_t) \* max\_size, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format\_str, ...) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**seconds\_per\_day**](wtime_8c.md#define-seconds_per_day)  `(24L \* [**seconds\_per\_hour**](time_8c.md#define-seconds_per_hour))`<br> |
| define  | [**seconds\_per\_hour**](wtime_8c.md#define-seconds_per_hour)  `(60L \* [**seconds\_per\_minute**](time_8c.md#define-seconds_per_minute))`<br> |
| define  | [**seconds\_per\_minute**](wtime_8c.md#define-seconds_per_minute)  `(60L)`<br> |

## Public Static Attributes Documentation




### variable day\_name 

```C++
const wchar_t* day_name[];
```




<hr>



### variable month\_name 

```C++
const wchar_t* month_name[];
```




<hr>



### variable month\_to\_days 

```C++
const short month_to_days[2][13];
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



### function clear\_tm 

```C++
static void clear_tm (
    struct tm * tm
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



### function leap\_year 

```C++
static int leap_year (
    int year
) 
```




<hr>



### function wasciitime 

```C++
static void wasciitime (
    struct tm tm,
    wchar_t * str
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



### function wemit 

```C++
static int wemit (
    wchar_t * str,
    size_t size,
    size_t * max_size,
    const wchar_t * format_str,
    ...
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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/wtime.c`

