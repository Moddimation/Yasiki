

# File char\_io.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**char\_io.c**](char__io_8c.md)

[Go to the source code of this file](char__io_8c_source.md)



* `#include <stdio.h>`
* `#include "ansi_files.h"`
* `#include "buffer_io.h"`
* `#include "char_io.h"`
* `#include "misc_io.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  int | [**\_\_get\_char**](#function-__get_char) (FILE \* file) <br> |
|  int | [**\_\_put\_char**](#function-__put_char) (int c, FILE \* file) <br> |
|  int | [**\_\_ungotten**](#function-__ungotten) (FILE \* file) <br> |
|  int | [**fgetc**](#function-fgetc) (FILE \* file) <br> |
|  char \* | [**fgets**](#function-fgets) (char \* s, int n, FILE \* file) <br> |
|  int | [**fputc**](#function-fputc) (int c, FILE \* file) <br> |
|  int | [**fputs**](#function-fputs) (const char \* s, FILE \* file) <br> |
|  int() | [**getc**](#function-getc) (FILE \* file) <br> |
|  int() | [**getchar**](#function-getchar) (void) <br> |
|  char \* | [**gets**](#function-gets) (char \* s) <br> |
|  int() | [**putc**](#function-putc) (int c, FILE \* file) <br> |
|  int() | [**putchar**](#function-putchar) (int c) <br> |
|  int | [**puts**](#function-puts) (const char \* s) <br> |
|  int | [**ungetc**](#function-ungetc) (int c, FILE \* file) <br> |




























## Public Functions Documentation




### function \_\_get\_char 

```C++
int __get_char (
    FILE * file
) 
```




<hr>



### function \_\_put\_char 

```C++
int __put_char (
    int c,
    FILE * file
) 
```




<hr>



### function \_\_ungotten 

```C++
int __ungotten (
    FILE * file
) 
```




<hr>



### function fgetc 

```C++
int fgetc (
    FILE * file
) 
```




<hr>



### function fgets 

```C++
char * fgets (
    char * s,
    int n,
    FILE * file
) 
```




<hr>



### function fputc 

```C++
int fputc (
    int c,
    FILE * file
) 
```




<hr>



### function fputs 

```C++
int fputs (
    const char * s,
    FILE * file
) 
```




<hr>



### function getc 

```C++
int() getc (
    FILE * file
) 
```




<hr>



### function getchar 

```C++
int() getchar (
    void
) 
```




<hr>



### function gets 

```C++
char * gets (
    char * s
) 
```




<hr>



### function putc 

```C++
int() putc (
    int c,
    FILE * file
) 
```




<hr>



### function putchar 

```C++
int() putchar (
    int c
) 
```




<hr>



### function puts 

```C++
int puts (
    const char * s
) 
```




<hr>



### function ungetc 

```C++
int ungetc (
    int c,
    FILE * file
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/char_io.c`

