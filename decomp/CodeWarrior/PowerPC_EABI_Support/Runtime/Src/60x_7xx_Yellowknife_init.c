
//	Copyright Motorola, Inc. 1993, 1994
//	ALL RIGHTS RESERVED
//
//	You are hereby granted a copyright license to use, modify, and
//	distribute the SOFTWARE so long as this entire notice is retained
//	without alteration in any modified and/or redistributed versions,
//	and that such modified versions are clearly identified as such.
//	No licenses are granted by implication, estoppel or otherwise under
//	any patents or trademarks of Motorola, Inc.
//
//	The SOFTWARE is provided on an "AS IS" basis and without warranty.
//	To the maximum extent permitted by applicable law, MOTOROLA DISCLAIMS
//	ALL WARRANTIES WHETHER EXPRESS OR IMPLIED, INCLUDING IMPLIED
//	WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR
//	PURPOSE AND ANY WARRANTY AGAINST INFRINGEMENT WITH
//	REGARD TO THE SOFTWARE (INCLUDING ANY MODIFIED VERSIONS
//	THEREOF) AND ANY ACCOMPANYING WRITTEN MATERIALS.
//
//	To the maximum extent permitted by applicable law, IN NO EVENT SHALL
//	MOTOROLA BE LIABLE FOR ANY DAMAGES WHATSOEVER
//	(INCLUDING WITHOUT LIMITATION, DAMAGES FOR LOSS OF
//	BUSINESS PROFITS, BUSINESS INTERRUPTION, LOSS OF BUSINESS
//	INFORMATION, OR OTHER PECUNIARY LOSS) ARISING OF THE USE OR
//	INABILITY TO USE THE SOFTWARE.   Motorola assumes no responsibility
//	for the maintenance and support of the SOFTWARE.
//	file:	except2.s
//

/*
** This file has been modified for use with MetroTRK and CodeWarrior.
** All code which is not needed for board initialization has been
** removed.  The remaining code has been converted from assembly-only
** to C function-level assembly and encapsulated inside the init_board()
** function defined by all PPC versions of MetroTRK.
**
** Modifications are Copyright (c) 1998 Metrowerks Corporation
** All rights reserved.
*/

//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
//
// Yellowknife PPC board-specific initialization code.
//
//
//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

#include "dstypes.h"
#include "ppc_reg.h"
#include "yellowknife.h"

#pragma section code_type ".init"

asm void disable_L1_icache(void);
asm void invalidate_and_enable_L1_icache(void);
asm void disable_L1_dcache(void);
asm void invalidate_and_enable_L1_dcache(void);
asm void mmu_setup(void);
asm void cache_inhibit(void);
asm void error_dram_init(void);

#define DCACHEON   (1)
#define ICACHEON   (1)

#define RESET_BASE 0xfff00000

//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
//
//	init_board
//
//	Performs board-specific initializations.
//
//
//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

asm void init_board();

asm void
init_board()
{
    nofralloc

        mflr r12

            andis.r0,
        r0,
        0x0000 // lets make sure that r0 is really 0x0
        andi.r0,
        r0,
        0x0000

               // Now set up other chips on Big Bend board.

        // First the 105/106:
        // We'll go with many default values, but change a few for our needs.

        //  The code below detects the address map by reading vendor-id and
        //  device-id from MPC106.  It first assumes CHRP map was select.  If
        //  the values read is not what it's expected, then the addresses of
        //  config_addr and config_data of PREP mode are loaded to r5, and
        //  r6 respectively.             My - 12/97
        //

        addis r5,
        r0,
        CHRP_REG_ADDR // Assume CHRP mode, load CHRP's
            addis r6,
        r0,
        CHRP_REG_DATA // config_addr & config_data
            addis r8,
        r0,
        CHRP_IO_BASE  // IO_BASE addr. of CHRP mode
            addis r9,
        r0,
        CHRP_ADDR_MAP // set bit 16 of PICR1

            addis r4,
        r0,
        VENDOR_ID_HI  // Load vendor- and device-IDs'
            ori r4,
        r4,
        DEVICE_ID_LO  // default values.
            addis r3,
        r0,
        BMC_BASE      // Set register addr. of vendor
            stwbrx r3,
        0,
        r5            // & device-ids - 0x80000000
            lwbrx r3,
        0,
        r6            // Load ids' values from MPC106
            cmp cr0,
        0, r3,
        r4            // Compare with default value
            beq cr0,
        start_init    // If equal, then it's CHRP mode

            addis r5,
        r0,
        PREP_REG_BASE // If not, then it's PREP mode.
            ori r5,
        r5,
        PREP_REG_ADDR // load PREP's config_addr &
            addis r6,
        r0,
        PREP_REG_BASE // config_data.
            ori r6,
        r6, PREP_REG_DATA addis r8, r0,
        PREP_IO_BASE  // IO_BASE addr. of PREP mode
            addis r9,
        r0,
        PREP_ADDR_MAP // set bit 16 of PICR1

            start_init :

      mtspr SPR_SPRG2,
      r5              // save config_addr, config_data
          mtspr SPR_SPRG3,
      r6              // to sprg2, sprg3

          addis r3,
      r0,
      BMC_BASE ori r3,
      r3,
      PROCINTCONF1    // PICR1 (A8)
          stwbrx r3,
      0,
      r5              // write reg. addr. into config_addr
          sync lwbrx r4,
      0,
      r6              // get register data from MPC106
          sync addis r3,
      r0,
      0x0010          // mask for PICR[RCS0]
          and r4,
      r3,
      r4 cmp cr0,
      0,
      r3,
      r4              //
          beq cr0,
      X2_START        // if RCS0 is set, then the ROM is on 60x
                      // bus on the X4 board it is on the PCI
                      // bus. This is SDRAM init code for X4
                      // boards

          addi r10,
      r0,
      YK_X4 addis r3,
      r0,
      BMC_BASE        // PICR1 (A8) = 0x3F04_0400
          ori r3,
      r3,
      PROCINTCONF1 stwbrx r3,
      0,
      r5 addis r4,
      r0,
      PIC1_X4_V1 or r4,
      r4,
      r9 ori r4,
      r4,
      0x1800          // TJD set FLASH_WR_EN[12], MCP_EN[11]
      stwbrx r4,
      0,
      r6 sync lwbrx r4,
      0,
      r6 sync

          addis r3,
      r0,
      BMC_BASE        // PICR2 (AC) = 0x0047_0215
          ori r3,
      r3,
      PROCINTCONF2 stwbrx r3,
      0,
      r5 addis r4,
      r0,
      PIC2_X4_V1 oris r4,
      r4,
      0x0400          // TJD set CF_FF0_LOCAL[26] for 64bit flash
      ori r4,
      r4,
      PIC2_X4_V2 stwbrx r4,
      0,
      r6 sync lwbrx r4,
      0,
      r6 sync

          addis r3,
      r0,
      BMC_BASE        // MCCR1 (F0) = 0xFFA4_FFFF
          ori r3,
      r3,
      MEMCONTCONF8A stwbrx r3,
      0,
      r5 addis r4,
      r0,
      MCC8A_X4_V1 ori r4,
      r4,
      MCC8A_X4_V2 stwbrx r4,
      0,
      r6 sync lwbrx r4,
      0,
      r6 sync

          addis r3,
      r0,
      BMC_BASE        // MCCR2 (F4) = 0x0000_0c34
          ori r3,
      r3,
      MEMCONTCONF8B stwbrx r3,
      0,
      r5 addis r4,
      r0,
      MCC8B_X4_V1 ori r4,
      r4,
      MCC8B_X4_V2 stwbrx r4,
      0,
      r6 sync lwbrx r4,
      0,
      r6 sync

          addis r3,
      r0,
      BMC_BASE        // MCCR3 (F8) = 0xf830_0000
          ori r3,
      r3,
      MEMCONTCONF9A stwbrx r3,
      0,
      r5 addis r4,
      r0,
      MCC9A_X4_V1 ori r4,
      r4,
      MCC9A_X4_V2 stwbrx r4,
      0,
      r6 sync lwbrx r4,
      0,
      r6 sync

          addis r3,
      r0,
      BMC_BASE        // MCCR4 (FC) = 0x2530_2244
          ori r3,
      r3,
      MEMCONTCONF9B stwbrx r3,
      0,
      r5 addis r4,
      r0,
      0x2530 ori r4,
      r4,
      0x2244 stwbrx r4,
      0,
      r6 sync

          addis r3,
      r0,
      BMC_BASE        // MSAR1 (80) = 0xffff_ff00
          ori r3,
      r3,
      MEMSTARTADDR1 stwbrx r3,
      0,
      r5 addis r4,
      r0,
      MSA1_X4_V1 ori r4,
      r4,
      MSA1_X4_V2 stwbrx r4,
      0,
      r6 sync lwbrx r4,
      0,
      r6 sync

          addis r3,
      r0,
      BMC_BASE        // MSAR2 (84) = 0xffff_ffff
          ori r3,
      r3,
      MEMSTARTADDR2 stwbrx r3,
      0,
      r5 addis r4,
      r0,
      MSA2_X4_V1 ori r4,
      r4,
      MSA2_X4_V2 stwbrx r4,
      0,
      r6 sync lwbrx r4,
      0,
      r6 sync

          addis r3,
      r0,
      BMC_BASE        // MESAR1 (88) = 0x0303_0300
          ori r3,
      r3,
      XMEMSTARTADDR1 stwbrx r3,
      0,
      r5 addis r4,
      r0,
      XMSA1_X4_V1 ori r4,
      r4,
      XMSA1_X4_V2 stwbrx r4,
      0,
      r6 sync lwbrx r4,
      0,
      r6 sync

          addis r3,
      r0,
      BMC_BASE        // MESAR2 (8c) = 0x0303_0303
          ori r3,
      r3,
      XMEMSTARTADDR2 stwbrx r3,
      0,
      r5 addis r4,
      r0,
      XMSA2_X4_V1 ori r4,
      r4,
      XMSA2_X4_V2 stwbrx r4,
      0,
      r6 sync lwbrx r4,
      0,
      r6 sync

          addis r3,
      r0,
      BMC_BASE        // MEAR1 (90) = 0xffff_ff10
          ori r3,
      r3,
      MEMENDADDR1 stwbrx r3,
      0,
      r5 addis r4,
      r0,
      MEA1_X4_V1 ori r4,
      r4,
      MEA1_X4_V2 stwbrx r4,
      0,
      r6 sync lwbrx r4,
      0,
      r6 sync

          addis r3,
      r0,
      BMC_BASE        // MEAR2 (94) = 0xffff_ffff
          ori r3,
      r3,
      MEMENDADDR2 stwbrx r3,
      0,
      r5 addis r4,
      r0,
      MEA2_X4_V1 ori r4,
      r4,
      MEA2_X4_V2 stwbrx r4,
      0,
      r6 sync lwbrx r4,
      0,
      r6 sync

          addis r3,
      r0,
      BMC_BASE        // MEEAR1 (98) = 0x0303_0300
          ori r3,
      r3,
      XMEMENDADDR1 stwbrx r3,
      0,
      r5 addis r4,
      r0,
      XMEA1_X4_V1 ori r4,
      r4,
      XMEA1_X4_V2 stwbrx r4,
      0,
      r6 sync lwbrx r4,
      0,
      r6 sync

          addis r3,
      r0,
      BMC_BASE        // MEEAR2 (9c) = 0x0303_0303
          ori r3,
      r3,
      XMEMENDADDR2 stwbrx r3,
      0,
      r5 addis r4,
      r0,
      XMEA2_X4_V1 ori r4,
      r4,
      XMEA2_X4_V2 stwbrx r4,
      0,
      r6 sync lwbrx r4,
      0,
      r6 sync

          addis r3,
      r0,
      BMC_BASE        // MBEN (a0) = 0x01,
          ori r3,
      r3,
      MEMENABLE       // PGMAX (a3) = 0x08
          stwbrx r3,
      0,
      r5 addis r4,
      r0,
      ME_X4_V1 ori r4,
      r4,
      ME_X4_V2 stwbrx r4,
      0,
      r6 sync lwbrx r4,
      0,
      r6

          sync

                      // Wait before initialize other registers

              li      r4,
      0x3800 mtctr r4 X4wait200us : bdnz X4wait200us

                                        // Set MEMGO bit

                                        addis r3,
                                    r0,
                                    BMC_BASE // MCCR1 (F0) |= PGMAX
                                        ori r3,
                                    r3,
                                    0x00f0 stwbrx r3,
                                    0,
                                    r5 sync lwbrx r4,
                                    0,
                                    r6       // old MCCR1
                                        addis r3,
                                    r0,
                                    0x0008 ori r3,
                                    r3,
                                    0x0000 or r4,
                                    r4,
                                    r3       // set bits
                                        stwbrx r4,
                                    0,
                                    r6 sync lwbrx r4,
                                    0,
                                    r6       // read in just to check

                                             // Wait again

                                        li        r4,
                                    8000 mtctr r4 X4wait8ref
      : bdnz X4wait8ref

            sync

                b do_mmu_setup // now do mmu setup for processor
                               // X4_START-DONE- This is init for for X4 SDRAM

                    // This is DRAM init code for X2 boards
                    X2_START : addi r10,
                               r0,
                               YK_X2 addis r3,
                               r0,
                               BMC_BASE ori r3,
                               r3,
                               MEMSTARTADDR1 addis r4,
                               r0,
                               MSA1_V1 ori r4,
                               r4,
                               MSA1_V2 stwbrx r3,
                               0,
                               r5 stwbrx r4,
                               0,
                               r6

                                   addis r3,
                               r0,
                               BMC_BASE ori r3,
                               r3,
                               MEMENDADDR1 addis r4,
                               r0,
                               MEA1_V1 ori r4,
                               r4,
                               MEA1_V2 stwbrx r3,
                               0,
                               r5 stwbrx r4,
                               0,
                               r6

                                   addis r3,
                               r0,
                               BMC_BASE ori r3,
                               r3,
                               MEMENABLE addi r4,
                               r0,
                               ME_V stwbrx r3,
                               0,
                               r5 stb r4,
                               0(r6)

                                   sync

                                       addis r3,
                               r0,
                               BMC_BASE ori r3,
                               r3,
                               PROCINTCONF1 addis r4,
                               r0,
                               PIC1_V1 or r4,
                               r4,
                               r9 ori r4,
                               r4,
                               PIC1_V2 stwbrx r3,
                               0,
                               r5 stwbrx r4,
                               0,
                               r6

                                   sync

                                       addis r3,
                               r0,
                               BMC_BASE ori r3,
                               r3,
                               PROCINTCONF2 addis r4,
                               r0,
                               PIC2_V1 ori r4,
                               r4,
                               PIC2_V2 stwbrx r3,
                               0,
                               r5 stwbrx r4,
                               0,
                               r6

                                   sync

                                       // addis	r3,r0,BMC_BASE
                                       // ori	r3,r3,PROCINTCONF1
                                       // addis	r4,r0,r9
                                       // ori	r4,r4,PIC1_V2
                                       // stwbrx	r3,0,(r5)
                                       // stwbrx	r4,0,(r6)

                                       // sync

                                       // addis	r3,r0,BMC_BASE
                                       // ori	r3,r3,PROCINTCONF2
                                       // addis	r4,r0,PIC2_V1
                                       // ori	r4,r4,PIC2_V2
                                       // stwbrx	r3,0,(r5)
                                       // stwbrx	r4,0,(r6)

                                       // sync

                                       addis r3,
                               r0,
                               BMC_BASE ori r3,
                               r3,
                               MEMCONTCONF8B addis r4,
                               r0,
                               MCC8B_V1 ori r4,
                               r4,
                               MCC8B_V2 stwbrx r3,
                               0,
                               r5 stwbrx r4,
                               0,
                               r6

                                   addis r3,
                               r0,
                               BMC_BASE ori r3,
                               r3,
                               MEMCONTCONF9A addis r4,
                               r0,
                               MCC9A_V1 ori r4,
                               r4,
                               MCC9A_V2 stwbrx r3,
                               0,
                               r5 stwbrx r4,
                               0,
                               r6

                                   addis r3,
                               r0,
                               BMC_BASE ori r3,
                               r3,
                               MEMCONTCONF9B addis r4,
                               r0,
                               MCC9B_V1 ori r4,
                               r4,
                               MCC9B_V2 stwbrx r3,
                               0,
                               r5 stwbrx r4,
                               0,
                               r6

                                   addis r3,
                               r0,
                               BMC_BASE ori r3,
                               r3,
                               MEMCONTCONF8A addis r4,
                               r0,
                               MCC8A_V1 ori r4,
                               r4,
                               MCC8A_V2 stwbrx r3,
                               0,
                               r5 stwbrx r4,
                               0,
                               r6

                                   sync

                                       do_mmu_setup
      : bl mmu_setup // now do mmu setup for processor

                     // Now the Winbond/UMC part:
            // Nothing to do...we'll be using all the defaults...

            sync

                // Now the SIO part:
                // Some things are set up on reset.  I'll set up the rest.
                // in duart.c with a call to duart_initialize which is in yk.c

                // now lets turn on data translation so our MMU setup will be functional.

                mfmsr r3 ori r3,
        r3,
        0x0030 mtmsr r3 isync sync //  the MMU should be set up now...

            // this helps us to copy dink to
            // low memory....
            //	addis	r3,0,0			// load dram address (0) into r3.
            //	addis	r4,0,(RESET_BASE >> 16)		// load r4 with base eprom address
            // of 0xFFF00000.
            //	addis	r6,0,0x6		// load r6 with upper half of 384K.
            //	ori	r6,r6,0x0000		// load r6 with lower half of 384K.
            // This will allow for a larger image of
            // DINK wich may be built using the -g
            // option on the compiler

            // lp1:	lwzx	r5,0,r4			// read word from eprom.
            //	stwx	r5,0,r3			// store word into dram.
            //	lwzx	r7,0,r3			// load word from dram.
            //	cmp	cr0,0,r7,r5		// check to see if dram got written
            //	bne	error_dram_init

            //	addi	r4,r4,4			// go to next word of eprom and dram.
            //	addi	r3,r3,4
            //	addic.	r6,r6,-4		// decrement word from 256k block
            // -- set cr0 on this one for branching.
            //	bgt	lp1			// if count>0, then loop

            //	lis	r3,temp_gpr2@h		// move r2 into temp_gpr2 (fix)
            //	ori	r3,r3,temp_gpr2@l

            //	eieio
            //	stwx	r2,0,r3

            //	eieio
            //	sync				// make sure all previous instructions
            // have completed.

            //	lis	r3,in_which_code@h	// fix in_which_code to dink value (0).
            //	ori	r3,r3,in_which_code@l

            //	addis	r4,0,0			// load r4 with 0
            //	stwx	r4,0,r3			// and save into variable.

            //        lis     r3,config_addr@h        // load address of config_addr
            //       ori     r3,r3,config_addr@l
            //        mfspr   r5, sprg2               // retrieve value saved to sprg2
            //        stwx    r5,0,r3                 // save value to config_addr

            //        lis     r3,config_data@h        // load address of config_data
            //        ori     r3,r3,config_data@l
            //        mfspr   r5, sprg3               // retrieve value saved to sprg3
            //        stwx    r5,0,r3                 // save value to config_data

            //        lis     r3,yk_version@h         // load address of yk_version
            //        ori     r3,r3,yk_version@l
            //        stwx    r10,0,r3                // save value to yk_version

            //	addis	r1,0,0x6		// load stack pointer (gpr1) with
            //	ori	r1,r1,0x0000		// address of 384k = 0x00060000.
            // Increase to allow for -g compilation

            //	lis	r3,main@h		// get start address of dink
            //	ori	r3,r3,main@l

            //	mtspr	srr0,r3			// load address into srr0.

            //	addis	r4,0,0x0000
            //	ori	r4,r4,dink_msr		// load r4 with 0x00003930.
            //	mtspr	srr1,r4			// move address into srr1.
            // this will set MSR with supervisor
            // mode and exceptions disabled.

            // let's wipe the i and dcaches in case user code wants to use them properly.
            bl invalidate_and_enable_L1_dcache bl disable_L1_dcache bl invalidate_and_enable_L1_icache bl
                disable_L1_icache

#ifdef DCACHEON

                    // Now turn on and invalidate the internal data cache
                    // Added 7/3/97 MM

                    bl invalidate_and_enable_L1_dcache

#endif

#ifdef ICACHEON

                        // Now turn on and invalidate the internal instruction cache
                        // Added 6/27/97 MM

                        bl invalidate_and_enable_L1_icache

#endif

                            //	rfi				// branch to dink start address in dram.

                            mtlr r12 blr

                                error_dram_init : ori r0,
                                                  r0,
                                                  0 // do one no-op.
                                                  b error_dram_init
}

// Processor specific mmu setups are in this section.

asm void
mmu_setup(void)
{
    nofralloc

        // now do mmu setup for processor
        // this is the ROM mapping

        addis r4,
        r0, 0xfff0 ori r4, r4,
        0x0022 // we will make the ROM writeable so that we can test errors
        addis r3,
        r0, 0xfff0 ori r3, r3, 0x01ff isync mtspr SPR_IBAT0L, r4 isync mtspr SPR_IBAT0U, r3 isync mtspr SPR_DBAT0L,
        r4 isync mtspr SPR_DBAT0U,
        r3 isync sync

               // this is the local memory mapping

            addis r4,
        r0, 0x0000 addis r5, r0, 0x0000 ori r4, r4,
        0x0022 // No caching in ram
               //	ori	r4,r4,0x0012		// Go ahead and cache the instructions
        ori r5,
        r5,
        0x0032 // Cannot cache the data////
        addis r3,
        r0,
        0x0000 // data caching will be turned on
        ori r3,
        r3,
        0x0fff // later, in reg_spr.c(well, for the
        isync  // 603 at least)
            mtspr      SPR_IBAT1L,
        r4 isync mtspr SPR_IBAT1U, r3 isync mtspr SPR_DBAT1L, r5 isync mtspr SPR_DBAT1U,
        r3 isync sync

               // this is the 105/106, UMC/Winbond, and SIO mapping

            addi r4,
        r8,
        0x0 // copy IO_BASE to r4
        addi r3,
        r8,
        0x0 // copy IO_BASE to r3
        ori r4,
        r4, 0x0022 ori r3, r3,
        0x01ff isync

            mtspr      SPR_IBAT2L,
        r4 isync mtspr SPR_IBAT2U, r3 isync mtspr SPR_DBAT2L, r4 isync mtspr SPR_DBAT2U,
        r3 isync sync

            // bat3 is our Floating BAT

            isync mtspr SPR_IBAT3L,
        r0 isync mtspr SPR_IBAT3U, r0 isync mtspr SPR_DBAT3L, r0 isync mtspr SPR_DBAT3U,
        r0 isync

            addis r3,
        0,
        0                               // now invalidate the TLB
        ori r3,
        r3,
        0                               // set up counter at 0x00000000

        mfspr         r4,
        SPR_PVR srawi r4, r4,
        16

        cmpi cr0,
        0, r4,
        0x3                             // 603?
        beq set_mmu_for603 cmpi cr0,
        0, r4,
        0x6                             // 603?
        beq set_mmu_for603 cmpi cr0,
        0, r4,
        0x7 beq set_mmu_for603

            addis r5,
        0,
        0x4                             // set up high bound of 0x00040000 for
        b tlblp                         // 604 and Arthur

            set_mmu_for603 : addis r5,
                             0,
                             0x2        // set up high bound of 0x00020000  for 603

                             tlblp : tlbie r3 sync addi r3,
                                     r3,
                                     0x1000 cmp cr0,
                                     0,
                                     r3,
                                     r5 // check if all 32(603) or 64(604, ARTHUR)
                                        // TLBs invalidated yet
                                         blt tlblp

                                     blr
}

asm void
cache_inhibit(void)
{
    nofralloc

                                        // to cache inhibit we are just going to turn off the caches.

        mfspr    r3,
        SPR_HID0 andi.r0, r0, 0 addis r4, r0, 0xffff addi r4, r4, 0x3fff and r3, r3, r4 mtspr SPR_HID0, r3 isync blr
}

asm void
invalidate_and_enable_L1_dcache(void)
{
    nofralloc

        mfspr r5,
        SPR_HID0 // turn on the D cache.
            ori r5,
        r5,
        0x4400   // Data cache only//
        ori r6,
        r5,
        0x4000   // clear the invalidate bit
        mtspr               SPR_HID0,
        r5 isync sync mtspr SPR_HID0, r6 isync sync blr
}

asm void
disable_L1_dcache(void)
{
    nofralloc

        mfspr    r5,
        SPR_HID0 andi.r5, r5, 0xBFFF mtspr SPR_HID0, r5 isync sync blr
}

asm void
invalidate_and_enable_L1_icache(void)
{
    nofralloc

        mfspr r5,
        SPR_HID0 // turn on the I cache.
            ori r5,
        r5,
        0x8800   // Instruction cache only//
        ori r6,
        r5,
        0x8000   // clear the invalidate bit
        mtspr               SPR_HID0,
        r5 isync sync mtspr SPR_HID0, r6 isync sync blr
}

asm void
disable_L1_icache(void)
{
    nofralloc

        mfspr    r5,
        SPR_HID0 andi.r5, r5, 0x7FFF mtspr SPR_HID0, r5 isync sync blr
}
