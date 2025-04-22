/***************************************************************************/
/*

FILE
    __ppc_eabi_init.cpp

DESCRIPTION

    Use this file for C or C++.  Contains calls to initialize memory pools
    for use with malloc/free, exceptions and static initializers.  If your
    project does not use exceptions, then the initialization code for them
    is stripped out.  If they are used, the linker will add them
    automatically.  A C-only program will be a little smaller (160 bytes)
    with __ppc_eabi_init.c.

    Interface for board-level initialization and user-level initialization.

    If hardware initialization and pre-main user initialization are required,
    copy this file to your project directory and customize it (instead of
    customizing __start.c).

    Note that __init_hardware should not write on the stack until the
    memory controller is properly configured.


    void __init_hardware(void)

        Initialize the hardware, including the memory controller.

    void __init_user(void)

        Allow the user to perform initialization before calling main().

    void __init_cpp(void)

        CodeWarrior C++ initialization before calling main().  Calls
        constructors of which the cpp exception handling initialization
        is the first constructor, if exceptions are used.

    void __fini_cpp(void)

        Calls destructors.

    void _ExitProcess(void)

        This function simply stalls the debugger.  You may want to rewrite this
        function if you are using an OS.

    abort and exit

    In order to correctly implement the required startup/termination sequence for
    C and C++ programs, we need to have an exit() routine that can be called by
    the program startup code. The exit() routine is supposed to

        (1)	call any functions registered via atexit()
        (2) call destructors for any global objects
        (3)	flush any unwritten buffers, close any open files, etc.
        (4) terminates the program

    We don't, however, want to require the ANSI C library for every CodeWarrior
    program, since it drags in lots of code that may not be needed.

    Instead we provide a dummy exit() function which simply calls the destructors
    and terminates the program. We assume that any program which uses atexit()
    or <stdio.h> and which requires those cleanup behaviors will have linked with
    the ANSI C library, whose definition of exit() will override the one here.

    We similarly define a dummy abort() function (which is called by the default
    terminate() handler).

    Programs which rely on the proper ANSI C/C++ behavior must use the ANSI C
    library, and order it in the CodeWarrior project or command-line so that
    its definitions supersede these definitions in the runtime support library.

COPYRIGHT
    (c) 1999 Metrowerks Corporation
    All rights reserved.

HISTORY
    97 APR 17 LLY	Created.
    97 JUN 24 MEA	Added support for C++ and malloc memory heaps.
    97 JUN 26 MEA	Made C and C++ versions of this file.  Added abort and exit.
    97 JUL 17 SCM	Customized for MPC821 ADS board.
    97 JUL 20 MEA	Changed __exit to _ExitProcess so as not to conflict with MSL.
                    _ExitProcess added to this file; removed form __start.c.
    99 JAN 22 MEA	Removed exception handing to __init_cpp_exceptions.c for use
                    with 2.2.2 compiler (post Release 4).  Put prototypes for
                    exit and abort within extern "C" to avoid name-mangling.

*/
/***************************************************************************/

#pragma exceptions off

#define ALLOC_ADDITIONAL_HEAPS 0

#include <__ppc_eabi_init.h>
#include <__ppc_eabi_linker.h>                                               /* linker-generated symbol declarations */
#if ALLOC_ADDITIONAL_HEAPS
#    include <pool_alloc.h>
#endif

#ifdef __cplusplus
extern "C"
{
#endif

static void                                        __init_cpp(void);
static void                                        __fini_cpp(void);
typedef void                                       (*voidfunctionptr)(void); /* ptr to function returning void */
__declspec(section ".init") extern voidfunctionptr _ctors[];
__declspec(section ".init") extern voidfunctionptr _dtors[];
extern void                                        abort(void);
extern void                                        exit(int status);
extern void                                        usr_init();

#ifdef __cplusplus
}
#endif

/***************************************************************************/
/*
 *	__init_hardware
 *
 *	Initialize the processor and board.
 *
 *	Note: this function must not access memory until the memory controller
 *	is initialized.  Using "fralloc" (frame allocate) or writing this
 *	function in C will cause this routine to break because writing into
 *	stack memory is not valid until after usr_init returns.
 */
/***************************************************************************/

asm void
__init_hardware(void)
{
    /*
     *	Initialize board unless running with MWDebug.
     *	Uncomment the initialization below if running standalone.
     *	You may need to perform other initializations.
     */
    nofralloc

    /*
     * If we are using Hardware  floating point we need to make sure
     * to enable the FP bit in the  MSR
     */

#if __option(floatingpoint) == 1 && __option(sfp_emulation) == 0
        mfmsr r3 ori r3,
        r3,
        0x00002000 mtmsr r3
#endif

    /*
     * If we have selected Altivec Programming Model we need to make sure
     * to enable the Altivec bit in the  MSR
     */

#if __VEC__
            mfmsr r3 oris r3,
        r3,
        0x0200 mtmsr r3
#endif

    /*
     *	When customizing, be aware that the memory controller may not be
     *	configured.
     */

#ifdef ROM_VERSION
            mflr r31         /* save off return address in NV reg */
                bl usr_init  /* init board hardware */
                    mtlr r31 /* get saved return address */
#endif

        blr
}

#if ALLOC_ADDITIONAL_HEAPS
static void
AllocMoreHeaps(void)
{
    /*
     *	By default, we MSL's allocation (malloc/free) even with C++.
     *	If you have declared a heap size in the Project Pref panel,
     *	a defaull heap will be created the first time you call
     *	malloc.  You can add more calls to init_alloc to create additional
     *	heaps.
     */
    init_alloc(some_address1, some_size1);
    init_alloc(some_address2, some_size2);
}
#endif

asm void
__init_user(void)
{
    fralloc
    /*
     *	Allocate additional heaps.
     */
#if ALLOC_ADDITIONAL_HEAPS
        bl AllocMoreHeaps
#endif

    /*
     *	initialization of static initializers
     */
#if (defined(__cplusplus) || defined(__VEC__)) && !defined(DO_NOT_LOAD_CTORS_DTORS)
            bl __init_cpp
#endif

                /*
                 *	Add your initializations here.
                 */
                frfree blr
}

#if defined(__cplusplus) || defined(__VEC__)
static void
__init_cpp(void)
{
    voidfunctionptr* constructor;

    /*
     *	call static initializers
     */
    for (constructor = _ctors; *constructor; constructor++)
    {
        (*constructor)();
    }
}

static void
__fini_cpp(void)
{
    voidfunctionptr* destructor;

    /*
     *	call destructors
     */
    for (destructor = _dtors; *destructor; destructor++)
    {
        (*destructor)();
    }
}
#endif

#pragma overload void abort(void);

void
abort(void)
{
    _ExitProcess();
}

#pragma overload void exit(int status);

void
exit(int status)
{
#pragma unused(status)

#if (defined(__cplusplus) || defined(__VEC__)) && !defined(DO_NOT_LOAD_CTORS_DTORS)
    __fini_cpp();
#endif
    _ExitProcess();
}

/*
 *	_ExitProcess
 *
 *	PowerPC EABI Runtime termination
 */
asm void
_ExitProcess(void) {
    nofralloc

        opword 0x00454E44 /* arbitrary break trap for halt */
}

/****************************************************************************/
/*
 *	__flush_cache
 *
 *	For the given memory range, forces all modified data cache contents to be
 *	written to memory and invalidates the associated instruction cache
 *	entries.
 *
 */
/****************************************************************************/
asm void __flush_cache(register void* address, register unsigned int size)
{
#pragma unused(address, size)
    /* r3 is address, r4 is size */
    nofralloc

#if !defined(__PPC555__)
        lis        r5,
        0xffff ori r5, r5, 0xfff1 and r5, r5,
        r3 /* make address 8-byte aligned		*/
            subf r3,
        r5,
        r3 /* get unaligned-aligned difference	*/
            add r4,
        r4,
        r3 /* increase size accordingly		*/

            rept :
/*
** Note: If no data cache, then just invalidate the instruction
** cache entry.
**
** The MPC 5xx processors do not have data cache.
*/
#    if !defined(__PPC505__) && !defined(__PPC509__)

#        if !defined(__PPC_GENERIC__)
      dcbst 0,
      r5
#        endif

#    endif
          sync

#    if !defined(__PPC_GENERIC__)
              icbi 0,
      r5
#    endif

          addic r5,
      r5,
      0x8 subic.r4,
      r4,
      0x8 bge rept isync
#endif
      blr
}
