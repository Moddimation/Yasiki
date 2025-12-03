

# File dolphin\_trk.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Src**](dir_6f2d6a2144e1eea12d16d0bd9685bdc9.md) **>** [**Os**](dir_c356d50d36c69ac9e068ee6cfcebacd1.md) **>** [**dolphin**](dir_620a2d14b5c78596f4b6e2cb4db579d5.md) **>** [**dolphin\_trk.c**](dolphin__trk_8c.md)

[Go to the documentation of this file](dolphin__trk_8c.md)


```C++
#include "Os/dolphin/dolphin_trk.h"
#include "Portable/main_TRK.h"
#include "Portable/mem_TRK.h"
#include "Os/dolphin/dolphin_trk_glue.h"
#include "Processor/ppc/Generic/targimpl.h"
#include "Processor/ppc/Generic/flush_cache.h"
#include "dolphin/ar.h"
#include "stddef.h"

#define EXCEPTIONMASK_ADDR 0x80000044

static u32 lc_base;

static u32 TRK_ISR_OFFSETS[15] = { PPC_SystemReset,
                                   PPC_MachineCheck,
                                   PPC_DataStorage,
                                   PPC_InstructionStorage,
                                   PPC_ExternalInterrupt,
                                   PPC_Alignment,
                                   PPC_Program,
                                   PPC_FloatingPointUnavaiable,
                                   PPC_Decrementer,
                                   PPC_SystemCall,
                                   PPC_Trace,
                                   PPC_PerformanceMonitor,
                                   PPC_InstructionAddressBreakpoint,
                                   PPC_SystemManagementInterrupt,
                                   PPC_ThermalManagementInterrupt };

__declspec(section ".init") void __TRK_reset(void) { __TRK_copy_vectors(); }

asm void InitMetroTRK()
{
#ifdef __MWERKS__ // clang-format off
    nofralloc

    addi r1, r1, -4
    stw r3, 0(r1)
    lis r3, gTRKCPUState@h
    ori r3, r3, gTRKCPUState@l
    stmw r0, ProcessorState_PPC.Default.GPR(r3) //Save the gprs
    lwz r4, 0(r1)
    addi r1, r1, 4
    stw r1, ProcessorState_PPC.Default.GPR[1](r3)
    stw r4, ProcessorState_PPC.Default.GPR[3](r3)
    mflr r4
    stw r4, ProcessorState_PPC.Default.LR(r3)
    stw r4, ProcessorState_PPC.Default.PC(r3)
    mfcr r4
    stw r4, ProcessorState_PPC.Default.CR(r3)
    //???
    mfmsr r4
    ori r3, r4, (1 << (31 - 16))
    xori r3, r3, (1 << (31 - 16))
    mtmsr r3
    mtsrr1 r4 //Copy msr to srr1
    //Save misc registers to gTRKCPUState
    bl TRKSaveExtended1Block
    lis r3, gTRKCPUState@h
    ori r3, r3, gTRKCPUState@l
    lmw r0, ProcessorState_PPC.Default.GPR(r3) //Restore the gprs
    //Reset IABR and DABR
    li r0, 0
    mtspr  0x3f2, r0
    mtspr  0x3f5, r0
    //Restore stack pointer
    lis r1, 0x80426008@h
    ori r1, r1, 0x80426008@l
    mr r3, r5
    bl InitMetroTRKCommTable //Initialize comm table
    /*
    If InitMetroTRKCommTable returned 1 (failure), an invalid hardware
    id or the id for GDEV was somehow passed. Since only BBA or NDEV
    are supported, we return early. Otherwise, we proceed with
    starting up TRK.
    */
    cmpwi r3, 1
    bne initCommTableSuccess
    /*
    BUG: The code probably orginally reloaded gTRKCPUState here, but
    as is it will read the returned value of InitMetroTRKCommTable
    as a TRKCPUState struct pointer, causing the CPU to return to
    a garbage code address.
    */
    lwz r4, ProcessorState_PPC.Default.LR(r3)
    mtlr r4
    lmw r0, ProcessorState_PPC.Default.GPR(r3) //Restore the gprs
    blr
initCommTableSuccess:
    b TRK_main //Jump to TRK_main
#endif // clang-format on
}

void EnableMetroTRKInterrupts(void) { EnableEXI2Interrupts(); }

u32 TRKTargetTranslate(u32 param_0)
{
    if (param_0 >= lc_base) {
        if ((param_0 < lc_base + 0x4000)
            && ((gTRKCPUState.Extended1.DBAT3U & 3) != 0)) {
            return param_0;
        }
    }

    return param_0 & 0x3FFFFFFF | 0x80000000;
}

extern u8 gTRKInterruptVectorTable[];

void TRK_copy_vector(u32 offset)
{
    void* destPtr = (void*)TRKTargetTranslate(offset);
    TRK_memcpy(destPtr, gTRKInterruptVectorTable + offset, 0x100);
    TRK_flush_cache(destPtr, 0x100);
}

void __TRK_copy_vectors(void)
{
    int i;
    u32 mask;

    mask = *(u32*)TRKTargetTranslate(0x44);

    for (i = 0; i <= 14; ++i) {
        if (mask & (1 << i)) {
            TRK_copy_vector(TRK_ISR_OFFSETS[i]);
        }
    }
}

DSError TRKInitializeTarget()
{
    gTRKState.isStopped = TRUE;
    gTRKState.msr       = __TRK_get_MSR();
    lc_base             = 0xE0000000;
    return DS_NoError;
}
```


