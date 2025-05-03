/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/06/19 00:12:52 $
 * $Revision: 1.19 $
 */

#ifndef _MSL_ANSI_FILES_H
#define _MSL_ANSI_FILES_H

#include <ansi_parms.h>            /*- hh 971206 -*/
#include <cstdio>                  /*- hh 971206 -*/

#define set_eof(file)                                                               \
    do {                                                                            \
        (file)->state.io_state = __neutral;                                         \
        (file)->state.eof = 1;                                                      \
        (file)->buffer_len = 0;                                                     \
    }                                                                               \
    while (0)

#define set_error(file)                                                             \
    do {                                                                            \
        (file)->state.error = 1;                                                    \
        (file)->buffer_len = 0;                                                     \
    }                                                                               \
    while (0)

_MSL_BEGIN_EXTERN_C                /*- cc 010409 -*/

        __std (FILE) *
    __find_unopened_file (void);   /*- hh 990121 -*/
void __init_file (__std (FILE) *,
                  __std (__file_modes) mode,
                  char* buff,
                  __std (size_t)); /*- mf 990715 -*/
void __close_all (void);
int  __flush_all (void);
int  __flush_line_buffered_output_files (void);

_MSL_END_EXTERN_C                  /*- cc 010409 -*/

#endif                             /* _MSL_ANSI_FILES_H */

                                   /* Change record:
                                    * hh  971206 namespace support
                                    * mm  981015 Commented out __file_to_num and __num_to_file while investigating
                                    * whether they are really needed.                              mm  990121 fixed
                                    * __std 6 places                              blc 990308                                fixed tabbing on macro
                                    * definitions                              mf  990715 Take arg names out of
                                    * prototype                              cc  010405 removed pragma options align
                                    * native and reset                              cc  010409                                updated to JWW new
                                    * namespace macros                              JWW 010618 Use cname headers
                                    * exclusively                              to prevent namespace pollution in C++
                                    */
