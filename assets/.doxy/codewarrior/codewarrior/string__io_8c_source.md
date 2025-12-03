

# File string\_io.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**string\_io.c**](string__io_8c.md)

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


