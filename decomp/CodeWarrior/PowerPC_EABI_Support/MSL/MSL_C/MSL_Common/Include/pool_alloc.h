/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/04/24 23:21:08 $
 * $Revision: 1.26 $
 */

#include <ansi_parms.h>                                          /*- mm 970905 -*/

#ifndef _MSL_PRO4_MALLOC

#ifndef _MSL_POOL_ALLOC_H
#define _MSL_POOL_ALLOC_H

#include <ansi_parms.h>                                          /*- mm 970905 -*/
#include <size_t.h>

#pragma options align = native

#define __heap_version 2 /*- jg 980115 -*/                       /*- hh 990227 -*/

_MSL_BEGIN_EXTERN_C                                              /*- cc 010409 -*/

    void* __sys_alloc (__std (size_t));                          /*-  mf 990715 -*/
void      __sys_free (void*);                                    /*-  mf 990715 -*/
__std (size_t) __sys_pointer_size (void* ptr);                   /*- hh 000523 -*/
typedef struct __mem_pool
{
    void* reserved[14];
} __mem_pool;
_MSL_IMP_EXP_C void  __init_pool_obj (__mem_pool* pool_obj);
_MSL_IMP_EXP_C void* __pool_alloc (__mem_pool* pool_obj, size_t size);
_MSL_IMP_EXP_C void  __pool_free (__mem_pool* pool_obj, void* ptr);
_MSL_IMP_EXP_C void* __pool_realloc (__mem_pool* pool_obj, void* ptr, size_t size);
_MSL_IMP_EXP_C void* __pool_alloc_clear (__mem_pool* pool_obj, size_t size);
_MSL_IMP_EXP_C void  __pool_free_all (__mem_pool* pool);
_MSL_IMP_EXP_C void  __malloc_free_all ();

#ifdef _No_Alloc_OS_Support
_MSL_IMP_EXP_C int init_alloc (void*, __std (size_t) heap_size); /*- hh 990504 -*/
#endif

_MSL_END_EXTERN_C                                                /*- cc 010409 -*/

#pragma options align = reset

#endif                   /* _MSL_POOL_ALLOC_H */

#else                    /* _MSL_PRO4_MALLOC */

#ifndef _MSL_POOL_ALLOC_H
#define _MSL_POOL_ALLOC_H

#include <ansi_parms.h>  /*- mm 970905 -*/

#pragma options align = native

typedef signed long tag_word;
typedef struct block_header
{
    tag_word             tag;
    struct block_header* prev;
    struct block_header* next;
} block_header;
typedef struct list_header
{
    block_header* rover;
    block_header  header;
} list_header;
typedef struct heap_header
{
    struct heap_header* prev;
    struct heap_header* next;
} heap_header;
#ifndef __MIPS__
typedef unsigned long mem_size;
#else
typedef unsigned int mem_size;
#endif

typedef void* (*sys_alloc_ptr) (mem_size, struct mem_pool_obj*);  /*- mf 990715 -*/
typedef void  (*sys_free_ptr) (void*, struct mem_pool_obj*);      /*- mf 990715 -*/
typedef struct pool_options
{
    sys_alloc_ptr sys_alloc_func;
    sys_free_ptr  sys_free_func;
    mem_size      min_heap_size;
#if !__ALTIVEC__
    int always_search_first;
#else
    char always_search_first; /* for ALTIVEC */
    char block_alignment;
    char reserved1;
    char reserved2;
#endif
} pool_options;
typedef struct mem_pool_obj
{
    list_header free_list;
#ifndef _No_Alloc_OS_Support
    pool_options options;
    heap_header* heap_list;
    void*        userData;
#endif
} mem_pool_obj;
#define __heap_version 1 /*- jg 980115 -*/

_MSL_BEGIN_EXTERN_C                                               /*- cc 010409 -*/

    _MSL_IMP_EXP_C extern mem_pool_obj __malloc_pool;             /*- vss 980901 -*/

#if __ALTIVEC__
void __init_align_pool_obj (mem_pool_obj* pool_obj, char align);
#endif
void  __init_pool_obj (mem_pool_obj* pool_obj);
int   __pool_preallocate (mem_pool_obj* pool_obj, mem_size);      /*- mf 990715 -*/
void  __pool_preassign (mem_pool_obj* pool_obj, void*, mem_size); /*- mf 990715 -*/
void* __pool_alloc (mem_pool_obj* pool_obj, mem_size);            /*- mf 990715 -*/
void* __pool_alloc_clear (mem_pool_obj* pool_obj, mem_size);      /*- mf 990715 -*/
void* __pool_realloc (mem_pool_obj* pool_obj, void*, mem_size);   /*- mf 990715 -*/
void  __pool_free (mem_pool_obj* pool_obj, void*);                /*- mf 990715 -*/
_MSL_IMP_EXP_C void __pool_free_all (mem_pool_obj* pool_obj);

void* __sys_alloc (mem_size, mem_pool_obj*);                      /*- mf 990715 -*/
void  __sys_free (void*, mem_pool_obj*);                          /*- mf 990715 -*/

#ifdef _No_Alloc_OS_Support
_MSL_IMP_EXP_C int init_alloc (void*, mem_size);
#endif

_MSL_END_EXTERN_C                                                 /*- cc 010409 -*/

#pragma options align = reset

#endif                   /* _MSL_POOL_ALLOC_H */

#endif                   /* _MSL_PRO4_MALLOC */

    /* Change record:
     * MEA 970720 Changed __no_os to _No_Alloc_OS_Support.
     * mm  970905 added include of ansi_parms.h to avoid need for prefix file
     * jg  980115 added __heap_version definition
     * vss 980901 add extern __malloc_pool
     * hh  990227 rewrote allocation functions
     * bobc990302 support for AltiVec (specify alignment for the pool).
     * hh  990504 Corrected prototype for init_alloc()
     * mf  990715 Arg names in prototypes cause conflicts
     * hh  000523 Added __sys_pointer_size
     * cc  010409 updated defines to JWW new namespace macros
     * hh  010424 Modified malloc system to handle multiple pools
     */
