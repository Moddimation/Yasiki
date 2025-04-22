/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/04/20 17:14:20 $
 * $Revision: 1.13 $
 */

#ifndef _MSL_VA_LIST_H
#    define _MSL_VA_LIST_H

#    include <ansi_parms.h> /*- mm 970905 -*/

_MSL_BEGIN_NAMESPACE_STD    /*- cc 010409 -*/
    _MSL_BEGIN_EXTERN_C     /*- cc 010409 -*/

#    if __dest_os == __ppc_eabi || __dest_os == __dolphin_os

    typedef struct __tag_va_List
{
    char  gpr;
    char  fpr;
    char  reserved[2];
    char* input_arg_area;
    char* reg_save_area;
} __va_list[1];

typedef __va_list va_list;

#    else

    typedef char* va_list;

#    endif

_MSL_END_EXTERN_C           /*- cc 010409 -*/
    _MSL_END_NAMESPACE_STD  /*- cc 010409 -*/

#endif                      /* _MSL_VA_LIST_H */

                            /* Change record:
                             * MEA 970723 Merged PPC EABI changes in.
                             * MEA 970720 Changed __ppc_eabi_bare to __ppc_eabi.
                             * mm  970905 added include of ansi_parms.h to avoid need for prefix file
                             * hh  971206 added namespace support.  Is the extern "C" necessary?  Probably not.
                             * cc  010409 updated to JWW new namespace macros
                             */
