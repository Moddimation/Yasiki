

# File s\_sin.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Math**](dir_12110d18fe016ada0ac20ca931a7efb5.md) **>** [**Double\_precision**](dir_4aa136d99b9df2fc861ef3e829b58508.md) **>** [**s\_sin.c**](s__sin_8c.md)

[Go to the documentation of this file](s__sin_8c.md)


```C++

#ifndef _No_Floating_Point  
/* @(#)s_sin.c 1.2 95/01/04 */
/* $Id: s_sin.c,v 1.2.4.1 1999/12/06 19:47:32 fassiott Exp $ */
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

/* sin(x)
 * Return sine function of x.
 *
 * kernel function:
 *  __kernel_sin        ... sine function on [-pi/4,pi/4]
 *  __kernel_cos        ... cose function on [-pi/4,pi/4]
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
    double sin(double x)
#else
    double sin(x)
    double x;
#endif
{
    double y[2],z=0.0;
    int n, ix;

    /* High word of x. */
    ix = __HI(x);

    /* |x| ~< pi/4 */
    ix &= 0x7fffffff;
    if(ix <= 0x3fe921fb) return __kernel_sin(x,z,0);

    /* sin(Inf or NaN) is NaN */
    else if (ix>=0x7ff00000) return x-x;

    /* argument reduction needed */
    else {
    
        n = __ieee754_rem_pio2(x,y);
   
                
        switch(n&3) {
        case 0: return  __kernel_sin(y[0],y[1],1);
        case 1: return  __kernel_cos(y[0],y[1]);
        case 2: return -__kernel_sin(y[0],y[1],1);
        default:
            return -__kernel_cos(y[0],y[1]);
        }
    }
}
#endif /* _No_Floating_Point  */
```


