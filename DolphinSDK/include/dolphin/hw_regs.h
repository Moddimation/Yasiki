#ifndef _DOLPHIN_HW_REGS_H_
#define _DOLPHIN_HW_REGS_H_

#include <types.h>

// Register base adresses

#ifdef __MWERKS__
volatile u32 __RAMRegs[] AT_ADDRESS (0x80000000); // RAM Register
volatile u16 __CPRegs[] AT_ADDRESS (0xCC000000);  // Command Processor Register
volatile u16 __PERegs[] AT_ADDRESS (0xCC001000);  // Pixel Engine Register
volatile u16 __VIRegs[] AT_ADDRESS (0xCC002000);  // Video Interface Register
volatile u32 __PIRegs[] AT_ADDRESS (0xCC003000);  // Process Interrupt Register
volatile u16 __MIRegs[] AT_ADDRESS (0xCC004000);  // Memory Interrupt Register
volatile u16 __DSPRegs[] AT_ADDRESS (0xCC005000); // Digital Signal Processor Register
volatile u32 __DIRegs[] AT_ADDRESS (0xCC006000);  // DVD Interface Register
volatile u32 __SIRegs[] AT_ADDRESS (0xCC006400);  // Serial Interface Register
volatile u32 __EXIRegs[] AT_ADDRESS (0xCC006800); // External Interface Register
volatile u32 __AIRegs[] AT_ADDRESS (0xCC006C00);  // Audio Interface Register
volatile u8  __GXRegs[] AT_ADDRESS (0xCC008000);  // Graphics FIFO Register
#else
volatile u32* __RAMRegs; // RAM Register
volatile u16* __CPRegs;  // Command Processor Register
volatile u16* __PERegs;  // Pixel Engine Register
volatile u16* __VIRegs;  // Video Interface Register
volatile u32* __PIRegs;  // Process Interrupt Register
volatile u16* __MIRegs;  // Memory Interrupt Register
volatile u16* __DSPRegs; // Digital Signal Processor Register
volatile u32* __DIRegs;  // DVD Interface Register
volatile u32* __SIRegs;  // Serial Interface Register
volatile u32* __EXIRegs; // External Interface Register
volatile u32* __AIRegs;  // Audio Interface Register
volatile u8*  __GXRegs;  // Graphics FIFO Register
#endif

// Register offsets

//
// offsets for RAM Regs
//
#define RAM_DVD_INFO                (0)  // dvd information
#define RAM_DVD_MAGIC_WORD          (7)  // dvd magic word
#define RAM_MAGIC_WORD              (8)  // magic word (how did the console boot?)
#define RAM_VERSION                 (9)  // version
#define RAM_PHYS_MEM_SIZE           (10) // physical memory size
#define RAM_CONSOLE_TYPE            (11) // console type
#define RAM_ARENA                   (12) // arealo (==0x00000000)
#define RAM_ARENA_U                 (13) // areahi (==0x817FE8C0)
#define RAM_FST_POS                 (14) // fsr location in ram (==0x817FE8C0)
#define RAM_FST_MAX_LENGTH          (15) // fsr max length (==0x24)
#define RAM_DBG_FLAG                (16) // flag for "debugger present" (used by __OSIsDebuggerPresent)
#define RAM_DBG_EXCEPT_MASK         (17)   // debugger exception bitmap, set to  at sdk lib start
#define RAM_DBG_EXCEPT_HOOK_DEST    (18)   // exception hook destination (physical address)
#define RAM_DBG_LR_TEMP             (19)   // debug load register temp
#define RAM_DBG_HOOK_PTR            (24)   // debug hook ptr
#define RAM_OS_CONTX_PHYS_CURR      (48)   // current os context (physical address)
#define RAM_OS_INT_MASK_PREV        (49)   // previous os interrupt mask
#define RAM_OS_INT_MASK_CURR        (50)   // current os interrupt mask
#define RAM_TV_MODE                 (51)   // tv mode
#define RAM_ARAM_SIZE               (52)   // aram size (intenal+expansion) in bytes
#define RAM_OS_CONTEXT_LOGICAL_CURR (53)   // current os context (logical address)
#define RAM_OS_THREAD_LOGICAL_DEF   (54)   // default os thread (logical address)
#define RAM_OS_THREAD_ACTIVE_HEAD   (55)   // active thread queue, head thread (logical address)
#define RAM_OS_THREAD_ACTIVE_TAIL   (56)   // active thread queue, tail thread (logical address)
#define RAM_OS_THREAD_CURRENT       (56)   // current os thread
#define RAM_DBG_MONITOR_SIZE        (57)   // debug monitor size (in bytes)
#define RAM_DBG_MONITOR_PTR         (58)   // debug monitor location (usually at the top of main)
#define RAM_VIRT_MEM_SIZE           (60)   // console simulated memory size, 0x018000000
#define RAM_DVD_BI2_POS             (61)   // DVD BI2 location in main memory
#define RAM_BUS_CLOCK_SPEED         (62)   // bus clock speed, 162 MHz
#define RAM_CPU_CLOCK_SPEED         (63)   // cpu clock speed, 486 MHz

#define RAM_IRQ_RESET               (64)   // system reset interrupt
#define RAM_IRQ_MACHINECHECK        (128)  // machine check interrupt
#define RAM_IRQ_DSI                 (192)  // dsi interrupt
#define RAM_IRQ_ISI                 (256)  // isi interrupt
#define RAM_IRQ_EXT                 (320)  // external interrupt
#define RAM_IRQ_ALIGN               (284)  // alignment interrupt
#define RAM_IRQ_PROG                (448)  // program interrupt
#define RAM_IRQ_FP_UNAVAIL          (512)  // fp unavailable interrupt
#define RAM_IRQ_DECREMENTER         (576)  // decrementer interrupt
#define RAM_IRQ_SYSCALL             (768)  // system call interrupt
#define RAM_IRQ_TRACE               (832)  // trace interrupt
#define RAM_IRQ_PERFORMANCE_MONITOR (960)  // performance monitor interrupt
#define RAM_IRQ_IABR                (1216) // iabr interrupt
#define RAM_IRQ_THERMAL             (1472) // thermal interrupt

//
// offsets for CP Regs
//
#define CP_SR                       (0)  // status registro (ro)
#define CP_CR                       (1)  // control register (ro)

#define CP_CLEAR                    (2)  // clear register
#define CP_TOKEN                    (4)  // token register

#define CP_BBLEFT                   (8)  // bounding box - left
#define CP_BBRIGHT                  (9)  // bounding box - right
#define CP_BBTOP                    (10) // bounding box - top
#define CP_BBBOTTOM                 (11) // bounding box - bottom

#define CP_FIFO_BASE                (16) // fifo base L
#define CP_FIFO_BASE_U              (17) // fifo base U

#define CP_FIFO_END                 (18) // fifo end L
#define CP_FIFO_END_U               (19) // fifo end U

#define CP_FIFO_HIGH_MARK           (20) // fifo high watermark L
#define CP_FIFO_HIGH_MARK_U         (21) // fifo high watermark U

#define CP_FIFO_LOW_MARK            (22) // fifo low watermark L
#define CP_FIFO_LOW_MARK_U          (23) // fifo low watermark U

#define CP_FIFO_DIST                (24) // fifo r/w distance L
#define CP_FIFO_DIST_U              (25) // fifo r/w distance U

#define CP_FIFO_WRITE               (26) // fifo write ptr L
#define CP_FIFO_WRITE_U             (27) // fifo write ptr U

#define CP_FIFO_READ                (28) // fifo read ptr L
#define CP_FIFO_READ_U              (29) // fifo read ptr U

#define CP_FIFO_BP                  (30) // fifo bp L
#define CP_FIFO_BP_U                (31) // fifo bp U

//
// offsets for PE Regs
//
#define PE_PI_ZMODE_ID              (0x00) // z configuration
#define PE_PI_CMODE0_ID             (0x01) // alpha configuration
#define PE_PI_CMODE1_ID             (0x02) // destination alpha
#define PE_PI_ALPHA_THRESHOLD_ID    (0x03) // alpha mode
#define PE_PI_CTL_ID                (0x04) // alpha read
#define PE_PI_INTRCTL_ID            (0x05) // interrupt status register
#define PE_PI_INTRSTAT_ID           (0x06) // interrupt status register
#define PE_PI_TOKEN_ID              (0x07) // pe token
#define PE_PI_XBOUND0_ID            (0x08) //
#define PE_PI_XBOUND1_ID            (0x09) //
#define PE_PI_YBOUND0_ID            (0x0A) //
#define PE_PI_YBOUND1_ID            (0x0B) //

//
// offsets for VI Regs
//
#define VI_VERT_TIMING              (0)  // vertical timing
#define VI_DISP_CONFIG              (1)  // display configuration

#define VI_HORIZ_TIMING_0           (2)  // horizontal timing 0
#define VI_HORIZ_TIMING_0_U         (3)  // horizontal timing 0
#define VI_HORIZ_TIMING_1           (4)  // horitonral timing 1
#define VI_HORIZ_TIMING_1_U         (5)  // horitonral timing 1

#define VI_VERT_TIMING_ODD          (6)  // odd field vertical timing
#define VI_VERT_TIMING_ODD_U        (7)  // odd field vertical timing
#define VI_VERT_TIMING_EVEN         (8)  // even field vertical timing
#define VI_VERT_TIMING_EVEN_U       (9)  // even field vertical timing

#define VI_BBI_ODD                  (10) // odd field burst blanking interval
#define VI_BBI_ODD_U                (11) // odd field burst blanking interval
#define VI_BBI_EVEN                 (12) // even field burst blanking interval
#define VI_BBI_EVEN_U               (13) // even field burst blanking interval

#define VI_TOP_FIELD_BASE_LEFT      (14) // top field (l)(ext fb half 1)
#define VI_TOP_FIELD_BASE_LEFT_U    (15) // top field (l)(ext fb half 1)
#define VI_TOP_FIELD_BASE_RIGHT     (16) // top field (r)(only valid in 3d mode)
#define VI_TOP_FIELD_BASE_RIGHT_U   (17) // top field (r)(only valid in 3d mode)
#define VI_BTTM_FIELD_BASE_LEFT     (18) // bot field (l)(ext fb half 2)
#define VI_BTTM_FIELD_BASE_LEFT_U   (19) // bot field (l)(ext fb half 2)
#define VI_BTTM_FIELD_BASE_RIGHT    (20) // bot field (r)(only valid in 3d mode)
#define VI_BTTM_FIELD_BASE_RIGHT_U  (21) // bot field (r)(only valid in 3d mode)

#define VI_VERT_COUNT               (22) // current vertical position
#define VI_HORIZ_COUNT              (23) // current horizontal position

#define VI_DISP_INT_0               (24) // display interrupt 0L
#define VI_DISP_INT_0_U             (25) // display interrupt 0U
#define VI_DISP_INT_1               (26) // display interrupt 1L
#define VI_DISP_INT_1_U             (27) // display interrupt 1U
#define VI_DISP_INT_2               (28) // display interrupt 2L
#define VI_DISP_INT_2_U             (29) // display interrupt 2U
#define VI_DISP_INT_3               (30) // display interrupt 3L
#define VI_DISP_INT_3_U             (31) // display interrupt 3U

#define VI_DISP_LAT_0               (32) // display latch 0
#define VI_DISP_LAT_1               (34) // display latch 1

#define VI_HSW                      (36) // scaling width
#define VI_HSR                      (37) // horizontal scaling

#define VI_FCT_0                    (38) // filter coefficient table 0L
#define VI_FCT_0_U                  (39) // filter coefficient table 0U
#define VI_FCT_1                    (40) // filter coefficient table 1L
#define VI_FCT_1_U                  (41) // filter coefficient table 1U
#define VI_FCT_2                    (42) // filter coefficient table 2L
#define VI_FCT_2_U                  (43) // filter coefficient table 2U
#define VI_FCT_3                    (44) // filter coefficient table 3L
#define VI_FCT_3_U                  (45) // filter coefficient table 3U
#define VI_FCT_4                    (46) // filter coefficient table 4L
#define VI_FCT_4_U                  (47) // filter coefficient table 4U
#define VI_FCT_5                    (48) // filter coefficient table 5L
#define VI_FCT_5_U                  (49) // filter coefficient table 5U
#define VI_FCT_6                    (50) // filter coefficient table 6L
#define VI_FCT_6_U                  (51) // filter coefficient table 6U

#define VI_CLOCK_SEL                (54) // clock select (for progressive mode)
#define VI_DTV_STAT                 (55) // dtv status (read io pins)

#define VI_WIDTH                    (56)

#define VI_HBE                      (57) // border horizontal blank end (for dbg mode)
#define VI_HBS                      (58) // border horizontal blank start (for dbg mode)

#define VI_XFB1                     VI_TOP_FIELD_BASE_LEFT
#define VI_XFB2                     VI_BTTM_FIELD_BASE_LEFT
#define VI_HLINE                    VI_VERT_COUNT

//
// offsets for PI Regs
//
#define PI_INTSR                    (0) // interrupt cause
#define PI_INTMR                    (1) // interrupt mask

#define PI_FIFO_BASE_START          (2) // fifo base start
#define PI_FIFO_BASE_END            (3) // fifo base end
#define PI_FIFO_WRITE_PTR           (4) // pi (cpu) fifo write pointer

#define PI_ESR                      (5) // exception ? register
#define PI_EAR                      (6) // exception ? register

#define PI_RESET                    (7) // reset (write = full reset)
#define PI_TYPE                     (8) // hw type?
#define PI_RESET_CODE               (9)

//
// offsets for MI Regs
//
#define MI_PROT_1                   (0)  // protected region 1
#define MI_PROT_2                   (1)  // protected region 2
#define MI_PROT_3                   (2)  // protected region 3
#define MI_PROT_4                   (3)  // protected region 4
#define MI_PROT_TYPE                (4)  // type of protection

#define MI_INT_MASK                 (6)  // mi interrupt mask
#define MI_INT_CAUSE                (7)  // mi interrupt cause

#define MI_ACK                      (8)  // aaackK!!!

#define MI_REG_U                    (10) // address, which failed protection rules L
#define MI_REG                      (9)  // address, which failed protection rules U

//
// offsets for DSP Regs
//
#define DSP_MAILBOX_IN              (0)  // mailbox in L (to dsp from cpu)
#define DSP_MAILBOX_IN_U            (1)  // mailbox in U (to dsp from cpu)
#define DSP_MAILBOX_OUT             (2)  // mailbox out L (to cpu from dsp)
#define DSP_MAILBOX_OUT_U           (3)  // mailbox out U (to cpu from dsp)
#define DSP_CSR                     (5)  // control status registe

#define DSP_AR_SIZE                 (9)  // aram size
#define DSP_AR_MODE                 (11) // aram mode
#define DSP_AR_REFRESH              (13) // aram refresh
#define DSP_AR_DMA_MM               (16) // main mem address L
#define DSP_AR_DMA_MM_U             (17) // main mem address U
#define DSP_AR_DMA_ARAM             (18) // aram address L
#define DSP_AR_DMA_ARAM_U           (19) // aram address U
#define DSP_AR_DMA_SIZE             (20) // dma buffer size L
#define DSP_AR_DMA_SIZE_U           (21) // dma buffer size U

#define DSP_DMA_START               (24) // dma start address L
#define DSP_DMA_START_U             (25) // dma start address U
#define DSP_DMA_CONTROL_LEN         (27) // dma control/length
#define DSP_DMA_BYTES_LEFT          (29) // dma bytes left

//
// offsets for DI Regs
//
#define DI_SR                       (0) // di status register
#define DI_CVR                      (1) // di cover register

#define DI_CMDBUF_0                 (2) // di command buffer 0
#define DI_CMDBUF_1                 (3) // di command buffer 1
#define DI_CMDBUF_2                 (4) // di command buffer 2

#define DI_MAR                      (5) // di dma memory address register
#define DI_LENGTH                   (6) // di dma transger length register

#define DI_CR                       (7) // di control register
#define DI_IMMBUF                   (8) // di immediate data buffer
#define DI_CFG                      (9) // di configuration register

//
// offsets for SI Regs
//
#define SI_C0_OUTBUF                (0)  // si channel 0 output buffer (joy-channel 1 command)
#define SI_C0_INBUF                 (1)  // joy-channel 1 buttons L
#define SI_C0_INBUF_U               (2)  // joy-channel 1 buttons U

#define SI_C1_OUTBUF                (3)  // si channel 1 output buffer (joy-channel 2 command)
#define SI_C1_INBUF                 (4)  // joy-channel 1 buttons L
#define SI_C1_INBUF_U               (5)  // joy-channel 1 buttons U

#define SI_C2_OUTBUF                (6)  // si channel 2 output buffer (joy-channel 3 command)
#define SI_C2_INBUF                 (7)  // joy-channel 1 buttons L
#define SI_C2_INBUF_U               (8)  // joy-channel 1 buttons U

#define SI_C3_OUTBUF                (9)  // si channel 3 output buffer (joy-channel 4 command)
#define SI_C3_INBUF                 (10) // joy-channel 1 buttons L
#define SI_C3_INBUF_U               (11) // joy-channel 1 buttons U

#define SI_POLL                     (12) // si poll register (joy-channek control)
#define SI_COMCSR                   (13) // si communication control status register (command)
#define SI_SR                       (14) // si status register (channel select & status2)
#define SI_EXILK                    (15) // si exi clock lock
#define SI_BUFFER                   (16) // si i/o buffer (access by word)

//
// offsets for EXI Regs
//
#define EXI_C0_SR                   (0)  // exi channel 0 parameter register
#define EXI_C0_MAR                  (1)  // exi channel 0 dma start address
#define EXI_C0_LENGTH               (2)  // exi channel 0 dma transfer length
#define EXI_C0_CR                   (3)  // exi channel 0 control register
#define EXI_C0_DATA                 (4)  // exi channel 0 immediate data

#define EXI_C1_SR                   (5)  // exi channel 1 parameter register
#define EXI_C1_MAR                  (6)  // exi channel 1 dma start address
#define EXI_C1_LENGTH               (7)  // exi channel 1 dma transfer length
#define EXI_C1_CR                   (8)  // exi channel 1 control register
#define EXI_C1_DATA                 (9)  // exi channel 1 immediate data

#define EXI_C2_SR                   (10) // exi channel 2 parameter register
#define EXI_C2_MAR                  (11) // exi channel 2 dma start address
#define EXI_C2_LENGTH               (12) // exi channel 2 dma transfer length
#define EXI_C2_CR                   (13) // exi channel 2 control register
#define EXI_C2_DATA                 (14) // exi channel 2 immediate data

//
// offsets for AI Regs
//
#define AI_CR                       (0) // ai control register
#define AI_VR                       (1) // ai volume register
#define AI_SCNT                     (2) // ai sample counter
#define AI_IT                       (3) // ai interface timing

#endif
