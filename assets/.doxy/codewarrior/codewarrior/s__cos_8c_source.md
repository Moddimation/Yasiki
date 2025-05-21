

# File s\_cos.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Double\_precision**](dir_7833348e5deec0cfbc202fbe86c1fb0a.md) **>** [**s\_cos.c**](s__cos_8c.md)

[Go to the documentation of this file](s__cos_8c.md)


```C++

#ifndef _No_Floating_Point  
/* @(#)s_cos.c 1.2 95/01/04 */
/* $Id: s_cos.c,v 1.2.4.1 1999/12/06 19:47:31 fassiott Exp $ */
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

/* cos(x)
 * Return cosine function of x.
 *
 * kernel function:
 *  __kernel_sin        ... sine function on [-pi/4,pi/4]
 *  __kernel_cos        ... cosine function on [-pi/4,pi/4]
 *  __ieee754_rem_pio2  ... argument reduction routine
 *
 * Method.
 *      Let S,C and T denote the sin, cos and tan respectively on 
 *  [-PI/4, +PI/4]. Reduce the argument x to y1+y2 = x-k*pi/2 
 *  in [-pi/4 , +pi/4], and let n = k mod 4.
 *  We have
 *
 *          n        sin(x)      cos(x)        tan(x)
 *     ----------------------------------------------------------
 *      0          S       C         T
 *      1          C      -S        -1/T
 *      2         -S      -C         T
 *      3         -C       S        -1/T
 *     ----------------------------------------------------------
 *
 * Special cases:
 *      Let trig be any of sin, cos, or tan.
 *      trig(+-INF)  is NaN, with signals;
 *      trig(NaN)    is that NaN;
 *
 * Accuracy:
 *  TRIG(x) returns trig(x) nearly rounded 
 */

#include "fdlibm.h"

#ifdef __STDC__
     double   cos(double x) /* wrapper pow */
#else
    double cos(x)
    double x;
#endif
{
    double y[2],z=0.0;
    int n, ix;

    /* High word of x. */
    ix = __HI(x);

    /* |x| ~< pi/4 */
    ix &= 0x7fffffff;  /* cos even don't need sign */
    if(ix <= 0x3fe921fb) return __kernel_cos(x,z);

    /* cos(Inf or NaN) is NaN */
    else if (ix>=0x7ff00000) return x-x;

    /* argument reduction needed */
    else {
        n = __ieee754_rem_pio2(x,y);
        switch(n&3) {
        case 0: return  __kernel_cos(y[0],y[1]);
        case 1: return -__kernel_sin(y[0],y[1],1);
        case 2: return -__kernel_cos(y[0],y[1]);
        default:
                return  __kernel_sin(y[0],y[1],1);
        }
    }
}
#endif /* _No_Floating_Point  */
```


