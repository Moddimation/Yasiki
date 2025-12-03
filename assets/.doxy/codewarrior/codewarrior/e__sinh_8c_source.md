

# File e\_sinh.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Math**](dir_12110d18fe016ada0ac20ca931a7efb5.md) **>** [**Double\_precision**](dir_4aa136d99b9df2fc861ef3e829b58508.md) **>** [**e\_sinh.c**](e__sinh_8c.md)

[Go to the documentation of this file](e__sinh_8c.md)


```C++

#ifndef _No_Floating_Point  
/* @(#)e_sinh.c 1.2 95/01/04 */
/* $Id: e_sinh.c,v 1.2.4.1 1999/12/06 19:47:53 fassiott Exp $ */
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

/* __ieee754_sinh(x)
 * Method : 
 * mathematically sinh(x) if defined to be (exp(x)-exp(-x))/2
 *  1. Replace x by |x| (sinh(-x) = -sinh(x)). 
 *  2. 
 *                                          E + E/(E+1)
 *      0        <= x <= 22     :  sinh(x) := --------------, E=expm1(x)
 *                                  2
 *
 *      22       <= x <= lnovft :  sinh(x) := exp(x)/2 
 *      lnovft   <= x <= ln2ovft:  sinh(x) := exp(x/2)/2 * exp(x/2)
 *      ln2ovft  <  x       :  sinh(x) := x*shuge (overflow)
 *
 * Special cases:
 *  sinh(x) is |x| if x is +INF, -INF, or NaN.
 *  only sinh(0)=0 is exact for finite x.
 */

#include "fdlibm.h"

#ifdef __STDC__
static const double one = 1.0, shuge = 1.0e307;
#else
static double one = 1.0, shuge = 1.0e307;
#endif

#ifdef __STDC__
    double __ieee754_sinh(double x)
#else
    double __ieee754_sinh(x)
    double x;
#endif
{   
    double t,w,h;
    int ix,jx;
    unsigned lx;

    /* High word of |x|. */
    jx = __HI(x);
    ix = jx&0x7fffffff;

    /* x is INF or NaN */
    if(ix>=0x7ff00000) return x+x;  

    h = 0.5;
    if (jx<0) h = -h;
    /* |x| in [0,22], return sign(x)*0.5*(E+E/(E+1))) */
    if (ix < 0x40360000) {      /* |x|<22 */
        if (ix<0x3e300000)      /* |x|<2**-28 */
        if(shuge+x>one) return x;/* sinh(tiny) = tiny with inexact */
        t = expm1(fabs(x));
        if(ix<0x3ff00000) return h*(2.0*t-t*t/(t+one));
        return h*(t+t/(t+one));
    }

    /* |x| in [22, log(maxdouble)] return 0.5*exp(|x|) */
    if (ix < 0x40862E42)  return h*__ieee754_exp(fabs(x));

    /* |x| in [log(maxdouble), overflowthresold] */
    lx = *( (((*(unsigned*)&one)>>29)) + (unsigned*)&x);
    if (ix<0x408633CE || (ix==0x408633ce)&&(lx<=(unsigned)0x8fb9f87d)) {
        w = __ieee754_exp(0.5*fabs(x));
        t = h*w;
        return t*w;
    }

    /* |x| > overflowthresold, sinh(x) overflow */
    return x*shuge;
}
#endif /* _No_Floating_Point  */
```


