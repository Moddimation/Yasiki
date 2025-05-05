/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/29 16:06:32 $
 * $Revision: 1.18.4.2 $
 */

/********************************************************************************
 *      A collection of functions designed to provide access to the floating    *
 *      point environment for numerical programming. It is modeled after the    *
 *      Numerical C Extensions GroupÃÂs requirements ( NCEG / X3J11.1 ). *
 *                                                                              *
 *      The file <fenv.h> declares many functions in support of numerical       *
 *      programming.  It provides a set of environmental controls similar to    *
 *      the ones found in <SANE.h>.  Programs that test flags or run under      *
 *      non-default modes must do so under the effect of an enabling            *
 *      "fenv_access" pragma.                                                   *
 *                                                                              * *
 *Written by Ali Sazegari, started on October 1992.                       *
 ********************************************************************************/

#ifndef _MSL_FENV_H
#define _MSL_FENV_H

#include <ansi_parms.h>

#if __MACH__
#include <CoreServices/fenv.h>
#else

#if __POWERPC__

/*    The typedef fenv_t is a type for representing the entire floating-point
      environment in a single object.                                         */

typedef long int fenv_t;

/*    The typedef fexcept_t is a type for representing the floating-point
      exception flag state collectively.                                      */

typedef long int fexcept_t;

/*    Definitions of floating-point exception macros                          */

#define FE_INEXACT    0x02000000
#define FE_DIVBYZERO  0x04000000
#define FE_UNDERFLOW  0x08000000
#define FE_OVERFLOW   0x10000000
#define FE_INVALID    0x20000000

/*    Definitions of rounding direction macros                                */

#define FE_TONEAREST  0x00000000
#define FE_TOWARDZERO 0x00000001
#define FE_UPWARD     0x00000002
#define FE_DOWNWARD   0x00000003

#endif                             /* __POWERPC__	*/

#if __MC68K__

#if __MC68881__

typedef long fexcept_t;

typedef struct
{
    long FPCR;
    long FPSR;
} fenv_t;

#define FE_INEXACT   ((long)(8))
#define FE_DIVBYZERO ((long)(16))
#define FE_UNDERFLOW ((long)(32))
#define FE_OVERFLOW  ((long)(64))
#define FE_INVALID   ((long)(128))

#else

typedef short fexcept_t;
typedef short fenv_t;

#define FE_INVALID   ((short)(1))
#define FE_UNDERFLOW ((short)(2))
#define FE_OVERFLOW  ((short)(4))
#define FE_DIVBYZERO ((short)(8))
#define FE_INEXACT   ((short)(16))

#endif                             /* __MC68881__	*/

#define FE_TONEAREST  ((short)(0))
#define FE_UPWARD     ((short)(1))
#define FE_DOWNWARD   ((short)(2))
#define FE_TOWARDZERO ((short)(3))

/*    Definitions of rounding precision macros  (68K only)                    */

#define FE_LDBLPREC   ((short)(0))
#define FE_DBLPREC    ((short)(1))
#define FE_FLTPREC    ((short)(2))

#endif                             /* __MC68K__	*/

#if __INTEL__
typedef short fexcept_t;
typedef long  fenv_t; /* control word/status word  */

#define FE_INVALID    0x0001
#define FE_DIVBYZERO  0x0004
#define FE_OVERFLOW   0x0008
#define FE_UNDERFLOW  0x0010
#define FE_INEXACT    0x0020

#define FE_TONEAREST  0x00000000
#define FE_TOWARDZERO 0x00000C00
#define FE_UPWARD     0x00000800
#define FE_DOWNWARD   0x00000400

#define FE_LDBLPREC   0x00000300
#define FE_DBLPREC    0x00000200
#define FE_FLTPREC    0x00000000

#endif                             /*  __INTEL__    */

/*    The bitwise OR of all exception macros                                  */
#define FE_ALL_EXCEPT (FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID)
/*    Definition of pointer to IEEE default environment object                */

_MSL_BEGIN_EXTERN_C /*- cc 010409 -*/

    extern fenv_t _FE_DFL_ENV;
#define FE_DFL_ENV    &_FE_DFL_ENV /* pointer to default environment    */
/*******************************************************************************
 *     The following functions provide access to the exception flags.  The      *
 *     "int" input argument can be constructed by bitwise ORs of the exception  *
 *     macros: for example: FE_OVERFLOW | FE_INEXACT.                           *
 *******************************************************************************/

/*******************************************************************************
 *     The function "feclearexcept" clears the supported exceptions represented *
 *     by its argument.                                                         *
 *******************************************************************************/

_MSL_IMP_EXP_C void feclearexcept (int);
#if __INTEL__
/* the most recent api in the C9X draft changed from feget/setexcept to
   feget/setexceptflag to distinguish these two api's from the others in that
   these deal with the entire exception environment(i.e. they use/update the
   fexcept_t argument passed in).  Currently fexcept_t is just the status word.
   This data structure may be extended in the future to contain other information
   such as a field containing the address of the code that first raised a particular
   exception.

   Apple hasn't updated their implementation as of the 3.0.1
   Universal headers.  We reserve the old names on INTEL for portability. These
   might go away once apple updates their implementation.
   mf-  11/26/97
*/

/* currently the variable fexcept_t is just the status word. For this reason
   fegetexceptflag is functionally equivalent to fetestexcept.  fetestexcept is
   slightly more efficient.
*/
_MSL_IMP_EXP_C void fegetexceptflag (fexcept_t*, int);

/*******************************************************************************
 *     The function "fesetexcept" or "fesetexceptflag"sets or clears the        *
 *     exception flags indicated                                                *
 *     by the int argument "excepts" according to the representation in the     *
 *     object pointed to by the pointer argument "flagp".  The value of         *
 *     "*flagp" must have been set by a previous call to "fegetexcept".         *
 *     This function does not raise exceptions; it just sets the state of       *
 *     the flags.                                                               *
 *******************************************************************************/

_MSL_IMP_EXP_C void fesetexceptflag (const fexcept_t*, int);

#define fegetexcept fegetexceptflag
#define fesetexcept fesetexceptflag
#else
_MSL_IMP_EXP_C void fegetexcept (fexcept_t*, int);
_MSL_IMP_EXP_C void fesetexcept (const fexcept_t*, int);
#endif

_MSL_IMP_EXP_C void feraiseexcept (int);

/*******************************************************************************
 *     The function "fetestexcept" determines which of the specified subset of  *
 *     the exception flags are currently set.  The argument "excepts" specifies *
 *     the exception flags to be queried as a bitwise OR of the exception       *
 *     macros.  This function returns the bitwise OR of the exception macros    *
 *     corresponding to the currently set exceptions included in "excepts".     *
 *******************************************************************************/

_MSL_IMP_EXP_C int fetestexcept (int);
/*******************************************************************************
 *     The following functions provide control of rounding direction modes.     *
 *******************************************************************************/

/*******************************************************************************
 *     The function "fegetround" returns the value of the rounding direction    *
 *     macro which represents the current rounding direction.                   *
 *******************************************************************************/

_MSL_IMP_EXP_C int fegetround (void);

/*******************************************************************************
 *     The function "fesetround" establishes the rounding direction represented *
 *     by its argument.  It returns nonzero if and only if the argument matches *
 *     a rounding direction macro.  If not, the rounding direction is not       *
 *     changed.                                                                 *
 *******************************************************************************/

_MSL_IMP_EXP_C int fesetround (int);

/*******************************************************************************
 *    The following functions manage the floating-point environment, exception  *
 *    flags and dynamic modes, as one entity.                                   *
 *******************************************************************************/

/*******************************************************************************
 *     The function "fegetenv" stores the current floating-point environment    *
 *     in the object pointed to by its pointer argument "envp".                 *
 *******************************************************************************/

_MSL_IMP_EXP_C void fegetenv (fenv_t*);

/*******************************************************************************
 *     The function "feholdexcept" saves the current environment in the object  *
 *     pointed to by its pointer argument "envp", clears the exception flags,   *
 *     and clears floating-point exception enables.  This function supersedes   *
 *     the SANE function "procentry", but it does not change the current        *
 *     rounding direction mode.                                                 *
 *******************************************************************************/

_MSL_IMP_EXP_C int feholdexcept (fenv_t*);

/*******************************************************************************
 *     The function "fesetenv" installs the floating-point environment          *
 *     environment represented by the object pointed to by its argument         *
 *     "envp".  The value of "*envp" must be set by a call to "fegetenv" or     *
 *     "feholdexcept", by an implementation-defined macro of type "fenv_t",     *
 *     or by the use of the pointer macro FE_DFL_ENV as the argument.           *
 *******************************************************************************/
_MSL_IMP_EXP_C void fesetenv (const fenv_t*);

/*******************************************************************************
 *     The function "feupdateenv" saves the current exceptions into its         *
 *     automatic storage, installs the environment represented through its      *
 *     pointer argument "envp", and then re-raises the saved exceptions.        *
 *     This function, which supersedes the SANE function "procexit", can be     *
 *     used in conjunction with "feholdexcept" to write routines which hide     *
 *     spurious exceptions from their callers.                                  *
 *******************************************************************************/

_MSL_IMP_EXP_C void feupdateenv (const fenv_t*);

#if __MC68K__ || __INTEL__

/*******************************************************************************
 *     The following functions provide control of rounding precision.           *
 *     Because the PowerPC does not provide this capability, these functions    *
 *     are available only for the 68K Macintosh and X86. Rounding precision     *
 *     values are defined by the rounding precision macros.  These functions are*
 *     equivalent to the SANE functions getprecision and setprecision.          *
 *     These are an optional part of the C9X draft standard--m.f. 7/15/97       *
 *******************************************************************************/

_MSL_IMP_EXP_C int fegetprec (void);
_MSL_IMP_EXP_C int fesetprec (int);

#endif                             /* __MC68K__ */

_MSL_END_EXTERN_C /*- cc 010409 -*/

#endif                             /* __MACH__ */

#endif                             /* _MSL_FENV_H */

                                   /* Change record:
                                    * mf  971216 intel impementation complete(including precision functions
                                    * feset/getprec                                 mf  970715 added support for X86
                                    * moved header to common\Public                                 Includes                                    ngk 950117                                    Use
                                    * ConditionalMacros for processor info                                 PAF                                    940513 Added                                    fegetprec
                                    * and fesetprec and                                    corresponding macros for 68K                                 PAF 940222
                                    * Modified                                    for                                 68K compatability                                    ali 920823 included                                    C++                                    extern "C"
                                    * wrappers to make them C++                                 friendly.                                    ali                                    930408 changed "enums" to
                                    * "macros" to be more                                    compatible with the                                 FPCE of NCEG                                    JPO                                    930205
                                    * Changed function                                 types of
                                    * feclearexcept,fegetexcept,                                 feraiseexcept, and
                                    * fesetexcept                                 from int to                                 void to
                                    * reflect changes in                                    NCEG                                 specification.  Changed definition of
                                    * FE_DFL_ENV                                 from typedef to #define.                                    Modified                                    comments                                    describing
                                    * functionality.                                 JWW 001208                                    Added case                                    for targeting Mach-O                                    cc
                                    * 010409 updated                                    defines to                                 JWW new namespace macros                                    JWW 010729
                                    * Updated Mach-O                                 section to get the system fenv.h
                                    * from the CoreServices framework
                                    */
