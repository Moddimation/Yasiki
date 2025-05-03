#if __MWERKS__
#pragma ANSI_strict off
#endif

//	setjmp.c	-	setjmp() and longjmp() routines for Metrowerks C++ for PowerPC
//
//	CopyrighC 1995-2000 Metrowerks, Inc.  All Rights Reserved.
//
//
//	THEORY OF OPERATION
//
//	The runtime support routines __setjmp() and longjmp() support the C <setjmp.h>
//	facilities. These routines are (finally) compatible with Apple's StdCLib.
//
//	__setjmp() captures the state of the program in a jmp_buf data structure
//	which has the following C definition:
//
//		typedef struct __jmp_buf {
//			unsigned long	PC;			//	0: saved PC
//			unsigned long	CR;			//	4: saved CR
//			unsigned long	SP;			//  8: saved SP
//			unsigned long	RTOC;		// 12: saved RTOC
//			unsigned long	reserved;	// 16: not used
//			unsigned long	GPRs[19];	// 20: saved r13-r31
//			double			FPRs[18];	// 96: saved fp14-fp31
//			double			FPSCR;		//240: saved FPSCR
//		} *__jmp_buf;
//
//	longjmp() restores the state, effecting a transfer back to the saved PC with
//	appropriate registers, stack, TOC, etc.
//
//	In <setjmp.h> the jmp_buf type must be defined as an array (per ANSI rules):
//
//		typedef long jmp_buf[62];
//
//	setjmp() and longjmp() are defined as follows:
//
//		int __setjmp(jmp_buf env);
//		#define setjmp(env) __setjmp(env)
//		void longjmp(jmp_buf env, int val);
//
//	Because __setjmp() needs to save the RTOC of the calling function, it
//	cannot be called across a fragment boundary. To ensure this, we omit
//	the TVector for setjmp() so that link errors will occur
//	if a fragment does not have a local copy of these routines.
//	(We can't omit the TVector for longjmp() because the Plum Hall suite
//	tests for it by taking its address, which requires a TVector)
//

#include <ansi_parms.h> /* hh 971207 Added <ansi_parms.h> header */

#include "Gecko__jmp_buf.h"

/*
 *	Prototypes
 */

#ifdef __cplusplus
extern "C"
{
#endif

#pragma tvectors off
#pragma internal on
int __setjmp (__jmp_buf* env);

#pragma internal off

void longjmp (__jmp_buf* env, int val);

#ifdef __cplusplus
}
#endif
//	__setjmp	-	C setjmp() routine
//
//	On entry R3 points to a jmp_buf struct. On exit, R3 is 0.
//
asm int
__setjmp (register __jmp_buf* env)
{
#if __PPC_EABI__
    nofralloc
#endif
        mflr r5 mfcr r6 stw r5,
        env->pc        //	save PC (LR)
            stw r6,
        env->cr        //	save CR
            stw SP,
        env->sp        //	save SP
            stw RTOC,
        env->rtoc      //	save #RTOC
#if __PPC_EABI__
#if __PPCe500__
            la               r4,
        env->gprs[0] evstddx r13, 0, r4 la r4, env->gprs[1] evstddx r14, 0, r4 la r4,
        env->gprs[2] evstddx r15, 0, r4 la r4, env->gprs[3] evstddx r16, 0, r4 la r4,
        env->gprs[4] evstddx r17, 0, r4 la r4, env->gprs[5] evstddx r18, 0, r4 la r4,
        env->gprs[6] evstddx r19, 0, r4 la r4, env->gprs[7] evstddx r20, 0, r4 la r4,
        env->gprs[8] evstddx r21, 0, r4 la r4, env->gprs[9] evstddx r22, 0, r4 la r4,
        env->gprs[10] evstddx r23, 0, r4 la r4, env->gprs[11] evstddx r24, 0,
        r4 la r4, env->gprs[12] evstddx r25, 0, r4 la r4, env->gprs[13] evstddx r26,
        0, r4 la r4, env->gprs[14] evstddx r27, 0, r4 la r4,
        env->gprs[15] evstddx r28, 0, r4 la r4, env->gprs[16] evstddx r29, 0,
        r4 la r4, env->gprs[17] evstddx r30, 0, r4 la r4, env->gprs[18] evstddx r31,
        0,
        r4
#else                  /* __PPCe500__ */
#if !__option(use_lmw_stmw) || __option(little_endian)
            stw r13,
        env->gprs[0]  //	save R13
        stw r14,
        env->gprs[1]  //	save R14
        stw r15,
        env->gprs[2]  //	save R15
        stw r16,
        env->gprs[3]  //	save R16
        stw r17,
        env->gprs[4]  //	save R17
        stw r18,
        env->gprs[5]  //	save R18
        stw r19,
        env->gprs[6]  //	save R19
        stw r20,
        env->gprs[7]  //	save R20
        stw r21,
        env->gprs[8]  //	save R21
        stw r22,
        env->gprs[9]  //	save R22
        stw r23,
        env->gprs[10] //	save R23
        stw r24,
        env->gprs[11] //	save R24
        stw r25,
        env->gprs[12] //	save R25
        stw r26,
        env->gprs[13] //	save R26
        stw r27,
        env->gprs[14] //	save R27
        stw r28,
        env->gprs[15] //	save R28
        stw r29,
        env->gprs[16] //	save R29
        stw r30,
        env->gprs[17] //	save R30
        stw r31,
        env->gprs[18] //	save R31
#else                  /* use_lmw_stmw */
            stmw r13,
        env->gprs //	save R13-R31
#endif                 /* use_lmw_stmw */
#endif                 /* __PPCe500__ */

#else                  /* EPPC EABI */
            stmw r13,
        env->gprs //	save R13-R31
#endif                 /* EPPC EABI */

#ifndef _No_Floating_Point_Regs
            mffs fp0
#if __PPCGEKKO__
                .machine gecko stfd fp14,
        env->fprs[0].d //	save FP14-FP31
            la                 r4,
        env->fprs[0].v psq_stx fp14, 0, r4, 0,
        0

        stfd              fp15,
        env->fprs[1].d la r4, env->fprs[1].v psq_stx fp15, 0, r4, 0,
        0

        stfd              fp16,
        env->fprs[2].d la r4, env->fprs[2].v psq_stx fp16, 0, r4, 0,
        0

        stfd              fp17,
        env->fprs[3].d la r4, env->fprs[3].v psq_stx fp17, 0, r4, 0,
        0

        stfd              fp18,
        env->fprs[4].d la r4, env->fprs[4].v psq_stx fp18, 0, r4, 0,
        0

        stfd              fp19,
        env->fprs[5].d la r4, env->fprs[5].v psq_stx fp19, 0, r4, 0,
        0

        stfd              fp20,
        env->fprs[6].d la r4, env->fprs[6].v psq_stx fp20, 0, r4, 0,
        0

        stfd              fp21,
        env->fprs[7].d la r4, env->fprs[7].v psq_stx fp21, 0, r4, 0,
        0

        stfd              fp22,
        env->fprs[8].d la r4, env->fprs[8].v psq_stx fp22, 0, r4, 0,
        0

        stfd              fp23,
        env->fprs[9].d la r4, env->fprs[9].v psq_stx fp23, 0, r4, 0,
        0

        stfd               fp24,
        env->fprs[10].d la r4, env->fprs[10].v psq_stx fp24, 0, r4, 0,
        0

        stfd               fp25,
        env->fprs[11].d la r4, env->fprs[11].v psq_stx fp25, 0, r4, 0,
        0

        stfd               fp26,
        env->fprs[12].d la r4, env->fprs[12].v psq_stx fp26, 0, r4, 0,
        0

        stfd               fp27,
        env->fprs[13].d la r4, env->fprs[13].v psq_stx fp27, 0, r4, 0,
        0

        stfd               fp28,
        env->fprs[14].d la r4, env->fprs[14].v psq_stx fp28, 0, r4, 0,
        0

        stfd               fp29,
        env->fprs[15].d la r4, env->fprs[15].v psq_stx fp29, 0, r4, 0,
        0

        stfd               fp30,
        env->fprs[16].d la r4, env->fprs[16].v psq_stx fp30, 0, r4, 0,
        0

        stfd               fp31,
        env->fprs[17].d la r4, env->fprs[17].v psq_stx fp31, 0, r4, 0,
        0
#else
            stfd fp14,
        env->fp14     //	save FP14-FP31
            stfd       fp15,
        env->fp15 stfd fp16, env->fp16 stfd fp17, env->fp17 stfd fp18,
        env->fp18 stfd fp19, env->fp19 stfd fp20, env->fp20 stfd fp21,
        env->fp21 stfd fp22, env->fp22 stfd fp23, env->fp23 stfd fp24,
        env->fp24 stfd fp25, env->fp25 stfd fp26, env->fp26 stfd fp27,
        env->fp27 stfd fp28, env->fp28 stfd fp29, env->fp29 stfd fp30,
        env->fp30 stfd fp31,
        env->fp31
#endif                 /* __PPCGEKKO__ */
        stfd fp0,
        env->fpscr     //	save FPSCR
#endif                 /* ndef _No_Floating_Point_Regs */
            li r3,
        0 blr
}
//	longjmp		-	C longjmp() routine
//
//	On entry R3 points to a jmp_buf struct and R4 contains the return value.
//	On exit, R3 contains 1 if R4 was 0, otherwise it contains the value from R4.
//
//
asm void
longjmp (register __jmp_buf* env, register int val)
{
#if __PPC_EABI__
    nofralloc
#endif
        lwz         r5,
        env->pc lwz r6,
        env->cr mtlr r5 //	restore PC (LR)
            mtcrf 255,
        r6              //	restore CR
            lwz SP,
        env->sp         //	restore SP
            lwz RTOC,
        env->rtoc       //	restore RTOC
#if __PPC_EABI__
#if __PPCe500__
            la              r7,
        env->gprs[0] evlddx r13, 0, r7 la r7, env->gprs[1] evlddx r14, 0, r7 la r7,
        env->gprs[2] evlddx r15, 0, r7 la r7, env->gprs[3] evlddx r16, 0, r7 la r7,
        env->gprs[4] evlddx r17, 0, r7 la r7, env->gprs[5] evlddx r18, 0, r7 la r7,
        env->gprs[6] evlddx r19, 0, r7 la r7, env->gprs[7] evlddx r20, 0, r7 la r7,
        env->gprs[8] evlddx r21, 0, r7 la r7, env->gprs[9] evlddx r22, 0, r7 la r7,
        env->gprs[10] evlddx r23, 0, r7 la r7, env->gprs[11] evlddx r24, 0, r7 la r7,
        env->gprs[12] evlddx r25, 0, r7 la r7, env->gprs[13] evlddx r26, 0, r7 la r7,
        env->gprs[14] evlddx r27, 0, r7 la r7, env->gprs[15] evlddx r28, 0, r7 la r7,
        env->gprs[16] evlddx r29, 0, r7 la r7, env->gprs[17] evlddx r30, 0, r7 la r7,
        env->gprs[18] evlddx r31, 0,
        r7
#else                   /* __PPCe500__ */
#if !__option(use_lmw_stmw) || __option(little_endian)
            lwz r13,
        env->gprs[0]  //	restore R13
        lwz r14,
        env->gprs[1]  //	restore R14
        lwz r15,
        env->gprs[2]  //	restore R15
        lwz r16,
        env->gprs[3]  //	restore R16
        lwz r17,
        env->gprs[4]  //	restore R17
        lwz r18,
        env->gprs[5]  //	restore R18
        lwz r19,
        env->gprs[6]  //	restore R19
        lwz r20,
        env->gprs[7]  //	restore R20
        lwz r21,
        env->gprs[8]  //	restore R21
        lwz r22,
        env->gprs[9]  //	restore R22
        lwz r23,
        env->gprs[10] //	restore R23
        lwz r24,
        env->gprs[11] //	restore R24
        lwz r25,
        env->gprs[12] //	restore R25
        lwz r26,
        env->gprs[13] //	restore R26
        lwz r27,
        env->gprs[14] //	restore R27
        lwz r28,
        env->gprs[15] //	restore R28
        lwz r29,
        env->gprs[16] //	restore R29
        lwz r30,
        env->gprs[17] //	restore R30
        lwz r31,
        env->gprs[18] //	restore R31
#else                   /* use_lmw_stmw */
            lmw r13,
        env->gprs //	restore R13-R31
#endif                  /* use_lmw_stmw */
#endif                  /* __PPCe500__ */

#else                   /* EPPC EABI */
            lmw r13,
        env->gprs //	restore R13-R31
#endif                  /* EPPC EABI */

#ifndef _No_Floating_Point_Regs
#if __PPCGEKKO__
            .machine gecko lfd fp14,
        env->fprs[0].d  //	save FP14-FP31
            la                r7,
        env->fprs[0].v psq_lx fp14, 0, r7, 0,
        0

        lfd               fp15,
        env->fprs[1].d la r7, env->fprs[1].v psq_lx fp15, 0, r7, 0,
        0

        lfd               fp16,
        env->fprs[2].d la r7, env->fprs[2].v psq_lx fp16, 0, r7, 0,
        0

        lfd               fp17,
        env->fprs[3].d la r7, env->fprs[3].v psq_lx fp17, 0, r7, 0,
        0

        lfd               fp18,
        env->fprs[4].d la r7, env->fprs[4].v psq_lx fp18, 0, r7, 0,
        0

        lfd               fp19,
        env->fprs[5].d la r7, env->fprs[5].v psq_lx fp19, 0, r7, 0,
        0

        lfd               fp20,
        env->fprs[6].d la r7, env->fprs[6].v psq_lx fp20, 0, r7, 0,
        0

        lfd               fp21,
        env->fprs[7].d la r7, env->fprs[7].v psq_lx fp21, 0, r7, 0,
        0

        lfd               fp22,
        env->fprs[8].d la r7, env->fprs[8].v psq_lx fp22, 0, r7, 0,
        0

        lfd               fp23,
        env->fprs[9].d la r7, env->fprs[9].v psq_lx fp23, 0, r7, 0,
        0

        lfd                fp24,
        env->fprs[10].d la r7, env->fprs[10].v psq_lx fp24, 0, r7, 0,
        0

        lfd                fp25,
        env->fprs[11].d la r7, env->fprs[11].v psq_lx fp25, 0, r7, 0,
        0

        lfd                fp26,
        env->fprs[12].d la r7, env->fprs[12].v psq_lx fp26, 0, r7, 0,
        0

        lfd                fp27,
        env->fprs[13].d la r7, env->fprs[13].v psq_lx fp27, 0, r7, 0,
        0

        lfd                fp28,
        env->fprs[14].d la r7, env->fprs[14].v psq_lx fp28, 0, r7, 0,
        0

        lfd                fp29,
        env->fprs[15].d la r7, env->fprs[15].v psq_lx fp29, 0, r7, 0,
        0

        lfd                fp30,
        env->fprs[16].d la r7, env->fprs[16].v psq_lx fp30, 0, r7, 0,
        0

        lfd                fp31,
        env->fprs[17].d la r7, env->fprs[17].v psq_lx fp31, 0, r7, 0,
        0
#else
        lfd fp14,
        env->fp14     //	restore FP14-FP31
            lfd       fp15,
        env->fp15 lfd fp16, env->fp16 lfd fp17, env->fp17 lfd fp18,
        env->fp18 lfd fp19, env->fp19 lfd fp20, env->fp20 lfd fp21,
        env->fp21 lfd fp22, env->fp22 lfd fp23, env->fp23 lfd fp24,
        env->fp24 lfd fp25, env->fp25 lfd fp26, env->fp26 lfd fp27,
        env->fp27 lfd fp28, env->fp28 lfd fp29, env->fp29 lfd fp30,
        env->fp30 lfd fp31,
        env->fp31
#endif                  /* __PPCGEKKO__ */
        lfd fp0,
        env->fpscr
#endif                  /* ndef _No_Floating_Point_Regs */
            cmpwi val,
        0 mr      r3,
        val
#ifndef _No_Floating_Point_Regs
            mtfsf 255,
        fp0             //	restore FPSCR
#endif                  /* ndef _No_Floating_Point_Regs */
            bnelr       //	return 'val'
                li r3,
        1               //	return 1
        blr
}
/*
    Change Record
 * hh  971207 Added <ansi_parms.h> header
*/
