

# File k\_sin.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Double\_precision**](dir_7833348e5deec0cfbc202fbe86c1fb0a.md) **>** [**k\_sin.c**](k__sin_8c.md)

[Go to the documentation of this file](k__sin_8c.md)


```C++

#ifndef _No_Floating_Point  
/* @(#)k_sin.c 1.2 95/01/04 */
/* $Id: k_sin.c,v 1.2.4.1 1999/12/06 19:47:53 fassiott Exp $ */
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

/* __kernel_sin( x, y, iy)
 * kernel sin function on [-pi/4, pi/4], pi/4 ~ 0.7854
 * Input x is assumed to be bounded by ~pi/4 in magnitude.
 * Input y is the tail of x.
 * Input iy indicates whether y is 0. (if iy=0, y assume to be 0). 
 *
 * Algorithm
 *  1. Since sin(-x) = -sin(x), we need only to consider positive x. 
 *  2. if x < 2^-27 (hx<0x3e400000 0), return x with inexact if x!=0.
 *  3. sin(x) is approximated by a polynomial of degree 13 on
 *     [0,pi/4]
 *                   3            13
 *      sin(x) ~ x + S1*x + ... + S6*x
 *     where
 *  
 *  |sin(x)         2     4     6     8     10     12  |     -58
 *  |----- - (1+S1*x +S2*x +S3*x +S4*x +S5*x  +S6*x   )| <= 2
 *  |  x                               | 
 * 
 *  4. sin(x+y) = sin(x) + sin'(x')*y
 *          ~ sin(x) + (1-x*x/2)*y
 *     For better accuracy, let 
 *           3      2      2      2      2
 *      r = x *(S2+x *(S3+x *(S4+x *(S5+x *S6))))
 *     then                   3    2
 *      sin(x) = x + (S1*x + (x *(r-y/2)+y))
 */

#include "fdlibm.h"

#ifdef __STDC__
static const double 
#else
static double 
#endif
half =  5.00000000000000000000e-01, /* 0x3FE00000, 0x00000000 */
S1  = -1.66666666666666324348e-01, /* 0xBFC55555, 0x55555549 */
S2  =  8.33333333332248946124e-03, /* 0x3F811111, 0x1110F8A6 */
S3  = -1.98412698298579493134e-04, /* 0xBF2A01A0, 0x19C161D5 */
S4  =  2.75573137070700676789e-06, /* 0x3EC71DE3, 0x57B1FE7D */
S5  = -2.50507602534068634195e-08, /* 0xBE5AE5E6, 0x8A2B9CEB */
S6  =  1.58969099521155010221e-10; /* 0x3DE5D93A, 0x5ACFD57C */

#ifdef __STDC__
    double __kernel_sin(double x, double y, int iy)
#else
    double __kernel_sin(x, y, iy)
    double x,y; int iy;     /* iy=0 if y is zero */
#endif
{
    double z,r,v;
    int ix;
    ix = __HI(x)&0x7fffffff;    /* high word of x */
    if(ix<0x3e400000)           /* |x| < 2**-27 */
       {if((int)x==0) return x;}        /* generate inexact */
    z   =  x*x;
    v   =  z*x;
    r   =  S2+z*(S3+z*(S4+z*(S5+z*S6)));
    if(iy==0) return x+v*(S1+z*r);
    else      return x-((z*(half*y-v*r)-y)-v*S1);
}
#endif /* _No_Floating_Point  */
```


