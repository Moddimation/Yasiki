/*
 * GCN_mem_alloc.c
 *
 * CopyrighC 1995-2001 Metrowerks, Inc. All Rights Reserved.
 *
 * This implements weakly linked symbols for allocating
 * memory in a default heap. This allows an MSL
 * that expects the OS to do memory allocation to
 * do this by default. All memory allocation (new, malloc, free,
 * delete) will go through these functions.
 *
 * The memory is pooled when used this way, so instead
 * of allocating exactly the amount asked for, the pools
 * will be 64K. Hence less OSAlloc calls have to be made.
 *
 */

#include <os.h>
#include <pool_alloc.h>
#include <Stdio.h>
/*
 * InitDefaultHeap ()
 * Allocate a default heap
 * It is possible for usr static constructors,
 * or MSL C++ constructors to call new or malloc
 * In that case, generally the target would
 * crash since no heap has been allocated.
 *
 * This allows the user to override the weakly
 * linked __sys_alloc and __sys_free to initialize
 * whatever heap they want and allocate anything they
 * need.
 */

static void
InitDefaultHeap ()
{
    void* arenaLo;
    void* arenaHi;

    OSReport ("GCN_Mem_Alloc.c : InitDefaultHeap. No Heap Available\n");
    OSReport ("Metrowerks CW runtime library initializing default heap\n");

    arenaLo = OSGetArenaLo();
    arenaHi = OSGetArenaHi();

    // Create a heap
    // OSInitAlloc should only ever be invoked once.
    arenaLo = OSInitAlloc (arenaLo, arenaHi, 1); // 1 heap
    OSSetArenaLo (arenaLo);

    // Ensure boundaries are 32B aligned
    arenaLo = (void*)OSRoundUp32B (arenaLo);
    arenaHi = (void*)OSRoundDown32B (arenaHi);

    // The boundaries given to OSCreateHeap should be 32B aligned
    OSSetCurrentHeap (OSCreateHeap (arenaLo, arenaHi));
    // From here on out, OSAlloc and OSFree behave like malloc and free
    // respectively
    OSSetArenaLo (arenaLo = arenaHi);
}
/*
 * __sys_alloc
 *
 * Default function whenever a malloc or new
 * is called. Note that only the first call to malloc
 * or new will end up here. After that, a memory
 * pool of 64K will be used. Only after passing this
 * 64K limit will there be a need for another call to
 * sys_alloc.
 */

WEAKFUNC extern void*
__sys_alloc (__std (size_t) blocksize)
{
    /* Check if there is already a default heap */
    if (__OSCurrHeap == -1)
    {
        InitDefaultHeap();
    }

    return OSAllocFromHeap (__OSCurrHeap, blocksize);
}
/*
 * __sys_free
 *
 * Default function whenever a free or delete is called.
 *
 */

WEAKFUNC extern void
__sys_free (void* block)
{
    if (__OSCurrHeap == -1)
    {
        InitDefaultHeap();
    }

    OSFreeToHeap (__OSCurrHeap, block);
}
