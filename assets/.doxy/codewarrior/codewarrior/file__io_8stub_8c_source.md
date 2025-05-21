

# File file\_io.stub.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**PPC\_EABI**](dir_f6c4adf010e56356cc06c08ce198f64b.md) **>** [**SRC**](dir_394c6f6a5dc298f674b59e6fead1e53a.md) **>** [**file\_io.stub.c**](file__io_8stub_8c.md)

[Go to the documentation of this file](file__io_8stub_8c.md)


```C++
/*  Metrowerks Standard Library  Version 2.1.2  1997 May  */

/*
 *  file_io.mac.c
 *  
 *      Copyright 1995-1997 Metrowerks, Inc.
 *      All rights reserved.
 *  
 *  Routines
 *  --------
 *      __open_file
 *      __open_temp_file
 *      __read_file
 *      __write_file
 *      __position_file
 *      __flush_file
 *      __close_file
 *      __temp_file_name
 *      __delete_file
 *      __rename_file
 *
 *      __handle_open
 *      __handle_reopen
 *
 *      __set_idle_proc
 *
 *
 */

// Include your OS dependent include files
#include "file_io.h"

#ifdef _No_Disk_File_OS_Support
#error file_io.stub.c can't be in your project if _No_Disk_File_OS_Support is defined.
#endif

typedef struct {
    /* change these members to whatever is appropriate */
    short   refnum;
    void *  spec;
} temp_file_info;

static temp_file_info   temp_info[FOPEN_MAX];

static temp_file_info * find_temp_info(short refnum)
{
    int                             i;
    temp_file_info *    p;
    
    for (i = 0, p = temp_info; i < FOPEN_MAX; i++, p++)
        if (p->refnum == refnum)
            return(p);
    
    return(0);
}


int __open_file(const char * name, __file_modes mode, __file_handle * handle)
{   
    return(__no_io_error);  // Replace this with an OS call
                            // that opens the file.
}

int __open_temp_file(__file_handle * handle)
{
    char                    temp_name[L_tmpnam];
    temp_file_info *        info;
    void *                  spec;
    int                     ioresult;
    
    __temp_file_name(temp_name, &spec);
    
    if (!(info = find_temp_info(0)))
        return(__io_error);
    
    ioresult = __open_file(temp_name, __temp_file_mode, handle);
    
    if (ioresult == __no_io_error)
    {
        info->refnum = *handle;
        info->spec   = spec;
    }
    
    return(ioresult);
}

int __read_file(__file_handle handle, unsigned char * buffer, size_t * count, __idle_proc idle_proc)
{
    return(__no_io_error);  // Replace this with an OS call
                            // that reads from the file.
}

int __write_file(__file_handle handle, unsigned char * buffer, size_t * count, __idle_proc idle_proc)
{
    return(__no_io_error);  // Replace this with an OS call
                            // that writes to the file.
}

int __position_file(__file_handle handle, fpos_t * position, int mode, __idle_proc idle_proc)
{
    return(__no_io_error);  // Replace this with an OS call
                            // that sets the current position
                            // in the file.
}

int __close_file(__file_handle handle)
{
    return(__no_io_error);  // Replace this with an OS call
                            // that closes the file.
}

void __temp_file_name(char * name_str, void * filespec)
{
    // copy the temp file's name into name_str and
    // the file specification structure into filespec
}

int __delete_file(const char * name)
{
    return(__no_io_error);  // Replace this with an OS call
                            // that deletes the file.
}

int __rename_file(const char * old_name, const char * new_name)
{
    return(__no_io_error);  // Replace this with an OS call
                            // that renames the file.
}

/* Change record
 *  20-Jul-97 MEA  First code release.
 */
```


