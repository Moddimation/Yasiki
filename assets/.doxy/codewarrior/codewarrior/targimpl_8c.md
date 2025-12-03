

# File targimpl.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Src**](dir_6f2d6a2144e1eea12d16d0bd9685bdc9.md) **>** [**Processor**](dir_3f94ce28487c278a20eec907102da23f.md) **>** [**ppc**](dir_3cd1757fc5c55ed777b0117ef4782d6f.md) **>** [**Generic**](dir_1a613ca9a4c46e4fb94e410b208d56c0.md) **>** [**targimpl.c**](targimpl_8c.md)

[Go to the source code of this file](targimpl_8c_source.md)



* `#include "Processor/ppc/Generic/targimpl.h"`
* `#include "Os/dolphin/dolphin_trk.h"`
* `#include "Processor/ppc/Generic/flush_cache.h"`
* `#include "Processor/ppc/Generic/mpc_7xx_603e.h"`
* `#include "Portable/msgbuf.h"`
* `#include "Portable/support.h"`
* `#include "Portable/notify.h"`
* `#include "stddef.h"`
* `#include "string.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**StopInfo\_PPC**](struct_stop_info___p_p_c.md) <br> |
| struct | [**TRKExceptionStatus**](struct_t_r_k_exception_status.md) <br> |
| struct | [**TRKStepStatus**](struct_t_r_k_step_status.md) <br> |
| struct | [**memRange**](structmem_range.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef struct [**StopInfo\_PPC**](struct_stop_info___p_p_c.md) | [**StopInfo\_PPC**](#typedef-stopinfo_ppc)  <br> |
| typedef struct [**TRKExceptionStatus**](struct_t_r_k_exception_status.md) | [**TRKExceptionStatus**](#typedef-trkexceptionstatus)  <br> |
| typedef struct [**TRKStepStatus**](struct_t_r_k_step_status.md) | [**TRKStepStatus**](#typedef-trkstepstatus)  <br> |
| typedef struct [**memRange**](structmem_range.md) | [**memRange**](#typedef-memrange)  <br> |
| typedef unsigned char | [**u128**](#typedef-u128)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  return | [**DS\_NoError**](#variable-ds_noerror)  <br> |
|  [**u128**](targimpl_8c.md#typedef-u128) | [**TRKvalue128\_temp**](#variable-trkvalue128_temp)  <br> |
|  BOOL | [**gTRKBigEndian**](#variable-gtrkbigendian)  <br> |
|  [**ProcessorState\_PPC**](targimpl_8h.md#typedef-processorstate_ppc) | [**gTRKCPUState**](#variable-gtrkcpustate)  <br> |
|  const [**memRange**](structmem_range.md) | [**gTRKMemMap**](#variable-gtrkmemmap)   = `{ { (u8\*)0, (u8\*)-1, TRUE, TRUE } }`<br> |
|  [**ProcessorRestoreFlags\_PPC**](struct_processor_restore_flags___p_p_c.md) | [**gTRKRestoreFlags**](#variable-gtrkrestoreflags)   = `{ FALSE, FALSE }`<br> |
|  [**Default\_PPC**](struct_default___p_p_c.md) | [**gTRKSaveState**](#variable-gtrksavestate)  <br> |
|  [**TRKState**](struct_t_r_k_state.md) | [**gTRKState**](#variable-gtrkstate)  <br> |
|  psr&lt;&lt; 21)\|(rDest&lt;&lt; 16)\|(w&lt;&lt; 15)\|(gqr&lt;&lt; 12) ﾂ･\|offset)#define [**INSTR\_PSQ\_L**](targimpl_8c.md#define-instr_psq_l)(psr, offset, rSrc, w, gqr)(0xE0000000\|(psr&lt;&lt; 21)\|(rSrc&lt;&lt; 16)\|(w&lt;&lt; 15)\|(gqr&lt;&lt; 12)\|offset)#define [**INSTR\_STW**](targimpl_8c.md#define-instr_stw)(rSrc, offset, rDest)(0x90000000\|(rSrc&lt;&lt; 21)\|(rDest&lt;&lt; 16)\|offset)#define [**INSTR\_LWZ**](targimpl_8c.md#define-instr_lwz)(rDest, offset, rSrc)(0x80000000\|(rDest&lt;&lt; 21)\|(rSrc&lt;&lt; 16)\|offset)#define [**INSTR\_STFD**](targimpl_8c.md#define-instr_stfd)(fprSrc, offset, rDest)(0xD8000000\|(fprSrc&lt;&lt; 21)\|(rDest&lt;&lt; 16)\|offset)#define [**INSTR\_LFD**](targimpl_8c.md#define-instr_lfd)(fprDest, offset, rSrc)(0xC8000000\|(fprDest&lt;&lt; 21)\|(rSrc&lt;&lt; 16)\|offset)#define [**INSTR\_MFSPR**](targimpl_8c.md#define-instr_mfspr)(rDest, spr)(0x7C000000\|(rDest&lt;&lt; 21)\|((spr &0xFE0)&lt;&lt; 6)\|((spr &0x1F)&lt;&lt; 16) ﾂ･\|0x2A6)#define [**INSTR\_MTSPR**](targimpl_8c.md#define-instr_mtspr)(spr, rSrc)(0x7C000000\|(rSrc&lt;&lt; 21)\|((spr &0xFE0)&lt;&lt; 6)\|((spr &0x1F)&lt;&lt; 16) ﾂ･\|0x3A6)#define [**DSFetch\_u32**](targimpl_8c.md#define-dsfetch_u32)(\_p\_) #define [**DSFetch\_u64**](targimpl_8c.md#define-dsfetch_u64)(\_p\_) [**DSError**](trk_8h.md#typedef-dserror) [**TRKPPCAccessSPR**](targimpl_8c.md#function-trkppcaccessspr)(void \*value, u32 spr\_register\_num, BOOL read);[**DSError**](trk_8h.md#typedef-dserror) [**TRKPPCAccessPairedSingleRegister**](targimpl_8c.md#function-trkppcaccesspairedsingleregister)(void \*srcDestPtr, u32 psr, BOOL read);[**DSError**](trk_8h.md#typedef-dserror) [**TRKPPCAccessFPRegister**](targimpl_8c.md#function-trkppcaccessfpregister)(void \*srcDestPtr, u32 fpr, BOOL read);[**DSError**](trk_8h.md#typedef-dserror) [**TRKPPCAccessSpecialReg**](targimpl_8c.md#function-trkppcaccessspecialreg)(void \*value, u32 \*access\_func, BOOL read);static void [**TRKExceptionHandler**](targimpl_8c.md#function-trkexceptionhandler)(u16);void [**TRKInterruptHandlerEnableInterrupts**](targimpl_8c.md#function-trkinterrupthandlerenableinterrupts)(void);void WriteFPSCR(register f64 \*);void ReadFPSCR(register f64 \*);void \_\_TRK\_set\_MSR(u32 [**msr**](targimpl_8c.md#define-msr));u32 \_\_TRK\_get\_MSR();static void TRK\_ppc\_memcpy(register void \*dest, register const void \*src, register int n, register u32 param\_4, register u32 param\_5);void [**TRKRestoreExtended1Block**](mpc__7xx__603e_8c.md#function-trkrestoreextended1block)();void [**TRKUARTInterruptHandler**](dolphin__trk__glue_8c.md#function-trkuartinterrupthandler)();static BOOL [**TRKTargetCheckStep**](targimpl_8c.md#function-trktargetcheckstep)();asm u32 \_\_TRK\_get\_MSR(){ nofralloc mfmsr [**r3**](e__lgamma__r_8c.md#variable-r3) blr}asm void \_\_TRK\_set\_MSR(register u32 [**msr**](targimpl_8c.md#define-msr)) { nofralloc mtmsr [**msr**](targimpl_8c.md#define-msr) blr}[**DSError**](trk_8h.md#typedef-dserror) TRKValidMemory32(const void \*addr, [**size\_t**](size__t_8h.md#typedef-size_t) length, [**ValidMemoryOptions**](trk_8h.md#enum-validmemoryoptions) readWriteable){ [**DSError**](trk_8h.md#typedef-dserror) err=DS\_InvalidMemory;const u8 \*start;const u8 \*end;s32 i;start=(const u8 \*) addr;end=((const u8 \*) addr+(length - 1));if(end&lt; start) return DS\_InvalidMemory;for(i=0;(i&lt;(s32)(sizeof([**gTRKMemMap**](targimpl_8c.md#variable-gtrkmemmap))/sizeof([**memRange**](structmem_range.md))));i++) { if((start&lt;=(const u8 \*) [**gTRKMemMap**](targimpl_8c.md#variable-gtrkmemmap)[i].end) &&(end &gt;=(const u8 \*) [**gTRKMemMap**](targimpl_8c.md#variable-gtrkmemmap)[i].start)) { if(((readWriteable==VALIDMEM\_Readable) &&![**gTRKMemMap**](targimpl_8c.md#variable-gtrkmemmap)[i].readable)\|\|((readWriteable==VALIDMEM\_Writeable) &&![**gTRKMemMap**](targimpl_8c.md#variable-gtrkmemmap)[i].writeable)) { err=DS\_InvalidMemory;} else { err=DS\_NoError;if(start&lt;(const u8 \*) [**gTRKMemMap**](targimpl_8c.md#variable-gtrkmemmap)[i].start) err=TRKValidMemory32(start,(u32)((const u8 \*) [**gTRKMemMap**](targimpl_8c.md#variable-gtrkmemmap)[i].start - start), readWriteable);if((err==DS\_NoError) &&(end &gt;(const u8 \*) [**gTRKMemMap**](targimpl_8c.md#variable-gtrkmemmap)[i].end)) err=TRKValidMemory32((const u8 \*) [**gTRKMemMap**](targimpl_8c.md#variable-gtrkmemmap)[i].end,(u32)(end -(const u8 \*) [**gTRKMemMap**](targimpl_8c.md#variable-gtrkmemmap)[i].end), readWriteable);} break;} } return err;}static asm void TRK\_ppc\_memcpy(register void \*dest, register const void \*src, register int n, register u32 param\_4, register u32 param\_5) {#define [**msr**](targimpl_8c.md#define-msr) #define [**byte**](targimpl_8c.md#define-byte) #define [**count**](targimpl_8c.md#define-count) nofralloc mfmsr [**msr**](targimpl_8c.md#define-msr) li [**count**](targimpl_8c.md#define-count), 0top\_loop:cmpw [**count**](targimpl_8c.md#define-count), n beq out\_loop mtmsr param\_5 sync lbzx [**byte**](targimpl_8c.md#define-byte), [**count**](targimpl_8c.md#define-count), src mtmsr param\_4 sync stbx [**byte**](targimpl_8c.md#define-byte), [**count**](targimpl_8c.md#define-count), dest addi [**count**](targimpl_8c.md#define-count), [**count**](targimpl_8c.md#define-count), 1 b top\_loopout\_loop:mtmsr [**msr**](targimpl_8c.md#define-msr) sync blr}[**DSError**](trk_8h.md#typedef-dserror) [**TRKTargetAccessMemory**](targimpl_8h.md#function-trktargetaccessmemory)(void \*data, u32 start, [**size\_t**](size__t_8h.md#typedef-size_t) \*length, [**MemoryAccessOptions**](trk_8h.md#enum-memoryaccessoptions) accessOptions, BOOL read){ [**DSError**](trk_8h.md#typedef-dserror) error;u32 target\_msr;void \*addr;u32 trk\_msr;[**TRKExceptionStatus**](struct_t_r_k_exception_status.md) tempExceptionStatus=[**gTRKExceptionStatus**](targimpl_8c.md#variable-gtrkexceptionstatus);gTRKExceptionStatus.exceptionDetected=FALSE;addr=(void \*) [**TRKTargetTranslate**](dolphin__trk_8h.md#function-trktargettranslate)(start);error=TRKValidMemory32(addr, \*length, read ? VALIDMEM\_Readable :VALIDMEM\_Writeable);if(error !=DS\_NoError) { \*length=0;} else { target\_msr=\_\_TRK\_get\_MSR();trk\_msr=target\_msr\|gTRKCPUState.Extended1.MSR &0x10;if(read) { TRK\_ppc\_memcpy(data, addr, \*length, target\_msr, trk\_msr);} else { TRK\_ppc\_memcpy(addr, data, \*length, trk\_msr, target\_msr);[**TRK\_flush\_cache**](flush__cache_8h.md#function-trk_flush_cache)(addr, \*length);if((void \*) start !=addr) { [**TRK\_flush\_cache**](flush__cache_8h.md#function-trk_flush_cache)((void \*) start, \*length);} } } if(gTRKExceptionStatus.exceptionDetected) { \*length=0;error=DS\_CWDSException;} [**gTRKExceptionStatus**](targimpl_8c.md#variable-gtrkexceptionstatus)=tempExceptionStatus;return error;}[**DSError**](trk_8h.md#typedef-dserror) TRKTargetReadInstruction(void \*data, u32 start){ [**DSError**](trk_8h.md#typedef-dserror) error;[**size\_t**](size__t_8h.md#typedef-size_t) registersLength=4;error=[**TRKTargetAccessMemory**](targimpl_8h.md#function-trktargetaccessmemory)(data, start, &registersLength, MEMACCESS\_UserMemory, TRUE);if(error==DS\_NoError &&registersLength !=4) { error=DS\_InvalidMemory;} return error;}[**DSError**](trk_8h.md#typedef-dserror) [**TRKTargetAccessDefault**](targimpl_8h.md#function-trktargetaccessdefault)(u32 firstRegister, u32 lastRegister, [**TRKBuffer**](struct_t_r_k_buffer.md) \*b, [**size\_t**](size__t_8h.md#typedef-size_t) \*registersLengthPtr, BOOL read){ [**DSError**](trk_8h.md#typedef-dserror) error;u32 [**count**](targimpl_8c.md#define-count);u32 \*data;[**TRKExceptionStatus**](struct_t_r_k_exception_status.md) tempExceptionStatus;if(lastRegister &gt; 0x24) { return DS\_InvalidRegister;} tempExceptionStatus=[**gTRKExceptionStatus**](targimpl_8c.md#variable-gtrkexceptionstatus);data=gTRKCPUState.Default.GPR+firstRegister;[**count**](targimpl_8c.md#define-count)=(lastRegister - firstRegister)+1;gTRKExceptionStatus.exceptionDetected=FALSE;\*registersLengthPtr=[**count**](targimpl_8c.md#define-count) \*sizeof(u32);if(read) { error=[**TRKAppendBuffer\_ui32**](msgbuf_8h.md#function-trkappendbuffer_ui32)(b, data, [**count**](targimpl_8c.md#define-count));} else { error=[**TRKReadBuffer\_ui32**](msgbuf_8h.md#function-trkreadbuffer_ui32)(b, data, [**count**](targimpl_8c.md#define-count));} if(gTRKExceptionStatus.exceptionDetected) { \*registersLengthPtr=0;error=DS\_CWDSException;} [**gTRKExceptionStatus**](targimpl_8c.md#variable-gtrkexceptionstatus)=tempExceptionStatus;return error;}[**DSError**](trk_8h.md#typedef-dserror) [**TRKTargetAccessFP**](targimpl_8h.md#function-trktargetaccessfp)(u32 firstRegister, u32 lastRegister, [**TRKBuffer**](struct_t_r_k_buffer.md) \*b, [**size\_t**](size__t_8h.md#typedef-size_t) \*registersLengthPtr, BOOL read){ u64 temp;[**DSError**](trk_8h.md#typedef-dserror) error;[**TRKExceptionStatus**](struct_t_r_k_exception_status.md) tempExceptionStatus;u32 current;if(lastRegister &gt; 0x21) { return DS\_InvalidRegister;} tempExceptionStatus=[**gTRKExceptionStatus**](targimpl_8c.md#variable-gtrkexceptionstatus);gTRKExceptionStatus.exceptionDetected=FALSE;\_\_TRK\_set\_MSR(\_\_TRK\_get\_MSR()\|0x2000);\*registersLengthPtr=0;error=DS\_NoError;for(current=firstRegister;(current&lt;=lastRegister) &&(error==DS\_NoError);current++, \*registersLengthPtr+=sizeof(f64)) { if(read) { [**TRKPPCAccessFPRegister**](targimpl_8c.md#function-trkppcaccessfpregister)(&temp, current, read);error=[**TRKAppendBuffer1\_ui64**](msgbuf_8h.md#function-trkappendbuffer1_ui64)(b, temp);} else { [**TRKReadBuffer1\_ui64**](msgbuf_8h.md#function-trkreadbuffer1_ui64)(b, &temp);error=[**TRKPPCAccessFPRegister**](targimpl_8c.md#function-trkppcaccessfpregister)(&temp, current, read);} } if(gTRKExceptionStatus.exceptionDetected) { \*registersLengthPtr=0;error=DS\_CWDSException;} [**gTRKExceptionStatus**](targimpl_8c.md#variable-gtrkexceptionstatus)=tempExceptionStatus;return error;}[**DSError**](trk_8h.md#typedef-dserror) [**TRKTargetAccessExtended1**](targimpl_8h.md#function-trktargetaccessextended1)(u32 firstRegister, u32 lastRegister, [**TRKBuffer**](struct_t_r_k_buffer.md) \*b, [**size\_t**](size__t_8h.md#typedef-size_t) \*registersLengthPtr, BOOL read){ [**TRKExceptionStatus**](struct_t_r_k_exception_status.md) tempExceptionStatus;int error;u32 \*data;int [**count**](targimpl_8c.md#define-count);if(lastRegister &gt; 0x60) { return DS\_InvalidRegister;} tempExceptionStatus=[**gTRKExceptionStatus**](targimpl_8c.md#variable-gtrkexceptionstatus);gTRKExceptionStatus.exceptionDetected=FALSE;\*registersLengthPtr=0;if(firstRegister&lt;=lastRegister) { data=(u32 \*)&gTRKCPUState.Extended1+firstRegister;[**count**](targimpl_8c.md#define-count)=lastRegister - firstRegister+1;\*registersLengthPtr+=[**count**](targimpl_8c.md#define-count) \*sizeof(u32);if(read) { error=[**TRKAppendBuffer\_ui32**](msgbuf_8h.md#function-trkappendbuffer_ui32)(b, data, [**count**](targimpl_8c.md#define-count));} else { if(data&lt;=&gTRKCPUState.Extended1.TBU &&(data+[**count**](targimpl_8c.md#define-count) - 1) &gt;=&gTRKCPUState.Extended1.TBL) { gTRKRestoreFlags.TBR=1;} if(data&lt;=&gTRKCPUState.Extended1.DEC &&(data+[**count**](targimpl_8c.md#define-count) - 1) &gt;=&gTRKCPUState.Extended1.DEC) { gTRKRestoreFlags.DEC=1;} error=[**TRKReadBuffer\_ui32**](msgbuf_8h.md#function-trkreadbuffer_ui32)(b, data, [**count**](targimpl_8c.md#define-count));} } if(gTRKExceptionStatus.exceptionDetected) { \*registersLengthPtr=0;error=DS\_CWDSException;} [**gTRKExceptionStatus**](targimpl_8c.md#variable-gtrkexceptionstatus)=tempExceptionStatus;return error;}[**DSError**](trk_8h.md#typedef-dserror) [**TRKTargetAccessExtended2**](targimpl_8h.md#function-trktargetaccessextended2)(u32 firstRegister, u32 lastRegister, [**TRKBuffer**](struct_t_r_k_buffer.md) \*b, [**size\_t**](size__t_8h.md#typedef-size_t) \*registerStorageSize, BOOL read){ [**TRKExceptionStatus**](struct_t_r_k_exception_status.md) savedException;u32 i;u32 value\_buf0[1];u32 value\_buf[2];[**DSError**](trk_8h.md#typedef-dserror) err;u32 access\_func[10];if(lastRegister &gt; 0x1f) return DS\_InvalidRegister;savedException=[**gTRKExceptionStatus**](targimpl_8c.md#variable-gtrkexceptionstatus);gTRKExceptionStatus.exceptionDetected=FALSE;[**TRKPPCAccessSPR**](targimpl_8c.md#function-trkppcaccessspr)(value\_buf0, [**SPR\_HID2**](trk_8h.md#define-spr_hid2), TRUE);value\_buf0[0]\|=0xA0000000;[**TRKPPCAccessSPR**](targimpl_8c.md#function-trkppcaccessspr)(value\_buf0, [**SPR\_HID2**](trk_8h.md#define-spr_hid2), FALSE);value\_buf0[0]=0;[**TRKPPCAccessSPR**](targimpl_8c.md#function-trkppcaccessspr)(value\_buf0, [**SPR\_GQR0**](trk_8h.md#define-spr_gqr0), FALSE);\*registerStorageSize=0;err=DS\_NoError;for(i=firstRegister;(i&lt;=lastRegister) &&(err==DS\_NoError);i++) { if(read) { err=[**TRKPPCAccessPairedSingleRegister**](targimpl_8c.md#function-trkppcaccesspairedsingleregister)((u64 \*) value\_buf, i, read);err=[**TRKAppendBuffer1\_ui64**](msgbuf_8h.md#function-trkappendbuffer1_ui64)(b, \*(u64 \*) value\_buf);} else { err=[**TRKReadBuffer1\_ui64**](msgbuf_8h.md#function-trkreadbuffer1_ui64)(b,(u64 \*) value\_buf);err=[**TRKPPCAccessPairedSingleRegister**](targimpl_8c.md#function-trkppcaccesspairedsingleregister)((u64 \*) value\_buf, i, read);} \*registerStorageSize+=sizeof(u64);} if(gTRKExceptionStatus.exceptionDetected) { \*registerStorageSize=0;err=DS\_CWDSException;} [**gTRKExceptionStatus**](targimpl_8c.md#variable-gtrkexceptionstatus)=savedException;return err;}[**DSError**](trk_8h.md#typedef-dserror) [**TRKTargetVersions**](targimpl_8h.md#function-trktargetversions)([**DSVersions**](struct_d_s_versions.md) \*versions){ versions-&gt; | [**kernelMajor**](#variable-kernelmajor)   = `0`<br> |
|  versions | [**kernelMinor**](#variable-kernelminor)   = `8`<br> |
|  versions | [**protocolMajor**](#variable-protocolmajor)   = `1`<br> |
|  versions | [**protocolMinor**](#variable-protocolminor)   = `10`<br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  u16 | [**TRK\_saved\_exceptionID**](#variable-trk_saved_exceptionid)   = `0`<br> |
|  [**TRKExceptionStatus**](struct_t_r_k_exception_status.md) | [**gTRKExceptionStatus**](#variable-gtrkexceptionstatus)   = `{ { 0, 0, 0 }, TRUE, 0 }`<br> |
|  [**TRKStepStatus**](struct_t_r_k_step_status.md) | [**gTRKStepStatus**](#variable-gtrkstepstatus)   = `{ FALSE, DSSTEP\_IntoCount, 0, 0 }`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  asm void | [**TRKInterruptHandler**](#function-trkinterrupthandler) () <br> |
|  asm void | [**TRKInterruptHandlerEnableInterrupts**](#function-trkinterrupthandlerenableinterrupts) (void) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKPPCAccessFPRegister**](#function-trkppcaccessfpregister) (void \* srcDestPtr, u32 fpr, BOOL read) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKPPCAccessPairedSingleRegister**](#function-trkppcaccesspairedsingleregister) (void \* srcDestPtr, u32 psr, BOOL read) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKPPCAccessSPR**](#function-trkppcaccessspr) (void \* value, u32 spr\_register\_num, BOOL read) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKPPCAccessSpecialReg**](#function-trkppcaccessspecialreg) (void \* value, u32 \* access\_func, BOOL read) <br> |
|  void | [**TRKPostInterruptEvent**](#function-trkpostinterruptevent) (void) <br> |
|  asm void | [**TRKSwapAndGo**](#function-trkswapandgo) () <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetAddExceptionInfo**](#function-trktargetaddexceptioninfo) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetAddStopInfo**](#function-trktargetaddstopinfo) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetCPUType**](#function-trktargetcputype) ([**DSCPUType**](struct_d_s_c_p_u_type.md) \* cpuType) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetFlushCache**](#function-trktargetflushcache) (u8, void \* start, void \* end) <br> |
|  u32 | [**TRKTargetGetPC**](#function-trktargetgetpc) () <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetInterrupt**](#function-trktargetinterrupt) ([**TRKEvent**](struct_t_r_k_event.md) \* event) <br> |
|  void | [**TRKTargetSetInputPendingPtr**](#function-trktargetsetinputpendingptr) (void \* ptr) <br> |
|  void | [**TRKTargetSetStopped**](#function-trktargetsetstopped) (unsigned int stopped) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetSingleStep**](#function-trktargetsinglestep) (u32 count, BOOL stepOver) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetStepOutOfRange**](#function-trktargetstepoutofrange) (u32 rangeStart, u32 rangeEnd, BOOL stepOver) <br> |
|  u32 | [**TRKTargetStop**](#function-trktargetstop) () <br> |
|  BOOL | [**TRKTargetStopped**](#function-trktargetstopped) () <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetSupportMask**](#function-trktargetsupportmask) (u8 mask) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetSupportRequest**](#function-trktargetsupportrequest) () <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  asm void | [**TRKExceptionHandler**](#function-trkexceptionhandler) (u16) <br> |
|  BOOL | [**TRKTargetCheckStep**](#function-trktargetcheckstep) () <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetDoStep**](#function-trktargetdostep) () <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetEnableTrace**](#function-trktargetenabletrace) (BOOL val) <br> |
|  BOOL | [**TRKTargetStepDone**](#function-trktargetstepdone) () <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**DEBUG\_VECTORREG\_ACCESS**](targimpl_8c.md#define-debug_vectorreg_access)  `0`<br> |
| define  | [**DSFetch\_u32**](targimpl_8c.md#define-dsfetch_u32) (\_p\_) `(\*((u32\*)\_p\_))`<br> |
| define  | [**DSFetch\_u64**](targimpl_8c.md#define-dsfetch_u64) (\_p\_) `(\*((u64\*)\_p\_))`<br> |
| define  | [**INSTR\_BLR**](targimpl_8c.md#define-instr_blr)  `0x4E800020`<br> |
| define  | [**INSTR\_LFD**](targimpl_8c.md#define-instr_lfd) (fprDest, offset, rSrc) `ﾂ･`<br> |
| define  | [**INSTR\_LWZ**](targimpl_8c.md#define-instr_lwz) (rDest, offset, rSrc) `ﾂ･`<br> |
| define  | [**INSTR\_MFSPR**](targimpl_8c.md#define-instr_mfspr) (rDest, spr) `ﾂ･`<br> |
| define  | [**INSTR\_MTSPR**](targimpl_8c.md#define-instr_mtspr) (spr, rSrc) `ﾂ･`<br> |
| define  | [**INSTR\_NOP**](targimpl_8c.md#define-instr_nop)  `0x60000000`<br> |
| define  | [**INSTR\_PSQ\_L**](targimpl_8c.md#define-instr_psq_l) (psr, offset, rSrc, w, gqr) `ﾂ･`<br> |
| define  | [**INSTR\_PSQ\_ST**](targimpl_8c.md#define-instr_psq_st) (psr, offset, rDest, w, gqr) `ﾂ･`<br> |
| define  | [**INSTR\_STFD**](targimpl_8c.md#define-instr_stfd) (fprSrc, offset, rDest) `ﾂ･`<br> |
| define  | [**INSTR\_STW**](targimpl_8c.md#define-instr_stw) (rSrc, offset, rDest) `ﾂ･`<br> |
| define  | [**byte**](targimpl_8c.md#define-byte)  `r9`<br> |
| define  | [**count**](targimpl_8c.md#define-count)  `r10`<br> |
| define  | [**msr**](targimpl_8c.md#define-msr)  `r8`<br> |

## Public Types Documentation




### typedef StopInfo\_PPC 

```C++
typedef struct StopInfo_PPC StopInfo_PPC;
```




<hr>



### typedef TRKExceptionStatus 

```C++
typedef struct TRKExceptionStatus TRKExceptionStatus;
```




<hr>



### typedef TRKStepStatus 

```C++
typedef struct TRKStepStatus TRKStepStatus;
```




<hr>



### typedef memRange 

```C++
typedef struct memRange memRange;
```




<hr>



### typedef u128 

```C++
typedef unsigned char u128[16];
```




<hr>
## Public Attributes Documentation




### variable DS\_NoError 

```C++
return DS_NoError;
```




<hr>



### variable TRKvalue128\_temp 

```C++
u128 TRKvalue128_temp;
```




<hr>



### variable gTRKBigEndian 

```C++
BOOL gTRKBigEndian;
```




<hr>



### variable gTRKCPUState 

```C++
ProcessorState_PPC gTRKCPUState;
```




<hr>



### variable gTRKMemMap 

```C++
const memRange gTRKMemMap[1];
```




<hr>



### variable gTRKRestoreFlags 

```C++
ProcessorRestoreFlags_PPC gTRKRestoreFlags;
```




<hr>



### variable gTRKSaveState 

```C++
Default_PPC gTRKSaveState;
```




<hr>



### variable gTRKState 

```C++
TRKState gTRKState;
```




<hr>



### variable kernelMajor 

```C++
psr<< 21) | (rDest << 16) | (w << 15) | (gqr << 12) ﾂ･ | offset)#define INSTR_PSQ_L(psr, offset, rSrc, w, gqr) (0xE0000000 | (psr << 21) | (rSrc << 16) | (w << 15) | (gqr << 12) | offset)#define INSTR_STW(rSrc, offset, rDest) (0x90000000 | (rSrc << 21) | (rDest << 16) | offset)#define INSTR_LWZ(rDest, offset, rSrc) (0x80000000 | (rDest << 21) | (rSrc << 16) | offset)#define INSTR_STFD(fprSrc, offset, rDest) (0xD8000000 | (fprSrc << 21) | (rDest << 16) | offset)#define INSTR_LFD(fprDest, offset, rSrc) (0xC8000000 | (fprDest << 21) | (rSrc << 16) | offset)#define INSTR_MFSPR(rDest, spr) (0x7C000000 | (rDest << 21) | ((spr & 0xFE0) << 6) | ((spr & 0x1F) << 16) ﾂ･ | 0x2A6)#define INSTR_MTSPR(spr, rSrc) (0x7C000000 | (rSrc << 21) | ((spr & 0xFE0) << 6) | ((spr & 0x1F) << 16) ﾂ･ | 0x3A6)#define DSFetch_u32(_p_) #define DSFetch_u64(_p_) DSError TRKPPCAccessSPR(void* value, u32 spr_register_num, BOOL read);DSError TRKPPCAccessPairedSingleRegister(void* srcDestPtr, u32 psr, BOOL read);DSError TRKPPCAccessFPRegister(void* srcDestPtr, u32 fpr, BOOL read);DSError TRKPPCAccessSpecialReg(void* value, u32* access_func, BOOL read);static void TRKExceptionHandler(u16);void TRKInterruptHandlerEnableInterrupts(void);void WriteFPSCR(register f64*);void ReadFPSCR(register f64*);void __TRK_set_MSR(u32 msr);u32 __TRK_get_MSR();static void TRK_ppc_memcpy(register void* dest, register const void* src, register int n, register u32 param_4, register u32 param_5);void TRKRestoreExtended1Block();void TRKUARTInterruptHandler();static BOOL TRKTargetCheckStep();asm u32 __TRK_get_MSR(){ nofralloc mfmsr r3 blr}asm void __TRK_set_MSR(register u32 msr) { nofralloc mtmsr msr blr}DSError TRKValidMemory32(const void* addr, size_t length, ValidMemoryOptions readWriteable){ DSError err = DS_InvalidMemory; const u8* start; const u8* end; s32 i; start = (const u8*)addr; end = ((const u8*)addr + (length - 1)); if (end < start) return DS_InvalidMemory; for (i = 0; (i < (s32)(sizeof(gTRKMemMap) / sizeof(memRange))); i++) { if ((start <= (const u8*)gTRKMemMap[i].end) && (end >= (const u8*)gTRKMemMap[i].start)) { if (((readWriteable == VALIDMEM_Readable) && !gTRKMemMap[i].readable) || ((readWriteable == VALIDMEM_Writeable) && !gTRKMemMap[i].writeable)) { err = DS_InvalidMemory; } else { err = DS_NoError; if (start < (const u8*)gTRKMemMap[i].start) err = TRKValidMemory32( start, (u32)((const u8*)gTRKMemMap[i].start - start), readWriteable); if ((err == DS_NoError) && (end >(const u8*)gTRKMemMap[i].end)) err = TRKValidMemory32( (const u8*)gTRKMemMap[i].end, (u32)(end - (const u8*)gTRKMemMap[i].end), readWriteable); } break; } } return err;}static asm void TRK_ppc_memcpy(register void* dest, register const void* src, register int n, register u32 param_4, register u32 param_5) {#define msr #define byte #define count nofralloc mfmsr msr li count, 0top_loop: cmpw count, n beq out_loop mtmsr param_5 sync lbzx byte, count, src mtmsr param_4 sync stbx byte, count, dest addi count, count, 1 b top_loopout_loop: mtmsr msr sync blr}DSError TRKTargetAccessMemory(void* data, u32 start, size_t* length, MemoryAccessOptions accessOptions, BOOL read){ DSError error; u32 target_msr; void* addr; u32 trk_msr; TRKExceptionStatus tempExceptionStatus = gTRKExceptionStatus; gTRKExceptionStatus.exceptionDetected = FALSE; addr = (void*)TRKTargetTranslate(start); error = TRKValidMemory32(addr, *length, read ? VALIDMEM_Readable : VALIDMEM_Writeable); if (error != DS_NoError) { *length = 0; } else { target_msr = __TRK_get_MSR(); trk_msr = target_msr | gTRKCPUState.Extended1.MSR & 0x10; if (read) { TRK_ppc_memcpy(data, addr, *length, target_msr, trk_msr); } else { TRK_ppc_memcpy(addr, data, *length, trk_msr, target_msr); TRK_flush_cache(addr, *length); if ((void*)start != addr) { TRK_flush_cache((void*)start, *length); } } } if (gTRKExceptionStatus.exceptionDetected) { *length = 0; error = DS_CWDSException; } gTRKExceptionStatus = tempExceptionStatus; return error;}DSError TRKTargetReadInstruction(void* data, u32 start){ DSError error; size_t registersLength = 4; error = TRKTargetAccessMemory(data, start, &registersLength, MEMACCESS_UserMemory, TRUE); if (error == DS_NoError && registersLength != 4) { error = DS_InvalidMemory; } return error;}DSError TRKTargetAccessDefault(u32 firstRegister, u32 lastRegister, TRKBuffer* b, size_t* registersLengthPtr, BOOL read){ DSError error; u32 count; u32* data; TRKExceptionStatus tempExceptionStatus; if (lastRegister > 0x24) { return DS_InvalidRegister; } tempExceptionStatus = gTRKExceptionStatus; data = gTRKCPUState.Default.GPR + firstRegister; count = (lastRegister - firstRegister) + 1; gTRKExceptionStatus.exceptionDetected = FALSE; *registersLengthPtr = count * sizeof(u32); if (read) { error = TRKAppendBuffer_ui32(b, data, count); } else { error = TRKReadBuffer_ui32(b, data, count); } if (gTRKExceptionStatus.exceptionDetected) { *registersLengthPtr = 0; error = DS_CWDSException; } gTRKExceptionStatus = tempExceptionStatus; return error;}DSError TRKTargetAccessFP(u32 firstRegister, u32 lastRegister, TRKBuffer* b, size_t* registersLengthPtr, BOOL read){ u64 temp; DSError error; TRKExceptionStatus tempExceptionStatus; u32 current; if (lastRegister > 0x21) { return DS_InvalidRegister; } tempExceptionStatus = gTRKExceptionStatus; gTRKExceptionStatus.exceptionDetected = FALSE; __TRK_set_MSR(__TRK_get_MSR() | 0x2000); *registersLengthPtr = 0; error = DS_NoError; for (current = firstRegister; (current <= lastRegister) && (error == DS_NoError); current++, *registersLengthPtr += sizeof(f64)) { if (read) { TRKPPCAccessFPRegister(&temp, current, read); error = TRKAppendBuffer1_ui64(b, temp); } else { TRKReadBuffer1_ui64(b, &temp); error = TRKPPCAccessFPRegister(&temp, current, read); } } if (gTRKExceptionStatus.exceptionDetected) { *registersLengthPtr = 0; error = DS_CWDSException; } gTRKExceptionStatus = tempExceptionStatus; return error;}DSError TRKTargetAccessExtended1(u32 firstRegister, u32 lastRegister, TRKBuffer* b, size_t* registersLengthPtr, BOOL read){ TRKExceptionStatus tempExceptionStatus; int error; u32* data; int count; if (lastRegister > 0x60) { return DS_InvalidRegister; } tempExceptionStatus = gTRKExceptionStatus; gTRKExceptionStatus.exceptionDetected = FALSE; *registersLengthPtr = 0; if (firstRegister <= lastRegister) { data = (u32*)&gTRKCPUState.Extended1 + firstRegister; count = lastRegister - firstRegister + 1; *registersLengthPtr += count * sizeof(u32); if (read) { error = TRKAppendBuffer_ui32(b, data, count); } else { if (data <= &gTRKCPUState.Extended1.TBU && (data + count - 1) >= &gTRKCPUState.Extended1.TBL) { gTRKRestoreFlags.TBR = 1; } if (data <= &gTRKCPUState.Extended1.DEC && (data + count - 1) >= &gTRKCPUState.Extended1.DEC) { gTRKRestoreFlags.DEC = 1; } error = TRKReadBuffer_ui32(b, data, count); } } if (gTRKExceptionStatus.exceptionDetected) { *registersLengthPtr = 0; error = DS_CWDSException; } gTRKExceptionStatus = tempExceptionStatus; return error;}DSError TRKTargetAccessExtended2(u32 firstRegister, u32 lastRegister, TRKBuffer* b, size_t* registerStorageSize, BOOL read){ TRKExceptionStatus savedException; u32 i; u32 value_buf0[1]; u32 value_buf[2]; DSError err; u32 access_func[10]; if (lastRegister > 0x1f) return DS_InvalidRegister; savedException = gTRKExceptionStatus; gTRKExceptionStatus.exceptionDetected = FALSE; TRKPPCAccessSPR(value_buf0, SPR_HID2, TRUE); value_buf0[0] |= 0xA0000000; TRKPPCAccessSPR(value_buf0, SPR_HID2, FALSE); value_buf0[0] = 0; TRKPPCAccessSPR(value_buf0, SPR_GQR0, FALSE); *registerStorageSize = 0; err = DS_NoError; for (i = firstRegister; (i <= lastRegister) && (err == DS_NoError); i++) { if (read) { err = TRKPPCAccessPairedSingleRegister((u64*)value_buf, i, read); err = TRKAppendBuffer1_ui64(b, *(u64*)value_buf); } else { err = TRKReadBuffer1_ui64(b, (u64*)value_buf); err = TRKPPCAccessPairedSingleRegister((u64*)value_buf, i, read); } *registerStorageSize += sizeof(u64); } if (gTRKExceptionStatus.exceptionDetected) { *registerStorageSize = 0; err = DS_CWDSException; } gTRKExceptionStatus = savedException; return err;}DSError TRKTargetVersions(DSVersions* versions){ versions-> kernelMajor;
```




<hr>



### variable kernelMinor 

```C++
versions kernelMinor;
```




<hr>



### variable protocolMajor 

```C++
versions protocolMajor;
```




<hr>



### variable protocolMinor 

```C++
versions protocolMinor;
```




<hr>
## Public Static Attributes Documentation




### variable TRK\_saved\_exceptionID 

```C++
u16 TRK_saved_exceptionID;
```




<hr>



### variable gTRKExceptionStatus 

```C++
TRKExceptionStatus gTRKExceptionStatus;
```




<hr>



### variable gTRKStepStatus 

```C++
TRKStepStatus gTRKStepStatus;
```




<hr>
## Public Functions Documentation




### function TRKInterruptHandler 

```C++
asm void TRKInterruptHandler () 
```




<hr>



### function TRKInterruptHandlerEnableInterrupts 

```C++
asm void TRKInterruptHandlerEnableInterrupts (
    void
) 
```




<hr>



### function TRKPPCAccessFPRegister 

```C++
DSError TRKPPCAccessFPRegister (
    void * srcDestPtr,
    u32 fpr,
    BOOL read
) 
```




<hr>



### function TRKPPCAccessPairedSingleRegister 

```C++
DSError TRKPPCAccessPairedSingleRegister (
    void * srcDestPtr,
    u32 psr,
    BOOL read
) 
```




<hr>



### function TRKPPCAccessSPR 

```C++
DSError TRKPPCAccessSPR (
    void * value,
    u32 spr_register_num,
    BOOL read
) 
```




<hr>



### function TRKPPCAccessSpecialReg 

```C++
DSError TRKPPCAccessSpecialReg (
    void * value,
    u32 * access_func,
    BOOL read
) 
```




<hr>



### function TRKPostInterruptEvent 

```C++
void TRKPostInterruptEvent (
    void
) 
```




<hr>



### function TRKSwapAndGo 

```C++
asm void TRKSwapAndGo () 
```




<hr>



### function TRKTargetAddExceptionInfo 

```C++
DSError TRKTargetAddExceptionInfo (
    TRKBuffer * buffer
) 
```




<hr>



### function TRKTargetAddStopInfo 

```C++
DSError TRKTargetAddStopInfo (
    TRKBuffer * buffer
) 
```




<hr>



### function TRKTargetCPUType 

```C++
DSError TRKTargetCPUType (
    DSCPUType * cpuType
) 
```




<hr>



### function TRKTargetFlushCache 

```C++
DSError TRKTargetFlushCache (
    u8,
    void * start,
    void * end
) 
```




<hr>



### function TRKTargetGetPC 

```C++
u32 TRKTargetGetPC () 
```




<hr>



### function TRKTargetInterrupt 

```C++
DSError TRKTargetInterrupt (
    TRKEvent * event
) 
```




<hr>



### function TRKTargetSetInputPendingPtr 

```C++
void TRKTargetSetInputPendingPtr (
    void * ptr
) 
```




<hr>



### function TRKTargetSetStopped 

```C++
void TRKTargetSetStopped (
    unsigned int stopped
) 
```




<hr>



### function TRKTargetSingleStep 

```C++
DSError TRKTargetSingleStep (
    u32 count,
    BOOL stepOver
) 
```




<hr>



### function TRKTargetStepOutOfRange 

```C++
DSError TRKTargetStepOutOfRange (
    u32 rangeStart,
    u32 rangeEnd,
    BOOL stepOver
) 
```




<hr>



### function TRKTargetStop 

```C++
u32 TRKTargetStop () 
```




<hr>



### function TRKTargetStopped 

```C++
BOOL TRKTargetStopped () 
```




<hr>



### function TRKTargetSupportMask 

```C++
DSError TRKTargetSupportMask (
    u8 mask
) 
```




<hr>



### function TRKTargetSupportRequest 

```C++
DSError TRKTargetSupportRequest () 
```




<hr>
## Public Static Functions Documentation




### function TRKExceptionHandler 

```C++
static asm void TRKExceptionHandler (
    u16
) 
```




<hr>



### function TRKTargetCheckStep 

```C++
static BOOL TRKTargetCheckStep () 
```




<hr>



### function TRKTargetDoStep 

```C++
static DSError TRKTargetDoStep () 
```




<hr>



### function TRKTargetEnableTrace 

```C++
static DSError TRKTargetEnableTrace (
    BOOL val
) 
```




<hr>



### function TRKTargetStepDone 

```C++
static BOOL TRKTargetStepDone () 
```




<hr>
## Macro Definition Documentation





### define DEBUG\_VECTORREG\_ACCESS 

```C++
#define DEBUG_VECTORREG_ACCESS `0`
```




<hr>



### define DSFetch\_u32 

```C++
#define DSFetch_u32 (
    _p_
) `(*((u32*)_p_))`
```




<hr>



### define DSFetch\_u64 

```C++
#define DSFetch_u64 (
    _p_
) `(*((u64*)_p_))`
```




<hr>



### define INSTR\_BLR 

```C++
#define INSTR_BLR `0x4E800020`
```




<hr>



### define INSTR\_LFD 

```C++
#define INSTR_LFD (
    fprDest,
    offset,
    rSrc
) `ﾂ･`
```




<hr>



### define INSTR\_LWZ 

```C++
#define INSTR_LWZ (
    rDest,
    offset,
    rSrc
) `ﾂ･`
```




<hr>



### define INSTR\_MFSPR 

```C++
#define INSTR_MFSPR (
    rDest,
    spr
) `ﾂ･`
```




<hr>



### define INSTR\_MTSPR 

```C++
#define INSTR_MTSPR (
    spr,
    rSrc
) `ﾂ･`
```




<hr>



### define INSTR\_NOP 

```C++
#define INSTR_NOP `0x60000000`
```




<hr>



### define INSTR\_PSQ\_L 

```C++
#define INSTR_PSQ_L (
    psr,
    offset,
    rSrc,
    w,
    gqr
) `ﾂ･`
```




<hr>



### define INSTR\_PSQ\_ST 

```C++
#define INSTR_PSQ_ST (
    psr,
    offset,
    rDest,
    w,
    gqr
) `ﾂ･`
```




<hr>



### define INSTR\_STFD 

```C++
#define INSTR_STFD (
    fprSrc,
    offset,
    rDest
) `ﾂ･`
```




<hr>



### define INSTR\_STW 

```C++
#define INSTR_STW (
    rSrc,
    offset,
    rDest
) `ﾂ･`
```




<hr>



### define byte 

```C++
#define byte `r9`
```




<hr>



### define count 

```C++
#define count `r10`
```




<hr>



### define msr 

```C++
#define msr `r8`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/MetroTRK/Src/Processor/ppc/Generic/targimpl.c`

