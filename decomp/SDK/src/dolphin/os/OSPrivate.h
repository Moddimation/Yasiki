#ifndef _DOLPHIN_OS_INTERNAL_H_
#define _DOLPHIN_OS_INTERNAL_H_

#include <dolphin/os.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define SEC_INIT DECL_SECT (".init")

// OS.c
extern char* __OSExceptionNames[15]; // D ONLY

u32  __OSIsDebuggerPresent (void);
void __OSPSInit (void);

// OSAlloc.c
extern volatile int __OSCurrHeap;

// OSAudioSystem.c
void __OSInitAudioSystem (void);
void __OSStopAudioSystem (void);

// OSCache.c
void __OSCacheInit (void);

// OSContext.c
void __OSContextInit (void);

// OSError.c
void __OSUnhandledException (u16 exception, OSContext* context, u32 dsisr, u32 dar);

// OSInterrupt.c
extern void __RAS_OSDisableInterrupts_begin (void);
extern void __RAS_OSDisableInterrupts_end (void);

extern u64   __OSSpuriousInterrupts; // D ONLY
extern char* __OSInterruptNames[33]; // D ONLY
extern char* __OSPIErrors[8];        // D ONLY

__OSInterruptHandler __OSSetInterruptHandler (__OSInterrupt        interrupt,
                                              __OSInterruptHandler handler);
__OSInterruptHandler __OSGetInterruptHandler (__OSInterrupt interrupt);
void                 __OSInterruptInit (void);
OSInterruptMask      __OSMaskInterrupts (OSInterruptMask global);
OSInterruptMask      __OSUnmaskInterrupts (OSInterruptMask global);
void __OSDispatchInterrupt (__OSException exception, OSContext* context);
void __OSModuleInit (void);

// OSMutex.c
void __OSUnlockAllMutex (struct OSThread* thread);
int  __OSCheckDeadLock (struct OSThread* thread);
int  __OSCheckMutexes (struct OSThread* thread);

// OSReset.c
void __OSDoHotReset (s32 code);

// OSResetSW.c
void __OSResetSWInterruptHandler (s16 exception, OSContext* context);

// OSRtc.c
int              __OSGetRTC (u32* rtc);
int              __OSSetRTC (u32 rtc);
void             __OSInitSram ();
struct OSSram*   __OSLockSram (void);
struct OSSramEx* __OSLockSramEx (void);
int              __OSUnlockSram (int commit);
int              __OSUnlockSramEx (int commit);
int              __OSSyncSram (void);
int              __OSCheckSram (void);
int              __OSReadROM (void* buffer, s32 length, long offset);
int  __OSReadROMAsync (void* buffer, s32 length, long offset, void (*callback)());
u16  __OSGetBootMode (void);
void __OSSetBootMode (u16 ntd);

// OSSync.c
extern void __OSSystemCallVectorStart ();
extern void __OSSystemCallVectorEnd ();

void __OSInitSystemCall (void);

// OSThread.c
void __OSThreadInit (void);
s32  __OSGetEffectivePriority (struct OSThread* thread);
void __OSPromoteThread (struct OSThread* thread, s32 priority);
void __OSReschedule (void);

// OSTime.c
void __OSSetTime (s64 time);
s64  __OSGetSystemTime ();
void __OSSetTick (register u32 newTicks);

extern OSTime __OSStartTime;

// OSReboot.c
void __OSReboot (u32 resetCode, BOOL forceMenu);

// __ppc_eabi_init.c
SEC_INIT ASM void __init_hardware (void);
SEC_INIT ASM void __flush_cache (void* address, unsigned int size);
void              __init_user (void);
void              __init_cpp (void);
void              __fini_cpp (void);
void              _ExitProcess (void);

// __start.c
void __start (void);

#ifdef __MWERKS__
SEC_INIT extern void __start (void);
SEC_INIT void        __copy_rom_section (void* dst, const void* src, u32 size);
SEC_INIT void        __init_bss_section (void* dst, u32 size);
SEC_INIT extern void __init_registers (void);
SEC_INIT extern void __init_data (void);
#else
extern void __start (void);
void        __copy_rom_section (void* dst, const void* src, u32 size);
void        __init_bss_section (void* dst, u32 size);
extern void __init_registers (void);
extern void __init_data (void);
#endif

// time.dolphin.c
s64 __get_clock (void);
u32 __get_time (void);
int __to_gm_time (void);

unsigned long __OSIsDebuggerPresent (void);
void          __OSPSInit (void);

extern void* BOOT_REGION_START;
extern void* BOOT_REGION_END;

#ifdef __cplusplus
}
#endif

#endif // _DOLPHIN_OS_INTERNAL_H_
