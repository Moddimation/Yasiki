/****************************************************************************/
/*

FILE

    $Header: /u/eppc_support/PowerPC_EABI_Support/Runtime/Src/60x_Excimer_init.c,v 1.1 2001/06/14 20:09:05 xinli Exp $

DESCRIPTION

    Board-specific initialization code for the Motorola Excimer
    603e board.

HISTORY


    $History: init_excimer.c $
//
//	*****************  Version 1  *****************
//	User: Smoore       Date: 5/05/99    Time: 2:10p
//	Created in $/Embedded/MetroTRK/Processor/ppc/Board/motorola/excimer
//	Support for the Motorola Excimer X2 and X3 boards.

AUTHORS

    Steve Moore

    (c) 1999 Metrowerks Corporation
    All rights reserved.

*/
/****************************************************************************/

#include "dstypes.h"
#include "ppc_reg.h"

#pragma section code_type ".init"

asm void init_board();

asm void
init_board()
{
    nofralloc

        // Setup the MMU using the BAT registers.

        // ROM mapping
        //	address:	0xff000000
        //	length:		16M
        //	user valid:	yes
        //	sup valid:	yes
        //	WIMG:		write-through, cache-inhibit, memory coherence, guarded
        //	PP:			R/W

        addis r3,
        0, 0xff00 ori r5, r3,
        0x0032 // ibat0l in r5
        ori r4,
        r3,
        0x01ff // dbat0u, ibat0u in r4
        ori r3,
        r3,
        0x007a // dbat0l in r3

        isync mtspr    SPR_IBAT0L,
        r5 isync mtspr SPR_IBAT0U, r4 isync mtspr SPR_DBAT0L, r3 isync mtspr SPR_DBAT0U,
        r4 isync sync

            // Static RAM mapping
            //	address:	0x00000000
            //	length:		128M
            //	user valid:	yes
            //	sup valid:	yes
            //	WIMG:		memory coherence
            //	PP:			R/W

            addis r3,
        0, 0x0000 ori r4, r3,
        0x0fff // dbat1u, ibat1u in r4
        ori r3,
        r3,
        0x0012 // dbat1l, ibat1l in r3

        isync mtspr    SPR_IBAT1L,
        r3 isync mtspr SPR_IBAT1U, r4 isync mtspr SPR_DBAT1L, r3 isync mtspr SPR_DBAT1U,
        r4 isync sync

            // IO mapping
            //	address:	0x40000000
            //	length:		16M
            //	user valid:	yes
            //	sup valid:	yes
            //	WIMG:		cache-inhibited, memory coherence, guarded
            //	PP:			R/W

            addis r3,
        0, 0x4000 ori r5, r3,
        0x0032 // ibat2l in r5
        ori r4,
        r3,
        0x01ff // dbat2u, ibat2u in r4
        ori r3,
        r3,
        0x003a // dbat2l in r3

        isync mtspr    SPR_IBAT2L,
        r5 isync mtspr SPR_IBAT2U, r4 isync mtspr SPR_DBAT2L, r3 isync mtspr SPR_DBAT2U,
        r4 isync sync

            // BAT3 is unused
            mtspr      SPR_IBAT3L,
        r0 isync mtspr SPR_IBAT3U, r0 isync mtspr SPR_DBAT3L, r0 isync mtspr SPR_DBAT3U,
        r0 isync sync

            // enable instruction and data address translation
            mfmsr r3 ori r3,
        r3,
        (MSR_DR | MSR_IR) isync mtmsr r3 isync sync

            // invalidate and enable the I and D caches

            mfspr    r5,
        SPR_HID0 ori r5, r5,
        0xcc00 // enable and invalidate caches
        andi.r6,
        r5,
        0xf3ff // clear the invalidate bits
        mtspr               SPR_HID0,
        r5 isync sync mtspr SPR_HID0,
        r6 isync            sync

        blr
}
