#ifndef _DOLPHIN_OS_INTERNAL_H_
#define _DOLPHIN_OS_INTERNAL_H_

#include <dolphin/os.h>

// OS.c
extern char* __OSExceptionNames[15]; // D ONLY

u32 __OSIsDebuggerPresent(void);
void          __OSPSInit(void);

// OSAlloc.c
extern volatile int __OSCurrHeap;

// OSAudioSystem.c
void __OSInitAudioSystem(void);
void __OSStopAudioSystem(void);

// OSCache.c
void __OSCacheInit(void);

// OSContext.c
void __OSContextInit(void);

// OSError.c
void __OSUnhandledException(u16 exception, struct OSContext* context, u32 dsisr, u32 dar);

// OSInterrupt.c
extern void __RAS_OSDisableInterrupts_begin(void);
extern void __RAS_OSDisableInterrupts_end(void);

extern u64 __OSSpuriousInterrupts; // D ONLY
extern char*              __OSInterruptNames[33]; // D ONLY
extern char*              __OSPIErrors[8];        // D ONLY

__OSInterruptHandler __OSSetInterruptHandler(__OSInterrupt interrupt, __OSInterruptHandler handler);
__OSInterruptHandler __OSGetInterruptHandler(__OSInterrupt interrupt);
void                 __OSInterruptInit(void);
OSInterruptMask      __OSMaskInterrupts(OSInterruptMask global);
OSInterruptMask      __OSUnmaskInterrupts(OSInterruptMask global);
void                 __OSDispatchInterrupt(__OSException exception, OSContext* context);
void                 __OSModuleInit(void);

// OSMutex.c
void __OSUnlockAllMutex(struct OSThread* thread);
int  __OSCheckDeadLock(struct OSThread* thread);
int  __OSCheckMutexes(struct OSThread* thread);

// OSResetSW.c
void __OSResetSWInterruptHandler(s16 exception, struct OSContext* context);

// OSRtc.c
int              __OSGetRTC(u32* rtc);
int              __OSSetRTC(u32 rtc);
void             __OSInitSram();
struct OSSram*   __OSLockSram(void);
struct OSSramEx* __OSLockSramEx(void);
int              __OSUnlockSram(int commit);
int              __OSUnlockSramEx(int commit);
int              __OSSyncSram(void);
int              __OSCheckSram(void);
int              __OSReadROM(void* buffer, s32 length, long offset);
int              __OSReadROMAsync(void* buffer, s32 length, long offset, void (*callback)());
u16    __OSGetBootMode(void);
void             __OSSetBootMode(u16 ntd);

// OSSync.c
extern void __OSSystemCallVectorStart();
extern void __OSSystemCallVectorEnd();

void __OSInitSystemCall(void);

// OSThread.c
void __OSThreadInit(void);
s32 __OSGetEffectivePriority(struct OSThread* thread);
void __OSPromoteThread(struct OSThread* thread, s32 priority);
void __OSReschedule(void);

// OSTime.c
void      __OSSetTime(s64 time);
s64 __OSGetSystemTime();
void      __OSSetTick(register u32 newTicks);

// ppc_eabi_init.c
#ifdef __MWERKS__
__declspec(section ".init") asm void __init_hardware(void);
__declspec(section ".init") asm void __flush_cache(void* address, unsigned int size);
#else
asm void __init_hardware(void);
asm void __flush_cache(void* address, unsigned int size);
#endif
void __init_user(void);
void __init_cpp(void);
void __fini_cpp(void);
void _ExitProcess(void);

// start.c
void __start(void);

#ifdef __MWERKS__
__declspec(section ".init") extern void __start(void);
__declspec(section ".init") void        __copy_rom_section(void* dst, const void* src, u32 size);
__declspec(section ".init") void        __init_bss_section(void* dst, u32 size);
__declspec(section ".init") extern void __init_registers(void);
__declspec(section ".init") extern void __init_data(void);
#else
extern void __start(void);
void        __copy_rom_section(void* dst, const void* src, u32 size);
void        __init_bss_section(void* dst, u32 size);
extern void __init_registers(void);
extern void __init_data(void);
#endif

// time.dolphin.c
s64     __get_clock(void);
u32 __get_time(void);
int           __to_gm_time(void);

#endif // _DOLPHIN_OS_INTERNAL_H_
