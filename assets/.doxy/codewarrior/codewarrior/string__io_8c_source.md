

# File string\_io.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**string\_io.c**](string__io_8c.md)

[Go to the documentation of this file](string__io_8c.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/01/22 23:40:33 $ 
 *  $Revision: 1.7 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  string_io.c
 *  
 *  Routines
 *  --------
 *      __open_string_file
 *
 *      __read_string
 *      __write_string
 *      __close_string
 *
 *
 */

#include "ansi_files.h"
#include "buffer_io.h"
#include <limits.h>
#include "string_io.h"

int __open_string_file(FILE * file, char * str, size_t n, int io_state)
{
#ifndef __NO_WIDE_CHAR              /* mm 980204 */
    static const __file_modes   mode = {__must_exist, __read_write, _IOFBF, __string_file, __unoriented,  1};
                                                /* file orientation */
#else
    static const __file_modes   mode = {__must_exist, __read_write, _IOFBF, __string_file, 1};
#endif /* not __NO_WIDE_CHAR */     /* mm 980204 */
    
    __init_file(file, mode, str, n);
    
    file->state.io_state = io_state;
    
    __prep_buffer(file);
    
    return(__no_io_error);
}

int __read_string(__file_handle handle, unsigned char * buffer, size_t * count, __idle_proc idle_proc)
{
#pragma unused(handle,buffer,count,idle_proc)

    return(__io_EOF);     /* mm 961031 */
}

int __write_string(__file_handle handle, unsigned char * buffer, size_t * count, __idle_proc idle_proc)
{
#pragma unused(handle,buffer,count,idle_proc)

    return(__no_io_error);
}

int __close_string(__file_handle handle)
{
#pragma unused(handle)

    return(__no_io_error);
}

/*  Change Record
 *  01-Sep-95 JFH  First code release.
 *  mm 961031  Changes for Pascal
 * mm 980204  Changes to file structure to support wide characters
*/
```


