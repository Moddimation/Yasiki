////////////////////////////////////////////////////////////////////////
// 8xx MBXa Initialization Routine
//
// Function: adsinit
//         The MBXa board will be initialized as below
//
// Input Registers:
//       None
// Output Registers:
//       R8 contains the content of DC_CST before entering
//          usr_init()
//       R3, R4, R5 and R6 will be destroyed
//	R2 must be preserved
//
//////////////////////////////////////////////////////////////////////////////////////////////////
// Register Offset Definitions
//
// All these registers are offset from the pointer pointed to
// by the IMMR in MPC821.
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#define TARGET_SYSTEM_FREQUENCY 50            // Target System Frequency

#define SDCR                    0x0030        // SDMA Configuration Register
#define CPCR                    0x09c0        // CPM Command Reg.
#define CICR                    0x0940        // CP Interrupt Configuration Register
#define CIPR                    0x0944        // CP Interrupt Pending Register
#define CIMR                    0x0948        // CP Interrupt Mask Register
#define BRGC1                   0x09f0        // BRG1 Configuration Reg.
#define PBPAR                   0x0abc        // Port B Pin Assignment Reg.
#define PBDIR                   0x0ab8        // Port B Data Direction Reg.
#define PBODR                   0x0ac2        // Port B Open Drain Reg.
#define PCPAR                   0x0962        // Port C Pin Assignment Reg.
#define PCDIR                   0x0960        // Port C Data Direction Reg.
#define PCSO                    0x0964        // Port C Special Option
#define SIMODE                  0x0ae0        // SI Mode Reg.
#define SMC1RBAS                0x3e80 + 0x00 // Rx BD Base Address
#define SMC1TBAS                0x3e80 + 0x02 // Tx BD Base Address
#define SMC1RFCR                0x3e80 + 0x04 // Rx Function Code
#define SMC1TFCR                0x3e80 + 0x05 // Tx Function Code
#define SMC1MRBL                0x3e80 + 0x06 // Max. Receive Buffer Length
#define SMC1RBPTR               0x3e80 + 0x10 // Rx Buffer Descriptor Pointer
#define SMC1TBPTR               0x3e80 + 0x20 // Tx Buffer Descriptor Pointer
#define SMC1MAXI                0x3e80 + 0x28 // Max. Idle Character
#define SMC1BRKL                0x3e80 + 0x2c // Last Received Break Length
#define SMC1BRKE                0x3e80 + 0x2e // Receive Break Condition Counter
#define SMC1BRKC                0x3e80 + 0x30 // Break Count Register
#define SMCMR1                  0x0a82        // SMC1 Mode Register
#define SMCE1                   0x0a86        // SMC1 Event Register
#define SMCM1                   0x0a8a        // SMC1 Mask Register
#define SICR                    0x0aec        // SI Clock Route
#define Rxbd                    0x2800        // Rx Buffer Descriptor Offset
#define Txbd                    0x2808        // Tx Buffer Descriptor Offset
#define Rxbuf                   0x2810        // offset 810 from Dual Port Ram
#define Txbuf                   0x2820        // offset 820 from Dual Port Ram

// On-Chip Core Registers

#define ICR                     148 // Interrupt Cause Register
#define ICTRL                   158 // Instruction Control Register
#define DER                     149 // Debug Enable Register
#define TB_WRITE                284 // Write Lower Timebase
#define TBU_WRITE               285 // Write Upper Timebase
#define DPDR                    630 // Development Port Data Register
#define IMMR                    638 // Internal I/O base register
#define IC_CST                  560 // ICache Control Status Register
#define IC_ADR                  561 // ICache Address Register
#define IC_DAT                  562 // ICache Data Register
#define DC_CST                  568 // DCache Control Status Register
#define DC_ADR                  569 // DCache Address Register
#define DC_DAT                  570 // DCache Data Register

// On-Chip Registers
#define SIUMCR                  0x000 // SIU Module configuration
#define SYPCR                   0x004 // SIU System Protection Control
#define SIEL                    0x018 // SIU Interrupt Edge Level Mask Register
#define TESR                    0x020 // Transfer Error Status Register
#define BR0                     0x100 // Base Register 	0
#define OR0                     0x104 // Option Register 	0
#define BR1                     0x108 // Base Register 	1
#define OR1                     0x10C // Option Register 	1
#define BR2                     0x110 // Base Register	2
#define OR2                     0x114 // Option Register 	2
#define BR3                     0x118 // Base Register 	3
#define OR3                     0x11C // Option Register 	3
#define BR4                     0x120 // Base Register 	4
#define OR4                     0x124 // Option Register 	4
#define BR5                     0x128 // Base Register 	5
#define OR5                     0x12C // Option Register 	5
#define BR6                     0x130 // Base Register 	6
#define OR6                     0x134 // Option Register 	6
#define BR7                     0x138 // Base Register 	7
#define OR7                     0x13C // Option Register 	7
#define MAR                     0x164
#define MCR                     0x168 // Memory Command
#define MAMR                    0x170 // Machine A Mode Register
#define MBMR                    0x174 // Machine B Mode Register
#define MPTPR                   0x17A // Memory Periodic Timer Prescaler
#define MDR                     0x17C // Memory Data
#define TBSCR                   0x200 // Time Base Status and Control Regsiter
#define RTCSC                   0x220 // Real Timer Clock Status and Control
#define PISCR                   0x240 // PIT Status and Control
#define SCCR                    0x280 // System Clock Control Register
#define PLPRCR                  0x284 // PLL, Low power & Reset Control Register
#define RTCSCK                  0x320 // Real-Time Clock Status and Control Register Key
#define RTCK                    0x324 // Real-Time Clock Register Key
#define RTCECK                  0x328 // Real-Time Alarm Seconds Key
#define RTCALK                  0x32C // Real-Time Alarm Register Key

// Instruction and Data Cache definition
// Note: must use with lis instruction to load into bit 0-15
#define CacheUnlockAllCmd       0x0A00 // Cache Unlock_All command
#define CacheDisableCmd         0x0400 // Cache Disable command
#define CacheInvAllCmd          0x0C00 // Cache Invalidate_All command
#define CacheEnableCmd          0x0200 // DCache_Enable Command
#define CacheEnableBit          0x8000 // Cache Enable bit in I/DC_CST

#pragma section all_types                                                                                              \
    ".init"                                                                                                            \
    ".init"

#ifdef __cplusplus
extern "C"
{
#endif

void        __reset(void);
extern void __start();

#ifdef __cplusplus
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// UPM Table
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// UPM contents for the default MBX memory configuration:
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned long UpmATable[] = {
// /* DRAM 60ns - single read. (offset 0 in upm RAM) */
              0xEFFFE004, 0x0FFFE004, 0x0EEFAC04
              0x00AF2C04, 0x03AF2C08, 0xFFFFEC07
        	   0xFFFFEC07, 0xFFFFEC07

// /* DRAM 60ns - burst read. (offset 8 in upm RAM) */
              0xEFFFE004, 0x0FFFE004, 0x0EEFAC04
              0x00AF2C04, 0x03AF2C08, 0x0CAF2C04
              0x00AF2C04, 0x03AF2C08, 0x0CAF2C04
              0x00AF2C04, 0x03AF2C08, 0x0CAF2C04
		      0x00AF2C04, 0x03AF2C08, 0xFFFFEC07
		      0xFFFFEC07

// /* DRAM 60ns - single write. (offset 18 in upm RAM) */
   		      0xEFFFE004, 0x0FFFA004, 0x0EFF2C04
   		      0x00FF2C00, 0xFFFFEC07, 0xFFFFEC07
   		      0xFFFFEC07, 0xFFFFEC07

// /* DRAM 60ns - burst write. (offset 20 in upm RAM) */
   		      0xEFFFE004, 0x0FFFA004, 0x0EFF2C04
   		      0x00FF2C00, 0x0FFF2C0C, 0x0CFF2C00
   		      0x03FF2C0C, 0x0CFF2C00, 0x03FF2C0C
   		      0x0CFF2C00, 0x33FF6C07, 0xFFFFEC07
   		      0xFFFFEC07, 0xFFFFEC07, 0xFFFFEC07
   		      0xFFFFEC07

// /* refresh 60ns. (offset 30 in upm RAM) */
  		      0xF0FFEC04, 0x00FFEC04, 0x0FFFEC04
  		      0x0FFFEC04, 0xFFFFEC07, 0xFFFFEC07
  		      0xFFFFEC07, 0xFFFFEC07, 0xFFFFEC07
  		      0xFFFFEC07, 0xFFFFEC07, 0xFFFFEC07
 
// /* exception. (offset 3c in upm RAM) */
  		      0xFFFFEC07, 0xFFFFEC07, 0xFFFFEC07
  		      0xFFFFEC07 }
  		      
asm void __reset_ROM()
{
    nofralloc

        tlbia       // invalidate all cache entries
            tlbsync // wait for tlbia to complete
                b __start
}

asm void
__reset(void)
{
    //
    //   Enable machine check exceptions
    //
    addi r3, r0,
        0x1002 // Set ME,IP,RI flags
        mtmsr r3

               //
            //   LONG JUMP TO UPPER ADDRESS
            //   On ADS 821/860 board, the default reset fetching is at
            //   0x100 so we need to switch to high address at 0xffexxxxx.
            //
            lis r3,
        __reset_ROM @h                 // jump to rest of reset in ROM
            ori r3,
        r3, __reset_ROM @l mtlr r3 blr // effectively falls through...
}

asm void
usr_init()
{
MBXInit:

    li r0,
        0x0000                         // all 0's in R0

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        //
        // Initialize the Internal Memory Map Register ( IMMR )
        //
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        lis r4,
        0xFFA0 //  IMMR = 0xFFA00000 : For MBX860-003, 40MHz
        ori r4,
        r4, 0x0000 mtspr IMMR,
        r4

            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            //
            // Disable Data Cache before accessing any registers
            // Save the status of DC_CST in R8 for the flush routine
            //
            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            mfspr  r3,
        DC_CST ori r8, r3,
        0               // save DC_CST in r8
        lis r3,
        CacheDisableCmd // DCache Disable command
            mtspr DC_CST,
        r3

            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            //
            //
            //	UPM RAM Array Initialization
            //   ----------------------------
            //
            // 	UPM programming by writing to its 64 RAM locations
            // 	Note that initialization of UPM must be done before the Bank Register
            // 	initialization. Otherwise, system may hang when writing to Bank
            // 	Registers in certain cases.
            //
            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            UPMAInit : lis r5,
                       UpmATable @h           // point R5 to paramenter table
                           ori r5,
                       r5,
                       UpmATable @l li r7,
                       0x0100                 // table size is 0x100
                       add r7,
                       r7,
                       r5 lis r6,
                       0x0000                 // Command: OP=Write, UPMA, MAD=0

                       UpmWriteLoop : lwz r3,
                                      0(r5)   // get data from table
                                      stw r3,
                                      MDR(r4) // store the data to MD register
                                      stw r6,
                                      MCR(r4) // issue command to MCR register
                                      addi r5,
                                      r5,
                                      4       // next entry in the table
                                      addi r6,
                                      r6,
                                      1       // next MAD address
                                      cmpw cr0,
                                      r5,
                                      r7      // done yet ?
                                          blt UpmWriteLoop

                                              UMPInitEnd :

      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      // Initialize the System Protection Control Register (SYPCR)
      //
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      lis r3,
      0xFFFF //  SYPCR = 0xFFFFFF88 : Disable time-out
      ori r3,
      r3,
      0xFF88 stw r3,
      SYPCR(r4)

      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      //
      //	Memory Controller Initialization
      //   --------------------------------
      //
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      BaseInit :
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      // (Table 15-14, MPC8xx):
      //
      // BR0 = 0xFFE00001:
      //	Base addr [0-16]	11111111111000000 = 0xFFE00000
      //	Address type [17-19]	00
      //	Port size [20-21]	00 = 32 bits port size
      //	Parity enable [22]	0 = parity checking disabled
      //	Write Protect [23]	0 = r/w
      //	Machine select [24-25]	00 = G.P.C.M.
      //	Reserved [26-30]
      //	Valid Bit [31]		1 = This bank is valid.
      //
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      // OR0 = 0xFFE00954:
      //	Address Mask [0-16]	11111111111000000
      //	Addr. Type Mask [17-19]	000
      //	CS neg. time [20]	1 = CS~/WE~ negated 1/4 clk early; see docs.
      //	Addr to CS Setup [21-22] 00 = CS~ is output at same time as addr lines
      //	Burst Inhibit [23]	1 = Banks does not support burst accesses.
      //	Cycle length [24-27]	0101 = 5 clock cycle wait states
      //	Ext. Trans ACK [28]	0 = TA~ is generated internally by M.C.
      //	Timing Relaxed [29]	1 = relaxed timing generated by M.C.
      //	Extended Hold Time [30]	0 = normal timing generated by M.C.
      //	Reservd [31]		0
      //
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      lis r3,
      0xFE00 // BR0 = 0xFE000001 : flash at 0xfe000000
      ori r3,
      r3,
      0x0001 lis r5,
      0xFF80 // OR0 = 0xFF800930
      ori r5,
      r5,
      0x0930 stw  r3,
      BR0(r4) stw r5,
      OR0(r4)

      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      //	Initialize BR1 and OR1
      //
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      lis r3,
      0x0000 // BR1 = 0x00000081
      ori r3,
      r3,
      0x0081 lis r5,
      0xffc0 // OR1 = 0xFFC00400
      ori r5,
      r5,
      0x0400 stw  r3,
      BR1(r4) stw r5,
      OR1(r4)

      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      // (Table 15-14, MPC8xx):
      //
      // BR2 = 0x00000081:
      //	Base addr [0-16]	00000000000000000 = 0x00000000
      //	Address type [17-19]	00
      //	Port size [20-21]	00 = 32 bits port size
      //	Parity enable [22]	0 = parity checking disabled
      //	Write Protect [23]	0 = r/w
      //	Machine select [24-25]	10 = U.P.M.A.
      //	Reserved [26-30]        00000
      //	Valid Bit [31]		1 = This bank is valid.
      //
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      // OR2 = 0xFE000800:
      //	Address Mask [0-16]	11111110000000000 (0-32MB)
      //	Addr. Type Mask [17-19]	000
      //	CS neg. time [20]	1 = CS~/WE~ negated 1/4 clk early; see docs.
      //	Addr to CS Setup [21-22] 00 = CS~ is output at same time as addr lines
      //	Burst Inhibit [23]	0 = Banks support burst accesses.
      //	Cycle length [24-27]	0000 = 0 clock cycle wait states
      //	Ext. Trans ACK [28]	0 = TA~ is generated internally by M.C.
      //	Timing Relaxed [29]	0 = Normal timing generated by M.C.
      //	Extended Hold Time [30]	0 = Normal timing generated by M.C.
      //	Reservd [31]		0
      //
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      lis r3,
      0x0000 // BR2 = 0x00000080 : DRAM at 0x0
      ori r3,
      r3,
      0x0080 lis r5,
      0x0000 // OR2 = 0x00000400
      ori r5,
      r5,
      0x0400 stw  r3,
      BR2(r4) stw r5,
      OR2(r4)

      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      //	Initialize BR3 and OR3
      //
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      lis r3,
      0x0000 // BR3 = 0x00000080 : DRAM at 0x0
      ori r3,
      r3,
      0x0080 lis r5,
      0x0000 // OR3 = 0x00000400
      ori r5,
      r5,
      0x0400 stw  r3,
      BR3(r4) stw r5,
      OR3(r4)

      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      //	Initialize BR4 and OR4
      //
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      lis r3,
      0xFA00 // BR4 = 0xFA000401
      ori r3,
      r3,
      0x0401 lis r5,
      0xFFE0 // OR4 = 0xFFE00920
      ori r5,
      r5,
      0x0920 stw  r3,
      BR4(r4) stw r5,
      OR4(r4)

      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      //	Initialize BR5 and OR5
      //
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      lis r3,
      0x8000 // BR5 = 0x80000001
      ori r3,
      r3,
      0x0001 lis r5,
      0xA000 // OR5 = 0xA0000108
      ori r5,
      r5,
      0x0108 stw  r3,
      BR5(r4) stw r5,
      OR5(r4)

      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      //	Initialize BR6 and OR6
      //
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      lis r3,
      0xFA21 // BR6 = 0xFA210001
      ori r3,
      r3,
      0x0001 lis r5,
      0xFFFF // OR6 = 0xFFFF0108
      ori r5,
      r5,
      0x0108 stw  r3,
      BR6(r4) stw r5,
      OR6(r4)

      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      //	Initialize BR7 and OR7
      //
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      lis r3,
      0xFC00 // BR7 = 0xFC000401
      ori r3,
      r3,
      0x0401 lis r5,
      0xFF80 // OR7 = 0xFF800930
      ori r5,
      r5,
      0x0930 stw  r3,
      BR7(r4) stw r5,
      OR7(r4)

      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      // Initialize the Debug Enable Registers (DER)
      //
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      lis r3,
      0x0000 //  DER = 0x00000000 : exceptions to target
      ori r3,
      r3,
      0x0000 mtspr DER,
      r3

          ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
          //
          // Initialize the Decrement Registers (DEC)
          //
          ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

          //	lis        r3,0xFFFF    //  DEC = 0xFFFFFFFF
          //	ori        r3,r3,0xFFFF
          //	mtspr      DEC,r3

          ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
          //
          // Initialize the Interupt Cause Register (ICR)
          //
          ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

          lis r3,
      0x0000 //  ICR = 0x00000000
      ori r3,
      r3,
      0x0000 mtspr ICR,
      r3

          ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
          //
          // Initialize the Instruction Control Register (ICTRL)
          //
          ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

          lis r3,
      0x0000 //  ICTRL = 0x00000006
      ori r3,
      r3,
      0x0006 mtspr ICTRL,
      r3

          ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
          //
          // Initialize the Write Lower Timebase Register (TB Write)
          //
          ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

          //	lis        r3,0x0000    //  TB_WRITE = 0x00000000
          //	ori        r3,r3,0x0000
          //	mtspr      TB_WRITE,r3

          ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
          //
          // Initialize the Write Upper Timebase Register (TBU Write)
          //
          ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

          //	lis        r3,0x0000    //  TB_WRITE = 0x00000000
          //	ori        r3,r3,0x0000
          //	mtspr      TBU_WRITE,r3

          ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
          //
          // Initialize the Machine State Register (MSR)
          //
          ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

          lis r3,
      0x0000 //  MSR = 0x00001002
      ori r3,
      r3,
      0x1002 mtmsr r3

          ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
          //
          // Initialize the Save/Restore Register 1 (SRR1)
          //
          ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

          lis r3,
      0x0000 //  SRR1 = 0x00001002
      ori r3,
      r3,
      0x1002 mtspr SRR1,
      r3

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Clock and Reset Registers Programming
    // -------------------------------------
    //
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Set the clock speed to 50MHz and set power mode
    //
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if TARGET_SYSTEM_FREQUENCY == 50
          lis r3,
      0x0000 //  PLPRCR = 0x00005000 : For MBX8xxA, 50MHz
      ori r3,
      r3,
      0x5000 stw r3,
      PLPRCR(r4)
#endif

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Set the clock sources and division factors
    //
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if TARGET_SYSTEM_FREQUENCY == 50
          lis r3,
      0x6200 //  SCCR = 0x62000000 : For MBX8xxA, 50MHz
      ori r3,
      r3,
      0x0000 stw r3,
      SCCR(r4)
#endif

      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      // System Interface Unit (SIU) Registers Programming
      // -------------------------------------------------
      //
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      // Initialize the SIU Configuration Register (SIUMCR)
      //
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      lis r3,
      0x0060 //  SIUMCR = 0x00602900 : For MBX860-003, 40MHz
      ori r3,
      r3,
      0x2900 stw r3,
      SIUMCR(r4)

      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      // Initialize the SIU Interrupt Edge Level Mask Register (SIEL)
      //
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      lis r3,
      0xAAAA //  SEIL = 0xAAAA0000
             //  For MBX860-003, 40MHz
      ori r3,
      r3,
      0x0000 stw r3,
      SIEL(r4)

      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      // Initialize the Transfer Error Status Register (TESR)
      //
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      lis r3,
      0xFFFF //  TESR = 0xFFFFFFFF : For MBX860-003, 40MHz
      ori r3,
      r3,
      0xFFFF stw r3,
      TESR(r4)

      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      // Initialize the SDMA Configuration Register (SDCR)
      //
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      lis r3,
      0x0000 //  SDCR = 0x00000001 : For MBX860-003, 40MHz
      ori r3,
      r3,
      0x0001 stw r3,
      SDCR(r4)

      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      // Initialize the Timebase Status and Control Register (TBSCR)
      //
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      //	li         r3,0x00c2	//  TBSCR = 0x00c2 (16bit register)
      //	sth        r3,TBSCR(r4)

      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      // Initialize the Real-Time Clock Status and Control Register (RTCSC)
      //
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      //	li         r3,0x01c2    //  RTCSC = 0x01c2 (16bit register)
      //	sth        r3,RTCSC(r4)

      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      // Initialize the Periodic Interrupt and Control Register (PISCR)
      //
      ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      li r3,
      0x0082 //  PISCR = 0x0082 (16bit register)
      sth r3,
      PISCR(r4)

          blr
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Cache Initialization
//
// Function: CacheInit
//       If the Data cache is enabled, flush then
//       disable it so we can finish the rest of initialization
//
// Input Registers:
//       R8 contains the content of DC_CST before entering
//          usr_init()
//
// Output Registers:
//       R3, R4, R5 and R6 will be destroyed
//
// History:
// 10/7/95      lvn      Initial porting from Arnewsh monitor
//
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma section code_type ".init"

asm void
CacheInit()
{
    nofralloc

        // If Instruction cache was enabled, disable and invalidate all
        ICacheInit : mfspr r3,
                     IC_CST                                        // read I-cache CSR
                         andis.r3,
                     r3,
                     CacheEnableBit beq ICacheUnlock               // no, Icache was disabled

                         lis               r3,
                     CacheDisableCmd mtspr IC_CST,
                     r3                                            // disable Icache
                         isync

                             ICacheUnlock : lis                     r3,
                                            CacheUnlockAllCmd mtspr IC_CST,
                                            r3                     // Unlock Icache
                                                isync

                                                    ICacheInv : lis                  r3,
                                                                CacheInvAllCmd mtspr IC_CST,
                                                                r3 // Invalidate Icache
                                                                    isync

                                                                        // ICacheEnable:
                                                                        //    lis     r3,CacheEnableCmd
                                                                        //    mtspr   r3,IC_CST       // Enable Icache
                                                                        //    isync

                                                                        DCacheInit : DCacheUnlock
      : lis                                                             r3,
        CacheUnlockAllCmd sync mtspr                                    DC_CST,
        r3                                                              // Unlock Dcache

            andis.r8,
        r8,
        CacheEnableBit                                                  // Was DCache enabled ?
            beq DCacheInv                                               // no, Dcache was disabled

                DCacheFlushAll : li r3,
                                 0                                      // Read 1 word per cache line
                                                                        // for 800 lines
                                 li r4,
                                 256                                    // 2 ways, 128 sets per way
                                 DCacheFlushLoop : addic.r4,
                                 r4,
                                 -1                                     // decrementer, set cc bit
                                 lwz r5,
                                 0(r3)                                  // access memory
                                 dcbf 0,
                                 r3                                     // flush the line
                                     addi r3,
                                 r3,
                                 16                                     // next line
                                 bgt DCacheFlushLoop

                                     DCacheDisable : lis                        r3,
                                                     CacheDisableCmd sync mtspr DC_CST,
                                                     r3                 // disable Dcache

                                                         DCacheInv : lis                       r3,
                                                                     CacheInvAllCmd sync mtspr DC_CST,
                                                                     r3 // Invalidate Dcache

                                                                        // DCacheEnable:
                                                                     //    lis     r3,CacheEnableCmd
                                                                     //    sync
                                                                     //    mtspr   DC_CST,r3       // Enable Icache

                                                                     blr
}
