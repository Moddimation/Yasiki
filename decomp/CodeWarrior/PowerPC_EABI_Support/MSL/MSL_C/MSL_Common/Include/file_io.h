/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/26 00:38:33 $
 * $Revision: 1.23.4.1 $
 */

#ifndef _MSL_FILE_IO_H
#define _MSL_FILE_IO_H

#include <ansi_parms.h> /*- hh 971206 -*/
#include <cstdio>       /*- hh 971206 -*/

_MSL_BEGIN_EXTERN_C     /*- cc 010409 -*/

    /*- hh 990121 -*/
    extern _MSL_IMP_EXP_C __std(__file_modes) __temp_file_mode;
int                       __open_file(const char* name, __std(__file_modes) mode,
                                      __std(__file_handle) * handle);
int                       __open_temp_file(__std(__file_handle) * handle);
int  __read_file(__std(__file_handle) handle, unsigned char* buffer,
                 __std(size_t) * count, __std(__idle_proc) idle_proc);
int  __write_file(__std(__file_handle) handle, unsigned char* buffer,
                  __std(size_t) * count, __std(__idle_proc) idle_proc);
int  __position_file(__std(__file_handle) handle, __std(fpos_t) * position, int mode,
                     __std(__idle_proc) idle_proc);
int  __close_file(__std(__file_handle) handle);
void __temp_file_name(char* name_str, void*);
int  __delete_file(const char* name);
int  __rename_file(const char* old_name, const char* new_name);
__std(FILE) * __reopen(__std(FILE) * file); /*- mm 990609 -*/     /*- hh 990921 -*/
_MSL_IMP_EXP_C int __get_file_modes(const char* mode, __std(__file_modes) * modes);
int                __flush_line_buffered_output_files(void);      /*- mm 970702 -*/
char*              __msl_itoa(int, char*, int);                   /*- cc 010605 -*/
char*              __msl_strrev(char*);                           /*- cc 010605 -*/
int                __msl_strnicmp(const char*, const char*, int); /*- cc 010605 -*/
char*              __msl_getcwd(char*, int);                      /*- cc 010605 -*/
char*              __msl_strdup(const char*);                     /*- cc 010725 -*/

_MSL_END_EXTERN_C                                                 /*- cc 010409 -*/

#endif /* _MSL_FILE_IO_H */

       /* Change record:
        * mm  970702 Synchronization with Be
        * hh  971206 namespace support
        * rjk 980313 added _MSL_IMP_EXP_C for __temp_file_mode
        * hh  990121 Fixed __std 15 places
        * mm  990609 Added header for __reopen.
        * hh  990921 Wrapped FILE under __std, 2 places
        * cc  010405 removed pragma options align native and reset
        * cc  010409 updated defines to JWW new namespace macros
        * cc  010605 Made __msl_itoa = to itoa,__msl_strrev = to strrev,
        *     		  __msl_strnicmp = to strncmp, __msl_getcwd= to getcwd  for MSL C
        * JWW 010618 Use cname headers exclusively to prevent namespace pollution in C++
        * cc  010725 Added __msl_strdup
        */
