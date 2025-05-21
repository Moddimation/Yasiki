

# File fdlibm.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Include**](dir_7e35b4b095be7a5e1762bcb4cc57d219.md) **>** [**fdlibm.h**](fdlibm_8h.md)

[Go to the documentation of this file](fdlibm_8h.md)


```C++

/* @(#)fdlibm.h 1.2 95/01/04 */
/* $Id: fdlibm.h,v 1.4.4.1 1999/12/07 20:31:23 fassiott Exp $ */
/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunPro, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice 
 * is preserved.
 * ====================================================
 */
#ifdef __STDC__
#include <math.h>
#include <errno.h>
#endif

#define _IEEE_LIBM

#if __option(little_endian)
#define __HIp(x) *(1+(int*)x)
#define __LOp(x) *(int*)x
#else
#define __HIp(x) *(int*)x
#define __LOp(x) *(1+(int*)x)
#endif

#ifdef __STDC__
#define __P(p)  p
#else
#define __P(p)  ()
#endif

/*
 * ANSI/POSIX
 */

extern int signgam;

#define MAXFLOAT    ((float)3.40282346638528860e+38)

enum fdversion {fdlibm_ieee = -1, fdlibm_svid, fdlibm_xopen, fdlibm_posix};

#define _LIB_VERSION_TYPE enum fdversion
#define _LIB_VERSION _fdlib_version  

/* if global variable _LIB_VERSION is not desirable, one may 
 * change the following to be a constant by: 
 *  #define _LIB_VERSION_TYPE const enum version
 * In that case, after one initializes the value _LIB_VERSION (see
 * s_lib_version.c) during compile time, it cannot be modified
 * in the middle of a program
 */ 
extern  _LIB_VERSION_TYPE  _LIB_VERSION;

#define _IEEE_  fdlibm_ieee
#define _SVID_  fdlibm_svid
#define _XOPEN_ fdlibm_xopen
#define _POSIX_ fdlibm_posix

struct exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};

#define HUGE        MAXFLOAT

/* 
 * set X_TLOSS = pi*2**52, which is possibly defined in <values.h>
 * (one may replace the following line by "#include <values.h>")
 */

#define X_TLOSS     1.41484755040568800000e+16 

#define DOMAIN      1
#define SING        2
#define OVERFLOW    3
#define UNDERFLOW   4
#define TLOSS       5
#define PLOSS       6

/*
 * ANSI/POSIX
 */

extern int matherr __P((struct exception *));

/*
 * IEEE Test Vector
 */
extern double significand __P((double));

/*
 * Functions callable from C, intended to support IEEE arithmetic.
 */

extern int ilogb __P((double));

/*
 * BSD math library entry points
 */

/*
 * Reentrant version of gamma & lgamma; passes signgam back by reference
 * as the second argument; user must allocate space for signgam.
 */
#ifdef _REENTRANT
extern double gamma_r __P((double, int *));
extern double lgamma_r __P((double, int *));
#endif  /* _REENTRANT */

/* ieee style elementary functions */
extern double __ieee754_sqrt __P((double));         
extern double __ieee754_acos __P((double));         
extern double __ieee754_acosh __P((double));            
extern double __ieee754_log __P((double));          
extern double __ieee754_atanh __P((double));            
extern double __ieee754_asin __P((double));         
extern double __ieee754_atan2 __P((double,double));         
extern double __ieee754_exp __P((double));
extern double __ieee754_cosh __P((double));
extern double __ieee754_fmod __P((double,double));
extern double __ieee754_pow __P((double,double));
extern double __ieee754_lgamma_r __P((double,int *));
extern double __ieee754_gamma_r __P((double,int *));
extern double __ieee754_lgamma __P((double));
extern double __ieee754_gamma __P((double));
extern double __ieee754_log10 __P((double));
extern double __ieee754_sinh __P((double));
extern double __ieee754_hypot __P((double,double));
extern double __ieee754_j0 __P((double));
extern double __ieee754_j1 __P((double));
extern double __ieee754_y0 __P((double));
extern double __ieee754_y1 __P((double));
extern double __ieee754_jn __P((int,double));
extern double __ieee754_yn __P((int,double));
extern double __ieee754_remainder __P((double,double));
extern int    __ieee754_rem_pio2 __P((double,double*));

extern double __ieee754_scalb __P((double,int));


/* fdlibm kernel function */
extern double __kernel_standard __P((double,double,int));   
extern double __kernel_sin __P((double,double,int));
extern double __kernel_cos __P((double,double));
extern double __kernel_tan __P((double,double,int));
extern int    __kernel_rem_pio2 __P((double*,double*,int,int,int,const int*));




```


