/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/03 22:56:14 $
 * $Revision: 1.37 $
 */

#include <ansi_parms.h>           /* mm 970904 */

#ifdef _MSL_OS_DIRECT_MALLOC
#pragma mark -
#pragma mark _MSL_OS_DIRECT_MALLOC
#pragma mark -

#include <pool_alloc.h>
#include <stdlib.h>
#include <string.h>
void*
malloc (size_t size)
{
    if (size == 0)
#ifdef _MSL_MALLOC_0_RETURNS_NON_NULL
        ++size;
#else
        return 0;
#endif
    return __sys_alloc (size);
}
void
free (void* ptr)
{
    if (ptr != 0)
    {
        __sys_free (ptr);
    }
}
void*
realloc (void* ptr, size_t size)
{
    size_t orig_size;
    void*  p;
    if (ptr == 0)
    {
        return malloc (size);
    }
    orig_size = __sys_pointer_size (ptr);
    p = malloc (size);
    if (p != 0)
    {
        orig_size = orig_size < size ? orig_size : size;
        memcpy (p, ptr, orig_size);
        free (ptr);
    }
    return p;
}
void*
calloc (size_t nmemb, size_t size)
{
    void* result;

    size *= nmemb;
    result = malloc (size);
    if (result != 0)
    {
        memset (result, 0, size);
    }
    return result;
}
#elif defined(_MSL_PRO4_MALLOC)
#pragma mark -
#pragma mark _MSL_PRO4_MALLOC
#pragma mark -

/*
 *	alloc.c
 *
 *	Routines
 *	--------
 *		init_alloc			Initialize allocs' memory pool to be fixed size and
 *location GetHeapSymbols		get linker defined symbols for embedded
 *		init_default_heap	initialize the default heap
 *		malloc				Allocate memory
 *		calloc				Allocate and clear memory
 *		realloc
 *		free				Return memory block to allocs' memory pool
 *
 *
 */

#include <ansi_parms.h>           /*- mm 970904 -*/
#include <stdlib.h>

#include "critical_regions.h"
#include "pool_alloc.h"

#if __ALTIVEC__
mem_pool_obj __vec_malloc_pool;
static int   vec_initialized = 0;
#endif
mem_pool_obj __malloc_pool;
static int   initialized = 0;

#ifdef _No_Alloc_OS_Support       /*- mm 981015 -*/
mem_pool_obj* __malloc_pool_ptr = &__malloc_pool;

static int defaultheapinitialized = 0;

int init_alloc (void* pool_ptr, mem_size size);
/***************************************************************************
 *	init_alloc
 *		Initializes the memory pool that malloc uses. This call is designed to
 *		be used for systems that DO NOT have memory allocation functions
 *  	built into the system. The first call will define the pool and use the
 *		rest of the space as a block of memory. Subsequent calls will add the
 *		memory as another block of memory to the malloc's existing pool. Once
 *		a heap of memory is allocated to the malloc memory pool, it can not
 *		be returned.
 *
 *	Inputs:
 *		pool_ptr		pointer to memory to be used in malloc's memory pool
 *		size				size of memory to be used in (or added to) malloc's
 *memory pool
 *
 *	Outputs:
 *		None
 *
 *	Returns: int
 *		0		Fail
 *		1		Success: Memory initialized as malloc's memory pool
 *		2		Success: Memory added to initial heap successfully
 *
 *  NOTE:
 *		This function must be called prior to using other alloc.c functions
 *
 ***************************************************************************/
extern int
init_alloc (void* pool_ptr, mem_size size)
{
    if (!initialized)
    {
        /***************************************************************************
         * Memory not initialized, make a pool and use the rest of the room for
         *	memory blocks
         ***************************************************************************/
        /* Size of pool overhead */
        size_t pool_overhead = sizeof (mem_pool_obj);

        /* Remove pool overhead from size */
        size -= pool_overhead;

        /* Point malloc pool at memory address provided */
        __malloc_pool_ptr = (mem_pool_obj*)pool_ptr;

        /* Create pool structure at memory address provided */
        __init_pool_obj (__malloc_pool_ptr);

        /* Assign the rest of the space (size - pool_overhead) to a memory block  */
        __pool_preassign (
            __malloc_pool_ptr, (void*)((size_t)pool_ptr + pool_overhead), size);

        /* Mark memory as initialized */
        initialized = 1;

        /* Return successful pool initialization value */
        return (1);
    }
    else
    {
        /***************************************************************************
         * Memory already initialized, use all memory space as a memory block
         ***************************************************************************/
        __pool_preassign (__malloc_pool_ptr, (void*)pool_ptr, size);

        /* Return successful heap addition value */
        return (2);
    }
}
#if __dest_os == __ppc_eabi || __dest_os == __dolphin_os

__declspec (section
            ".init") extern char _heap_addr[]; /* starting address for heap */
__declspec (section
            ".init") extern char _heap_end[];  /* address after end byte of heap */

#elif __dest_os == __nec_eabi_bare || __dest_os == __emb_68k ||                     \
    __dest_os == __mcore_bare || __dest_os == __sh_bare

extern char __heap_size[]; /* size of the stack (Linker pref panel) */
extern char __heap_addr[]; /* starting address for heap */

#elif __dest_os == __m56800_os

extern unsigned int _heap_size; /* size of the stack (DSP pref panel) */
extern unsigned int _heap_addr; /* starting address for heap */
extern unsigned int _heap_end;  /* starting address for heap */

#elif __dest_os == __m56800E_os

extern unsigned int _heap_addr[]; /* starting address for heap */
extern unsigned int _heap_end[];  /* starting address for heap */

#elif __dest_os == __mips_bare
extern char _heap_addr[]; /* starting address for heap */
extern char _heap_end[];  /* address after end byte of heap */

#elif __dest_os == __n64_os       /* ad 01.28.99, added nintendo support */
extern char _heap_addr[];
extern char _heap_end[];

#else
#error
#endif                            /* __dest_os	== __ppc_eabi */

void init_default_heap (void);
void
init_default_heap (void)
{
    defaultheapinitialized = 1;

#if __dest_os == __mcore_bare || __dest_os == __sh_bare
    if (__heap_size != 0)
    {
        init_alloc ((void*)__heap_addr, (size_t)__heap_size);
    }
#else
    if (_heap_end - _heap_addr != 0)
    {
        init_alloc ((void*)_heap_addr, (_heap_end - _heap_addr));
    }
#endif
}
#endif /* _No_Alloc_OS_Support */ /*- mm 981015 -*/
void*
malloc (size_t size)
{
    void* block;

    __begin_critical_region (malloc_pool_access);

#ifdef _No_Alloc_OS_Support       /*- mm 981015 -*/

    if (!defaultheapinitialized)               /*- mm 981015 -*/
    {                                          /*- mm 981015 -*/
        init_default_heap();                   /*- mm 981015 -*/
    }
    if (!initialized)                          /*- vss 990121 -*/
    {
        return (0);
    }
    block = __pool_alloc (__malloc_pool_ptr, size);
#else

    if (!initialized)
    {
        __init_pool_obj (&__malloc_pool);
        initialized = 1;
    }
    block = __pool_alloc (&__malloc_pool, size);
#endif                            /* _No_Alloc_OS_Support */

    __end_critical_region (malloc_pool_access);

    return (block);
}
void*
calloc (size_t nmemb, size_t size)
{
    void* block;

    __begin_critical_region (malloc_pool_access);

#ifndef _No_Alloc_OS_Support      /*- mm 981015 -*/
    if (!initialized)
    {
        __init_pool_obj (&__malloc_pool);
        initialized = 1;
    }
    block = __pool_alloc_clear (&__malloc_pool, nmemb * size);

#else                             /*- mm 981015 -*/
    if (!defaultheapinitialized) /*- mm 981015 -*/
    {                            /*- mm 981015 -*/
        init_default_heap();     /*- mm 981015 -*/
    } /*- mm 981015 -*/
    if (!initialized) /*- mm 981015 -*/
    {                 /*- mm 981015 -*/
        return (0);   /*- mm 981015 -*/
    } /*- mm 981015 -*/
    block = __pool_alloc_clear (__malloc_pool_ptr, nmemb * size); /*- mm 981015 -*/
#endif /* _No_Alloc_OS_Support */ /*- mm 981015 -*/

    __end_critical_region (malloc_pool_access);

    return (block);
}
void*
realloc (void* ptr, size_t size)
{
    void* block;

    __begin_critical_region (malloc_pool_access);

#ifndef _No_Alloc_OS_Support      /*- mm 981015 -*/
    if (!initialized)
    {
        __init_pool_obj (&__malloc_pool);
        initialized = 1;
    }

    block = __pool_realloc (&__malloc_pool, ptr, size);
#else                             /*- mm 981015 -*/
    if (!defaultheapinitialized)                                  /*- mm 981015 -*/
    {                                                             /*- mm 981015 -*/
        init_default_heap();                                      /*- mm 981015 -*/
    } /*- mm 981015 -*/
    if (!initialized) /*- mm 981015 -*/
    {                 /*- mm 981015 -*/
        return (0);   /*- mm 981015 -*/
    } /*- mm 981015 -*/
    block = __pool_realloc (__malloc_pool_ptr, ptr, size); /*- mm 981015 -*/
#endif /* _No_Alloc_OS_Support */ /*- mm 981015 -*/

    __end_critical_region (malloc_pool_access);

    return (block);
}
void
free (void* ptr)
{
    if (!initialized)
    {
        return;
    }

    __begin_critical_region (malloc_pool_access);

#ifndef _No_Alloc_OS_Support      /*- mm 981015 -*/
    __pool_free (&__malloc_pool, ptr);
#else                             /*- mm 981015 -*/
    __pool_free (__malloc_pool_ptr, ptr);                  /*- mm 981015 -*/
#endif /* _No_Alloc_OS_Support */ /*- mm 981015 -*/
    __end_critical_region (malloc_pool_access);
}
size_t
__msize (void* ptr)
{
    /* clear lower two bits to remove pool_alloc flags */
    return *((size_t*)ptr - 1) & ~0x03;
}
#if __ALTIVEC__
/*
 * AltiVec memory routines which deal with 16-byte aligned blocks
 *
 */

void* vec_malloc (size_t size);
void* vec_calloc (size_t nmemb, size_t size);
void* vec_realloc (void* ptr, size_t size);
void  vec_free (void* ptr);
void*
vec_malloc (size_t size)
{
    void* block;

    __begin_critical_region (malloc_pool_access);

    if (!vec_initialized)
    {
        __init_align_pool_obj (&__malloc_pool, 16);
        vec_initialized = 1;
    }

    block = __pool_alloc (&__malloc_pool, size);

    __end_critical_region (malloc_pool_access);

    return (block);
}
void*
vec_calloc (size_t nmemb, size_t size)
{
    void* block;

    __begin_critical_region (malloc_pool_access);

    if (!vec_initialized)
    {
        __init_align_pool_obj (&__malloc_pool, 16);
        vec_initialized = 1;
    }

    block = __pool_alloc_clear (&__malloc_pool, nmemb * size);

    __end_critical_region (malloc_pool_access);

    return (block);
}
void*
vec_realloc (void* ptr, size_t size)
{
    void* block;

    __begin_critical_region (malloc_pool_access);

    if (!vec_initialized)
    {
        __init_align_pool_obj (&__malloc_pool, 16);
        vec_initialized = 1;
    }

    block = __pool_realloc (&__malloc_pool, ptr, size);

    __end_critical_region (malloc_pool_access);

    return (block);
}
void
vec_free (void* ptr)
{
    if (!vec_initialized)
    {
        return;
    }

    __begin_critical_region (malloc_pool_access);

    __pool_free (&__malloc_pool, ptr);

    __end_critical_region (malloc_pool_access);
}
#endif                            /* __ALTIVEC__ */

/*#endif*/ /* __dest_os != __be_os */ /*- mm 970708 -*/ /*- cc 010326 -*/

/* Change record:
 * JFH 950320 First code release.
 * JFH 950609 Changed malloc_pool to __malloc_pool as per standard naming
 * conventions. mm  970708 Inserted Be changes MEA 970720 changed __no_os to
 * _No_Alloc_OS_Support and  __ppc_eabi_bare to __ppc_eabi. mm  970904 Added include
 * ansi_parms.h  to allow compilation without prefix mm  981015 Added code for
 * _No_Alloc_OS_Support and __DSP568 mm  981029 Changed __DSP568 to __m56800__ mf
 * 981115 fixed mm change of 981015 ad  990128 added nintendo support blc 990209
 * added __msize bobc990302 added vec_malloc (etc) for AltiVec vss 990624 add mcore
 * vss 990624 fixed typos in embedded platform code
 * as  990824 added SH
 * beb 990830 changed _heap_size and _heap_addr to be long vars
 * scm 991129 changed __heap_size and __heap_addr to be 'extern char []'
 * hh  000523 Added _MSL_OS_DIRECT_MALLOC implementation
 * mf  000707 ( & hh) misplaced #endif and added readability to #ifdefs
 * cc  000326 removed dest_os to be_os
 */

#elif !defined(_MSL_OS_DIRECT_MALLOC) && !defined(_MSL_PRO4_MALLOC)
#pragma mark -
#pragma mark CURRENT MALLOC
#pragma mark -

/*
 *	Routines
 *	--------
 *		init_alloc			Initialize allocs' memory pool to be fixed size and
 *location init_default_heap	initialize the default heap malloc Allocate memory
 *		calloc				Allocate and clear memory
 *		realloc
 *		free				Return memory block to allocs' memory pool
 *
 *
 */

#include <critical_regions.h>
#include <pool_alloc.h>
#ifndef __MIPS__
#include <inttypes.h>
#endif
#include <stdlib.h>
#include <string.h>

/*#define NDEBUG*/

#include <assert.h>
#ifndef NDEBUG
#include <stdio.h>
#endif

/* These flags are can be switched on/off in anis_prefix.XXX.h
//
//	#define _MSL_MALLOC_0_RETURNS_NON_NULL
//	#define _No_Alloc_OS_Support
*/
/*///////////////////////////////////////////
// Design choices and Platform configuration
////////////////////////////////////////////*/

#if __MIPS__
typedef size_t mem_size; /* must be same size as void* */
#define MAX_MEM_SIZE UINT_MAX
#else
typedef uintptr_t mem_size; /* must be same size as void* */
#define MAX_MEM_SIZE ULONG_MAX
#endif

#define WORD_SIZE 4               /* hack!  Must manually set to sizeof(mem_size) */

/*	These two consts describe how malloc goes to the OS for memory.  The shipping
//	configuration is that malloc will ask for at least 64Kb at a time from the OS
//	and if bigger sizes are requested, they will go to the OS in increments of 4Kb.
*/
static const mem_size sys_alloc_size = 65536; /* 64Kb */

/*	All returned memory will be aligned as indicated. */

#if __ALTIVEC__
#define alignment 16              /* valid = {4, 8, 16}, must be >= sizeof(void*) */
#elif __MIPS__
#define alignment __ALIGNMENT__
#else
#define alignment 8               /* valid = {4, 8, 16}, must be >= sizeof(void*) */
#endif

#define align_ratio (alignment / WORD_SIZE) /* Not configurable */

/*	For tiny allocations, fixed sized pools help significantly speed
allocation/deallocation.
//	You can reserve a pool for a small range of sizes.  The use of these pools can be
disabled
//	by commenting out _MSL_USE_FIX_MALLOC_POOLS.  Use of fixed size pools requires
further
//	configuration below.  The current shipping configuration is:
//  1. Each pool will handle approx. 4000 bytes worth of requests before asking for
more memory.
//	2. There are 4 pool types.  Each type is responsible for a different range of
requests:
//		a.  0 - 12 bytes
//		b. 13 - 20 bytes
//		c. 21 - 36 bytes
//		d. 37 - 68 bytes
//		Requests for greater than 68 bytes go to the variable size pools.
//	The number of types of pools is configurable below.  The range of requests for
each
//	type is also configurable.
*/
#define _MSL_USE_FIX_MALLOC_POOLS

#ifdef _MSL_USE_FIX_MALLOC_POOLS

static const mem_size fix_pool_alloc_size = 4096; /* Approx space for each pool. */
#if __ALTIVEC__ || __MIPS__
static const mem_size max_fix_pool_size =
    76; /* Need the highest poolsize elsewhere, so kludge it up like this */
static const mem_size fix_pool_sizes[] = {
    4, 12, 28, 44, 60, max_fix_pool_size
}; /* Client space for each pool */
#else
static const mem_size max_fix_pool_size =
    68; /* Need the highest poolsize elsewhere, so kludge it up like this */
static const mem_size fix_pool_sizes[] = {
    4, 12, 20, 36, 52, max_fix_pool_size
}; /* Client space for each pool */
#endif
/* Sizes must be compatible with align_ratio (there is no check).
// Allowed Size = (N * align_ratio - 1) * sizeof(void*)
// Assuming sizeof(void*) == 4, then Allowed Sizes include:
// align_ratio == 1 : {4,  8, 12, 16, 20, 24, ...}
// align_ratio == 2 : {4, 12, 20, 28, 36, 44, ...}
// align_ratio == 4 : {4, 12, 28, 44, 60, 76, ...}
// Assuming sizeof(void*) == 8, then Allowed Sizes include:
// align_ratio == 1 : {8, 16, 24, 32, 40, 48, ...}
// align_ratio == 2 : {8, 24, 40, 56, 72, 88, ...}
*/
static const mem_size num_fix_pools =
    sizeof (fix_pool_sizes) / sizeof (mem_size); /* Not configurable */
#endif
/*//////////////////////////////////////////////
// End Design choices and Platform configuration
///////////////////////////////////////////////*/

typedef struct Block
{
    struct Block* prev_;
    struct Block* next_;
#if align_ratio == 4
    mem_size reserve1_;
    mem_size reserve2_;
#endif
    mem_size max_size_;
    mem_size size_;
    /*	...                 // Client space here only
    //	mem_size size_;     // Block trailer starts here
    //	SubBlock* start_;
    */
} Block;
typedef struct SubBlock
{
    mem_size         size_;
    Block*           bp_;
    struct SubBlock* prev_; /* Client space starts here */
    struct SubBlock* next_;
    /*	...
    //	mem_size size_;   // SubBlock Trailer, only used when SubBlock is not
    allocated
                          // Client space end here */
} SubBlock;
#ifdef _MSL_USE_FIX_MALLOC_POOLS

struct FixSubBlock;
typedef struct FixBlock
{
    struct FixBlock*    prev_;
    struct FixBlock*    next_;
    mem_size            client_size_;
    struct FixSubBlock* start_;
    mem_size            n_allocated_;
#if align_ratio == 4
    mem_size reserve1_;
    mem_size reserve2_;
#endif
} FixBlock;
typedef struct FixSubBlock
{
    FixBlock*           block_;
    struct FixSubBlock* next_; /* Client space starts here */
} FixSubBlock;
typedef struct FixStart
{
    FixBlock* tail_;
    FixBlock* head_;
} FixStart;
#endif
typedef struct __mem_pool_obj
{
    Block* start_;
#ifdef _MSL_USE_FIX_MALLOC_POOLS
    FixStart fix_start[num_fix_pools];
#endif
} __mem_pool_obj;
static const mem_size Block_min_size = sys_alloc_size;
#if align_ratio == 4
static const mem_size Block_overhead = 8 * sizeof (mem_size);
static const mem_size Block_header_size = 6 * sizeof (mem_size);
#else
static const mem_size Block_overhead = 6 * sizeof (mem_size);
static const mem_size Block_header_size = 4 * sizeof (mem_size);
#endif
static const mem_size Block_trailer_size = 2 * sizeof (mem_size);

static void      Block_construct (Block* ths, mem_size size);
static SubBlock* Block_subBlock (Block* ths, mem_size size);
static void      Block_link (Block* ths, SubBlock* sb);
static void      Block_unlink (Block* ths, SubBlock* sb);
#ifndef NDEBUG
static void Block_report (Block* ths, int verbose);
#endif

static const mem_size SubBlock_overhead = 2 * sizeof (mem_size);
#ifdef _MSL_USE_FIX_MALLOC_POOLS
static const mem_size SubBlock_min_size =
    SubBlock_overhead + max_fix_pool_size + 1 + (alignment - 1) & ~(alignment - 1);
#else
static const mem_size SubBlock_min_size =
    SubBlock_overhead + 3 * sizeof (mem_size) + (alignment - 1) & ~(alignment - 1);
#endif
static const mem_size SubBlock_header_size = SubBlock_overhead;

static void SubBlock_construct (
    SubBlock* ths, mem_size size, Block* bp, int prev_alloc, int this_alloc);
static SubBlock* SubBlock_split (SubBlock* ths, mem_size size);
static SubBlock* SubBlock_merge_prev (SubBlock* ths, SubBlock** start);
static void      SubBlock_merge_next (SubBlock* ths, SubBlock** start);
#ifndef NDEBUG
static void SubBlock_report (SubBlock* ths, int verbose);
#endif

/* Inline Utilities */

/* Note, there is a bit of information currently unused when alignment == 16 (0x80)
 */

#if WORD_SIZE == 4
#if alignment == 4
#define size_flag 0x7FFFFFFC
#elif alignment == 8
#define size_flag 0xFFFFFFF8
#elif alignment == 16
#define size_flag 0xFFFFFFF0
#else
#error Unsupported Alignment
#endif
#elif WORD_SIZE == 8
#if alignment == 8
#define size_flag 0xFFFFFFFFFFFFFFF8
#elif alignment == 16
#define size_flag 0xFFFFFFFFFFFFFFF0
#else
#error Unsupported Alignment
#endif
#else
#error Unsupported word size in alloc.c
#endif

#define fix_var_flag    0x01

#define this_alloc_flag 0x02

#if alignment == 4
#define prev_alloc_flag 0x40000000
#else
#define prev_alloc_flag 0x04
#endif

#define align(size, algn) (size + (algn - 1) & ~(algn - 1))

#ifdef _MSL_USE_FIX_MALLOC_POOLS

/* return true for SubBlock, false for FixSubBlock */
#define classify(ptr) (*(mem_size*)((char*)(ptr) - sizeof (mem_size)) & fix_var_flag)

#endif

/* SubBlock inlines */

#define SubBlock_size(ths)         ((ths)->size_ & size_flag)

#define SubBlock_block(ths)        ((Block*)((mem_size)((ths)->bp_) & ~fix_var_flag))

#define SubBlock_client_space(ths) ((char*)(ths) + SubBlock_header_size)

#define SubBlock_set_free(ths)                                                      \
    mem_size this_size = SubBlock_size ((ths));                                     \
    (ths)->size_ &= ~this_alloc_flag;                                               \
    *(mem_size*)((char*)(ths) + this_size) &= ~prev_alloc_flag;                     \
    *(mem_size*)((char*)(ths) + this_size - sizeof (mem_size)) = this_size

#define SubBlock_set_not_free(ths)                                                  \
    mem_size this_size = SubBlock_size ((ths));                                     \
    (ths)->size_ |= this_alloc_flag;                                                \
    *(mem_size*)((char*)(ths) + this_size) |= prev_alloc_flag

#define SubBlock_is_free(ths) !((ths)->size_ & this_alloc_flag)

#define SubBlock_set_size(ths, sz)                                                  \
    (ths)->size_ &= ~size_flag;                                                     \
    (ths)->size_ |= (sz) & size_flag;                                               \
    if (SubBlock_is_free ((ths)))                                                   \
    *(mem_size*)((char*)(ths) + (sz) - sizeof (mem_size)) = (sz)

#define SubBlock_from_pointer(ptr)   ((SubBlock*)((char*)(ptr) - SubBlock_header_size))

/* Block inlines */

#define Block_max_possible_size(ths) ((ths)->max_size_)

#define Block_size(ths)              ((ths)->size_ & size_flag)

#define Block_start(ths)                                                            \
    (*(SubBlock**)((char*)(ths) + Block_size ((ths)) - sizeof (mem_size)))

#define Block_empty(ths)                                                            \
    (_sb = (SubBlock*)((char*)(ths) + Block_header_size)),                          \
        SubBlock_is_free (_sb) &&                                                   \
            SubBlock_size (_sb) == Block_size ((ths)) - Block_overhead
/* Block Implementation */

static void
Block_construct (Block* ths, mem_size size)
{
    SubBlock* sb;

    ths->size_ = size | this_alloc_flag | fix_var_flag;
    *(mem_size*)((char*)ths + size - Block_trailer_size) = ths->size_;
    sb = (SubBlock*)((char*)ths + Block_header_size);
    SubBlock_construct (sb, size - Block_overhead, ths, 0, 0);
    ths->max_size_ = size - Block_overhead;
    Block_start (ths) = 0;
    Block_link (ths, sb);
}
static SubBlock*
Block_subBlock (Block* ths, mem_size size)
{
    SubBlock* st;
    SubBlock* sb;
    mem_size  sb_size;
    mem_size  max_found;

    st = Block_start (ths);
    if (st == 0)
    {
        return 0;
    }
    sb = st;
    sb_size = SubBlock_size (sb);
    max_found = sb_size;
    while (sb_size < size)
    {
        sb = sb->next_;
        sb_size = SubBlock_size (sb);
        if (max_found < sb_size)
        {
            max_found = sb_size;
        }
        if (sb == st)
        {
            ths->max_size_ = max_found;
            return 0;
        }
    }
    if (sb_size - size >= SubBlock_min_size)
    {
        SubBlock_split (sb, size);
    }
    Block_start (ths) = sb->next_;
    Block_unlink (ths, sb);
    return sb;
}
static void
Block_link (Block* ths, SubBlock* sb)
{
    SubBlock** st;

    SubBlock_set_free (sb);
    st = &Block_start (ths);
    if (*st != 0)
    {
        sb->prev_ = (*st)->prev_;
        sb->prev_->next_ = sb;
        sb->next_ = *st;
        (*st)->prev_ = sb;
        *st = sb;
        *st = SubBlock_merge_prev (*st, st);
        SubBlock_merge_next (*st, st);
    }
    else
    {
        *st = sb;
        sb->prev_ = sb;
        sb->next_ = sb;
    }
    if (ths->max_size_ < SubBlock_size (*st))
    {
        ths->max_size_ = SubBlock_size (*st);
    }
}
static void
Block_unlink (Block* ths, SubBlock* sb)
{
    SubBlock** st;

    SubBlock_set_not_free (sb);
    st = &Block_start (ths);
    if (*st == sb)
    {
        *st = sb->next_;
    }
    if (*st == sb)
    {
        *st = 0;
        ths->max_size_ = 0;
    }
    else
    {
        sb->next_->prev_ = sb->prev_;
        sb->prev_->next_ = sb->next_;
    }
}
#ifndef NDEBUG
static void
Block_report (Block* ths, int verbose)
{
    SubBlock* st;
    SubBlock* end;
    int       i;
    int       prev_free;
    SubBlock* sb;

    st = (SubBlock*)((char*)ths + Block_header_size);
    end = (SubBlock*)((char*)ths + Block_size (ths) - Block_trailer_size);
    i = 1;
    if (verbose)
    {
        printf ("\tsize_ = %d, max_size = %d\n",
                Block_size (ths),
                Block_max_possible_size (ths));
    }
    if (Block_size (ths) > 1042 * 1024)
    {
        printf ("\t**ERROR** Block size suspiciously large %d\n", Block_size (ths));
        exit (1);
    }
    prev_free = 0;
    do {
        if (SubBlock_is_free (st))
        {
            if (verbose)
            {
                printf ("\tSubBlock %d at %p\n", i, st);
            }
            if (prev_free)
            {
                printf ("\t**ERROR** SubBlock failed to merge with previous\n");
                exit (1);
            }
            SubBlock_report (st, verbose);
            prev_free = 1;
        }
        else
        {
            SubBlock_report (st, verbose);
            prev_free = 0;
        }
        st = (SubBlock*)((char*)st + SubBlock_size (st));
        ++i;
    }
    while (st != end);
    sb = Block_start (ths);
    if (sb != 0)
    {
        do {
            if (SubBlock_size (sb) > 1042 * 1024)
            {
                printf ("\t**ERROR** SubBlock size suspiciously large %d\n",
                        SubBlock_size (sb));
                exit (1);
            }
            sb = sb->next_;
        }
        while (sb != Block_start (ths));
        sb = Block_start (ths);
        do {
            if (SubBlock_size (sb) > 1042 * 1024)
            {
                printf ("\t**ERROR** SubBlock size suspiciously large %d\n",
                        SubBlock_size (sb));
                exit (1);
            }
            sb = sb->prev_;
        }
        while (sb != Block_start (ths));
    }
}
#endif                                      /* NDEBUG */
/* SubBlock Implementation */

static void
SubBlock_construct (
    SubBlock* ths, mem_size size, Block* bp, int prev_alloc, int this_alloc)
{
    ths->bp_ = (Block*)((mem_size)bp | fix_var_flag);
    ths->size_ = size;
    if (prev_alloc)
    {
        ths->size_ |= prev_alloc_flag;
    }
    if (this_alloc)
    {
        ths->size_ |= this_alloc_flag;
        *(mem_size*)((char*)ths + size) |= prev_alloc_flag;
    }
    else
    {
        *(mem_size*)((char*)ths + size - sizeof (mem_size)) = size;
    }
}
static SubBlock*
SubBlock_split (SubBlock* ths, mem_size sz)
{
    mem_size  origsize;
    int       isfree;
    int       isprevalloc;
    SubBlock* np;
    Block*    bp;

    origsize = SubBlock_size (ths);
    isfree = SubBlock_is_free (ths);
    isprevalloc = (int)(ths->size_ & prev_alloc_flag);
    np = (SubBlock*)((char*)ths + sz);
    bp = SubBlock_block (ths);

    SubBlock_construct (ths, sz, bp, isprevalloc, !isfree);
    SubBlock_construct (np, origsize - sz, bp, !isfree, !isfree);
    if (isfree)
    {
        np->next_ = ths->next_;
        np->next_->prev_ = np;
        np->prev_ = ths;
        ths->next_ = np;
    }
    return np;
}
static SubBlock*
SubBlock_merge_prev (SubBlock* ths, SubBlock** start)
{
    mem_size  prevsz;
    SubBlock* p;

    if (!(ths->size_ & prev_alloc_flag))
    {
        prevsz = *(mem_size*)((char*)ths - sizeof (mem_size));
        if (prevsz & this_alloc_flag) /* Is it the block header? */
        {
            return ths;
        }
        p = (SubBlock*)((char*)ths - prevsz);
        SubBlock_set_size (p, prevsz + SubBlock_size (ths));
        /* unlink ths */
        if (*start == ths)
        {
            *start = (*start)->next_;
        }
        ths->next_->prev_ = ths->prev_;
        ths->next_->prev_->next_ = ths->next_;
        return p;
    }
    return ths;
}
static void
SubBlock_merge_next (SubBlock* ths, SubBlock** start)
{
    SubBlock* next_sub;
    mem_size  this_size;

    next_sub = (SubBlock*)((char*)ths + SubBlock_size (ths));
    if (SubBlock_is_free (next_sub))
    {
        this_size = SubBlock_size (ths) + SubBlock_size (next_sub);
        SubBlock_set_size (ths, this_size);
        if (SubBlock_is_free (ths))
        {
            *(mem_size*)((char*)ths + this_size) &= ~prev_alloc_flag;
        }
        else
        {
            *(mem_size*)((char*)ths + this_size) |= prev_alloc_flag;
        }
        /* unlink next_sub */
        if (*start == next_sub)
        {
            *start = (*start)->next_;
        }
        if (*start == next_sub)
        {
            *start = 0;
        }
        next_sub->next_->prev_ = next_sub->prev_;
        next_sub->prev_->next_ = next_sub->next_;
    }
}
#ifndef NDEBUG
static void
SubBlock_report (SubBlock* ths, int verbose)
{
    if (verbose)
    {
        printf (
            "\t\tsize_ = %d, bp_ = %p\n", SubBlock_size (ths), SubBlock_block (ths));
    }
    if (SubBlock_size (ths) > 1042 * 1024)
    {
        printf ("\t**ERROR** SubBlock size suspiciously large %d\n",
                SubBlock_size (ths));
        exit (1);
    }
}
#endif
static void
link (__mem_pool_obj* pool_obj, Block* bp)
{
    if (pool_obj->start_ != 0)
    {
        bp->prev_ = pool_obj->start_->prev_;
        bp->prev_->next_ = bp;
        bp->next_ = pool_obj->start_;
        pool_obj->start_->prev_ = bp;
        pool_obj->start_ = bp;
    }
    else
    {
        pool_obj->start_ = bp;
        bp->prev_ = bp;
        bp->next_ = bp;
    }
}
static Block*
__unlink (__mem_pool_obj* pool_obj, Block* bp)
{
    Block* result = bp->next_;
    if (result == bp)
    {
        result = 0;
    }
    if (pool_obj->start_ == bp)
    {
        pool_obj->start_ = result;
    }
    if (result != 0)
    {
        result->prev_ = bp->prev_;
        result->prev_->next_ = result;
    }
    bp->next_ = 0;
    bp->prev_ = 0;
    return result;
}
static Block*
link_new_block (__mem_pool_obj* pool_obj, mem_size size)
{
    Block* bp;

    size += Block_overhead;
    size = align (size, alignment);
    if (size < Block_min_size)
    {
        size = Block_min_size;
    }
    bp = (Block*)__sys_alloc (size);
    if (bp == 0)
    {
        return 0;
    }
    Block_construct (bp, size);
    link (pool_obj, bp);
    return bp;
}
static void*
allocate_from_var_pools (__mem_pool_obj* pool_obj, mem_size size)
{
    Block*    bp;
    SubBlock* ptr;

    size += SubBlock_overhead;
    size = align (size, alignment);
    if (size < SubBlock_min_size)
    {
        size = SubBlock_min_size;
    }
    bp = pool_obj->start_ != 0 ? pool_obj->start_ : link_new_block (pool_obj, size);
    if (bp == 0)
    {
        return 0;
    }
    do {
        if (size <= Block_max_possible_size (bp))
        {
            ptr = Block_subBlock (bp, size);
            if (ptr != 0)
            {
                pool_obj->start_ = bp;
                break;
            }
        }
        bp = bp->next_;
        if (bp == pool_obj->start_)
        {
            bp = link_new_block (pool_obj, size);
            if (bp == 0)
            {
                return 0;
            }
            ptr = Block_subBlock (bp, size);
            break;
        }
    }
    while (1);
    return SubBlock_client_space (ptr);
}
static void*
soft_allocate_from_var_pools (__mem_pool_obj* pool_obj,
                              mem_size        size,
                              mem_size*       max_size)
{
    Block*    bp;
    SubBlock* ptr;

    size += SubBlock_overhead;
    size = align (size, alignment);
    if (size < SubBlock_min_size)
    {
        size = SubBlock_min_size;
    }
    *max_size = 0;
    bp = pool_obj->start_;
    if (bp == 0)
    {
        return 0;
    }
    do {
        if (size <= Block_max_possible_size (bp))
        {
            ptr = Block_subBlock (bp, size);
            if (ptr != 0)
            {
                pool_obj->start_ = bp;
                break;
            }
        }
        if (Block_max_possible_size (bp) > SubBlock_overhead &&
            *max_size < Block_max_possible_size (bp) - SubBlock_overhead)
        {
            *max_size = Block_max_possible_size (bp) - SubBlock_overhead;
        }
        bp = bp->next_;
        if (bp == pool_obj->start_)
        {
            return 0;
        }
    }
    while (1);
    return SubBlock_client_space (ptr);
}
static void
deallocate_from_var_pools (__mem_pool_obj* pool_obj, void* ptr)
{
    SubBlock* sb = SubBlock_from_pointer (ptr);
#ifndef _No_Alloc_OS_Support
    SubBlock* _sb;
#endif
    Block* bp = SubBlock_block (sb);
    Block_link (bp, sb);
#ifndef _No_Alloc_OS_Support
    if (Block_empty (bp))
    {
        __unlink (pool_obj, bp);
        __sys_free (bp);
    }
#else
    pool_obj;
#endif
}
#ifdef _MSL_USE_FIX_MALLOC_POOLS

static const mem_size FixBlock_overhead = sizeof (FixBlock);
static const mem_size FixBlock_header_size = FixBlock_overhead;

static void FixBlock_construct (FixBlock*    ths,
                                FixBlock*    prev,
                                FixBlock*    next,
                                mem_size     index,
                                FixSubBlock* chunk,
                                mem_size     chunk_size);

static const mem_size FixSubBlock_overhead = sizeof (mem_size);
static const mem_size FixSubBlock_header_size = FixSubBlock_overhead;

/* FixBlock Implementation */

#define FixBlock_client_size(ths) ((ths)->client_size_)

/* FixSubBlock Implementation */

#define FixSubBlock_construct(ths, block, next)                                     \
    (((FixSubBlock*)(ths))->block_ = block, ((FixSubBlock*)(ths))->next_ = next)

#define FixSubBlock_client_space(ths) ((char*)(ths) + FixSubBlock_header_size)

#define FixSubBlock_size(ths)         (FixBlock_client_size ((ths)->block_))

#define FixSubBlock_from_pointer(ptr)                                               \
    ((FixSubBlock*)((char*)(ptr) - FixSubBlock_header_size))
/* FixBlock Implementation */

static void
FixBlock_construct (FixBlock*    ths,
                    FixBlock*    prev,
                    FixBlock*    next,
                    mem_size     index,
                    FixSubBlock* chunk,
                    mem_size     chunk_size)
{
    mem_size fixSubBlock_size;
    mem_size n;
    char*    p;
    mem_size i;
    char*    np;

    ths->prev_ = prev;
    ths->next_ = next;
    prev->next_ = ths;
    next->prev_ = ths;
    ths->client_size_ = fix_pool_sizes[index];
    fixSubBlock_size = fix_pool_sizes[index] + FixSubBlock_overhead;
    n = chunk_size / fixSubBlock_size;
    p = (char*)chunk;
    for (i = 0; i < n - 1; ++i)
    {
        np = p + fixSubBlock_size;
        FixSubBlock_construct (p, ths, (FixSubBlock*)np);
        p = np;
    }
    FixSubBlock_construct (p, ths, 0);
    ths->start_ = chunk;
    ths->n_allocated_ = 0;
}
#endif                                      /* _MSL_USE_FIX_MALLOC_POOLS */
void
__init_pool_obj (__mem_pool* pool_obj)
{
    assert (sizeof (__mem_pool) >= sizeof (__mem_pool_obj));
    memset (pool_obj, 0, sizeof (__mem_pool_obj));
}
static __mem_pool*
get_malloc_pool ()
{
    static __mem_pool    protopool;
    static unsigned char init = 0;
    if (!init)
    {
        __init_pool_obj (&protopool);
        init = 1;
    }
    return &protopool;
}
#ifdef _MSL_USE_FIX_MALLOC_POOLS
#define __msize_inline(ptr)                                                         \
    (!classify (ptr)                                                                \
         ? FixSubBlock_size (FixSubBlock_from_pointer (ptr))                        \
         : SubBlock_size (SubBlock_from_pointer (ptr)) - SubBlock_overhead)
#else
#define __msize_inline(ptr)                                                         \
    (SubBlock_size (SubBlock_from_pointer (ptr)) - SubBlock_overhead)
#endif

#ifdef _MSL_USE_FIX_MALLOC_POOLS

void* allocate_from_fixed_pools (__mem_pool_obj*, mem_size);
void*
allocate_from_fixed_pools (__mem_pool_obj* pool_obj, mem_size size)
{
    mem_size     i = 0;
    FixSubBlock* p;
    FixStart*    fs;

    while (size > fix_pool_sizes[i])
    {
        ++i;
    }
    fs = &pool_obj->fix_start[i];
    if (fs->head_ == 0 || fs->head_->start_ == 0)
    {
        mem_size size_requested = fix_pool_alloc_size;
        char*    newblock;
        mem_size size_received;
        mem_size n, nsave, size_has;

        n = (size_requested - FixBlock_overhead) /
            (fix_pool_sizes[i] + FixSubBlock_overhead);
        if (n > 256)
        {
            n = 256;
        }
        nsave = n;
        while (n >= 10)
        {
            size_requested =
                n * (fix_pool_sizes[i] + FixSubBlock_overhead) + FixBlock_overhead;
            newblock = (char*)soft_allocate_from_var_pools (
                pool_obj, size_requested, &size_has);
            if (newblock != 0)
            {
                break;
            }
            if (size_has > FixBlock_overhead)
            {
                n = (size_has - FixBlock_overhead) /
                    (fix_pool_sizes[i] + FixSubBlock_overhead);
            }
            else
            {
                n = 0;
            }
        }
        if (newblock == 0 && n < nsave)
        {
            n = nsave;
            size_requested =
                n * (fix_pool_sizes[i] + FixSubBlock_overhead) + FixBlock_overhead;
            newblock = (char*)allocate_from_var_pools (pool_obj, size_requested);
            if (newblock == 0)
            {
                return 0;
            }
        }
        size_received = __msize_inline (newblock);
        if (fs->head_ == 0)
        {
            fs->head_ = (FixBlock*)newblock;
            fs->tail_ = (FixBlock*)newblock;
        }
        FixBlock_construct ((FixBlock*)newblock,
                            fs->tail_,
                            fs->head_,
                            i,
                            (FixSubBlock*)(newblock + FixBlock_overhead),
                            size_received - FixBlock_overhead);
        fs->head_ = (FixBlock*)newblock;
    }
    p = fs->head_->start_;
    fs->head_->start_ = p->next_;
    ++fs->head_->n_allocated_;
    if (fs->head_->start_ == 0)
    {
        fs->head_ = fs->head_->next_;
        fs->tail_ = fs->tail_->next_;
    }
    return FixSubBlock_client_space (p);
}
void deallocate_from_fixed_pools (__mem_pool_obj*, void*, mem_size);
void
deallocate_from_fixed_pools (__mem_pool_obj* pool_obj, void* ptr, mem_size size)
{
    mem_size     i = 0;
    FixSubBlock* p;
    FixBlock*    b;
    FixStart*    fs;

    while (size > fix_pool_sizes[i])
    {
        ++i;
    }
    fs = &pool_obj->fix_start[i];
    p = FixSubBlock_from_pointer (ptr);
    b = p->block_;
    if (b->start_ == 0 && fs->head_ != b)
    {
        if (fs->tail_ == b)
        {
            fs->head_ = fs->head_->prev_;
            fs->tail_ = fs->tail_->prev_;
        }
        else
        {
            b->prev_->next_ = b->next_;
            b->next_->prev_ = b->prev_;
            b->next_ = fs->head_;
            b->prev_ = b->next_->prev_;
            b->prev_->next_ = b;
            b->next_->prev_ = b;
            fs->head_ = b;
        }
    }
    p->next_ = b->start_;
    b->start_ = p;
    if (--b->n_allocated_ == 0)
    {
        if (fs->head_ == b)
        {
            fs->head_ = b->next_;
        }
        if (fs->tail_ == b)
        {
            fs->tail_ = b->prev_;
        }
        b->prev_->next_ = b->next_;
        b->next_->prev_ = b->prev_;
        if (fs->head_ == b)
        {
            fs->head_ = 0;
        }
        if (fs->tail_ == b)
        {
            fs->tail_ = 0;
        }
        deallocate_from_var_pools (pool_obj, b);
    }
}
#endif

#ifndef NDEBUG

void __report_on_pool_heap (__mem_pool_obj* pool_obj, int verbose);
void
__report_on_pool_heap (__mem_pool_obj* pool_obj, int verbose)
{
    Block* bp;
    int    i;

    if (verbose)
    {
        printf ("\n-------------------------\n");
    }
    bp = pool_obj->start_;
    if (bp == 0)
    {
        if (verbose)
        {
            printf ("\nNothing to report\n");
        }
        return;
    }
    i = 1;
    do {
        if (verbose)
        {
            printf ("\nBlock %d at %p\n", i, bp);
        }
        Block_report (bp, verbose);
        bp = bp->next_;
        ++i;
    }
    while (bp != pool_obj->start_);
}
void __report_on_heap (int verbose);
void
__report_on_heap (int verbose)
{
    __report_on_pool_heap ((__mem_pool_obj*)get_malloc_pool(), verbose);
}
#endif                                      /* NDEBUG */
size_t
__msize (void* ptr)
{
#ifdef _MSL_USE_FIX_MALLOC_POOLS
    if (!classify (ptr))
    {
        return FixSubBlock_size (FixSubBlock_from_pointer (ptr));
    }
#endif
    return SubBlock_size (SubBlock_from_pointer (ptr)) - SubBlock_overhead;
}
#ifndef __MALLOC
#define __MALLOC malloc
#endif

#ifndef __REALLOC
#define __REALLOC realloc
#endif

#ifndef __CALLOC
#define __CALLOC calloc
#endif

#ifndef __FREE
#define __FREE free
#endif

#ifdef _No_Alloc_OS_Support
static int defaultheapinitialized = 0;
void       init_default_heap (void);
#endif
void*
__pool_alloc (__mem_pool* pool, size_t size)
{
    void*           result;
    __mem_pool_obj* pool_obj;

    assert (sizeof (mem_size) == sizeof (void*));
    assert (align_ratio >= 1);
    assert (sizeof (__mem_pool) >= sizeof (__mem_pool_obj));

    if (size == 0)
#ifdef _MSL_MALLOC_0_RETURNS_NON_NULL
        ++size;
#else
        return 0;
#endif
    if (size >
        MAX_MEM_SIZE - (alignment + SubBlock_overhead + Block_overhead + alignment))
    {
        return 0;
    }
#ifdef _No_Alloc_OS_Support
    if (!defaultheapinitialized)
    {
        init_default_heap();
    }
#endif
    pool_obj = (__mem_pool_obj*)pool;
#ifdef _MSL_USE_FIX_MALLOC_POOLS
    if (size <= max_fix_pool_size)
    {
        result = allocate_from_fixed_pools (pool_obj, size);
    }
    else
#endif
        result = allocate_from_var_pools (pool_obj, size);
    return result;
}
void
__pool_free (__mem_pool* pool, void* ptr)
{
    __mem_pool_obj* pool_obj;
#ifdef _MSL_USE_FIX_MALLOC_POOLS
    mem_size size;
#endif

    if (ptr == 0)
    {
        return;
    }
    pool_obj = (__mem_pool_obj*)pool;
#ifdef _MSL_USE_FIX_MALLOC_POOLS
    size = __msize_inline (ptr);
    if (size <= max_fix_pool_size)
    {
        deallocate_from_fixed_pools (pool_obj, ptr, size);
    }
    else
#endif
        deallocate_from_var_pools (pool_obj, ptr);
}
void*
__pool_realloc (__mem_pool* pool, void* ptr, size_t size)
{
    __mem_pool_obj* pool_obj;
    mem_size        current_size;
    mem_size        sz;
    SubBlock*       sb;
    void*           newptr;

    pool_obj = (__mem_pool_obj*)pool;
    if (ptr == 0)
    {
        return __pool_alloc (pool, size);
    }
    if (size == 0)
    {
        __pool_free (pool, ptr);
        return 0;
    }
    current_size = __msize_inline (ptr);
    if (size > current_size)
    {
#ifdef _MSL_USE_FIX_MALLOC_POOLS
        if (classify (ptr)) /* is var_block */
        {
#endif
            if (size > MAX_MEM_SIZE - (alignment + SubBlock_overhead +
                                       Block_overhead + alignment))
            {
                return 0;
            }
            sz = size + SubBlock_overhead;
            sz = align (sz, alignment);
            if (sz < SubBlock_min_size)
            {
                sz = SubBlock_min_size;
            }
            sb = SubBlock_from_pointer (ptr);
            SubBlock_merge_next (sb, &Block_start (SubBlock_block (sb)));
            if (SubBlock_size (sb) >= sz)
            {
                if (SubBlock_size (sb) - sz >= SubBlock_min_size)
                {
                    Block_link (SubBlock_block (sb), SubBlock_split (sb, sz));
                }
                return ptr;
            }
#ifdef _MSL_USE_FIX_MALLOC_POOLS
        }
#endif
        newptr = __pool_alloc (pool, size);
        if (newptr == 0)
        {
            return 0;
        }
        memcpy (newptr, ptr, current_size);
        __pool_free (pool, ptr);
        return newptr;
    }
#ifdef _MSL_USE_FIX_MALLOC_POOLS
    if (classify (ptr))     /* is var_block */
    {
#endif
        size += SubBlock_overhead;
        size = align (size, alignment);
        if (size < SubBlock_min_size)
        {
            size = SubBlock_min_size;
        }
        sb = SubBlock_from_pointer (ptr);
        if (SubBlock_size (sb) - size >= SubBlock_min_size)
        {
            Block_link (SubBlock_block (sb), SubBlock_split (sb, size));
        }
#ifdef _MSL_USE_FIX_MALLOC_POOLS
    }
#endif
    return ptr;
}
void*
__pool_alloc_clear (__mem_pool* pool, size_t size)
{
    void* result = __pool_alloc (pool, size);
    if (result != 0)
    {
        memset (result, 0, size);
    }
    return result;
}
void*
__MALLOC (size_t size)
{
    void* result;
    __begin_critical_region (malloc_pool_access);
    result = __pool_alloc (get_malloc_pool(), size);
    __end_critical_region (malloc_pool_access);
    return result;
}
void
__FREE (void* ptr)
{
    __begin_critical_region (malloc_pool_access);
    __pool_free (get_malloc_pool(), ptr);
    __end_critical_region (malloc_pool_access);
}
void*
__REALLOC (void* ptr, size_t size)
{
    void* result;
    __begin_critical_region (malloc_pool_access);
    result = __pool_realloc (get_malloc_pool(), ptr, size);
    __end_critical_region (malloc_pool_access);
    return result;
}
void*
__CALLOC (size_t nmemb, size_t size)
{
    void* result;
    __begin_critical_region (malloc_pool_access);
    result = __pool_alloc_clear (get_malloc_pool(), size * nmemb);
    __end_critical_region (malloc_pool_access);
    return result;
}
#ifndef _No_Alloc_OS_Support
void
__pool_free_all (__mem_pool* pool)
{
    __mem_pool_obj* pool_obj = (__mem_pool_obj*)pool;
    Block*          bp = pool_obj->start_;
    Block*          bpn;

    if (bp == 0)
    {
        return;
    }
    do {
        bpn = bp->next_;
        __sys_free (bp);
        bp = bpn;
    }
    while (bp != pool_obj->start_);
    __init_pool_obj (pool);
}
void
__malloc_free_all ()
{
    __pool_free_all (get_malloc_pool());
}
#endif                                      /* _No_Alloc_OS_Support */

#ifdef _No_Alloc_OS_Support
/***************************************************************************
 *	init_alloc
 *		Initializes the memory pool that malloc uses. This call is designed to
 *		be used for systems that DO NOT have memory allocation functions
 *  	built into the system. The first call will define the pool and use the
 *		rest of the space as a block of memory. Subsequent calls will add the
 *		memory as another block of memory to the malloc's existing pool. Once
 *		a heap of memory is allocated to the malloc memory pool, it can not
 *		be returned.
 *
 *	Inputs:
 *		pool_ptr		pointer to memory to be used in malloc's memory pool
 *		size				size of memory to be used in (or added to) malloc's
 *memory pool
 *
 *	Outputs:
 *		None
 *
 *	Returns: int
 *		0		Fail
 *		1		Success: Memory initialized as malloc's memory pool
 *		2		Success: Memory added to initial heap successfully
 *
 *  NOTE:
 *		This function must be called prior to using other alloc.c functions
 *
 ***************************************************************************/
int
init_alloc (void* heap_ptr, size_t heap_size)
{
    mem_size        size;
    Block*          bp;
    int             result;
    __mem_pool_obj* pool_obj;

    assert ((mem_size)heap_ptr % alignment == 0);

    if (heap_ptr == 0)
    {
        return 0;
    }
    size = align (heap_size, alignment);
    if (size > heap_size)
    {
        size -= alignment;
    }
    if (size < Block_overhead + SubBlock_min_size)
    {
        return 0;
    }
    __begin_critical_region (malloc_pool_access);
    pool_obj = (__mem_pool_obj*)get_malloc_pool();
    result = pool_obj->start_ == 0 ? 1 : 2;
    bp = (Block*)heap_ptr;
    Block_construct (bp, size);
    link (pool_obj, bp);
    __end_critical_region (malloc_pool_access);
    return result;
}
#if __dest_os == __ppc_eabi || __dest_os == __dolphin_os

__declspec (section
            ".init") extern char _heap_addr[]; /* starting address for heap */
__declspec (section
            ".init") extern char _heap_end[];  /* address after end byte of heap */

#elif __dest_os == __nec_eabi_bare || __dest_os == __emb_68k ||                     \
    __dest_os == __mcore_bare || __dest_os == __sh_bare

extern char __heap_size[]; /* size of the stack (Linker pref panel) */
extern char __heap_addr[]; /* starting address for heap */

#elif __dest_os == __m56800_os || __dest_os == __m56800E_os

extern unsigned int _heap_size; /* size of the stack (DSP pref panel) */
extern unsigned int _heap_addr; /* starting address for heap */
extern unsigned int _heap_end;  /* starting address for heap */

#elif __dest_os == __mips_bare
extern char _heap_addr[]; /* starting address for heap */
extern char _heap_end[];  /* address after end byte of heap */

#elif __dest_os == __n64_os                 /* ad 01.28.99, added nintendo support */
extern char _heap_addr[];
extern char _heap_end[];

#else
extern char _heap_addr[];
extern char _heap_end[];
/*		#error */
#endif                                      /* __dest_os	== __ppc_eabi */
void
init_default_heap (void)
{
    defaultheapinitialized = 1;
#if (__dest_os == __mcore_bare) || (__dest_os == __nec_eabi_bare) ||                \
    (__dest_os == __emb_68k) || (__dest_os == __sh_bare)
    if (__heap_size != 0)
    {
        init_alloc ((void*)__heap_addr, (size_t)__heap_size);
    }
#else
    if (_heap_end - _heap_addr != 0)
    {
        init_alloc ((void*)_heap_addr, (_heap_end - _heap_addr));
    }
#endif
}
void*
__sys_alloc (size_t x)
{
#pragma unused(x)
    return 0;
}
#endif                                      /* _No_Alloc_OS_Support */

#if __ALTIVEC__

void* vec_malloc (size_t size);
void* vec_calloc (size_t nmemb, size_t size);
void* vec_realloc (void* ptr, size_t size);
void  vec_free (void* ptr);
void*
vec_malloc (size_t size)
{
    return malloc (size);
}
void*
vec_calloc (size_t nmemb, size_t size)
{
    return calloc (nmemb, size);
}
void*
vec_realloc (void* ptr, size_t size)
{
    return realloc (ptr, size);
}
void
vec_free (void* ptr)
{
    free (ptr);
}
#endif                                      /* __ALTIVEC__ */

/*     Change record
 *	20-Mar-95 JFH  First code release.
 *  09-Jun-95 JFH  Changed malloc_pool to __malloc_pool as per standard naming
 *conventions. mm 970708  Inserted Be changes 20-Jul-97 MEA  changed __no_os to
 *_No_Alloc_OS_Support and  __ppc_eabi_bare to __ppc_eabi. mm 970904  Added include
 *ansi_parms.h  to allow compilation without prefix mm 981015  Added code for
 *_No_Alloc_OS_Support and __DSP568 mm 981029  Changed __DSP568 to __m56800__ mf
 *981115  fixed mm change of 981015 blc 990209 added __msize hh 990227 rewrote in an
 *effort to make faster. hh 990504 Added configuration for MIPS in several places hh
 *010424 Modified malloc system to handle multiple pools
 */

#elif 0

} //  make the ide #pragma mark happy

#endif
