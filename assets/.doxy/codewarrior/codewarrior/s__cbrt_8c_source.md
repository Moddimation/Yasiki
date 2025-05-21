

# File s\_cbrt.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Double\_precision**](dir_7833348e5deec0cfbc202fbe86c1fb0a.md) **>** [**s\_cbrt.c**](s__cbrt_8c.md)

[Go to the documentation of this file](s__cbrt_8c.md)


```C++

#ifndef _No_Floating_Point  
/* @(#)s_cbrt.c 1.2 95/01/04 */
/* $Id: s_cbrt.c,v 1.3.4.1 1999/12/06 19:47:53 fassiott Exp $ */
/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunPro, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice 
 * is preserved.
 * ====================================================
 *
 */

#include "fdlibm.h"

/* cbrt(x)
 * Return cube root of x
 */
#ifdef __STDC__
static const unsigned 
#else
static unsigned 
#endif
    B1 = 715094163, /* B1 = (682-0.03306235651)*2**20 */
    B2 = 696219795; /* B2 = (664-0.03306235651)*2**20 */

#ifdef __STDC__
static const double
#else
static double
#endif
C =  5.42857142857142815906e-01, /* 19/35     = 0x3FE15F15, 0xF15F15F1 */
D = -7.05306122448979611050e-01, /* -864/1225 = 0xBFE691DE, 0x2532C834 */
E =  1.41428571428571436819e+00, /* 99/70     = 0x3FF6A0EA, 0x0EA0EA0F */
F =  1.60714285714285720630e+00, /* 45/28     = 0x3FF9B6DB, 0x6DB6DB6E */
G =  3.57142857142857150787e-01; /* 5/14      = 0x3FD6DB6D, 0xB6DB6DB7 */

#ifdef __STDC__
double cbrt(double x) ;
    double cbrt(double x) 
#else
    double cbrt(x) 
    double x;
#endif
{
    int hx;
    double r,s,t=0.0,w;
    unsigned sign;


    hx = __HI(x);       /* high word of x */
    sign=hx&0x80000000;         /* sign= sign(x) */
    hx  ^=sign;
    if(hx>=0x7ff00000) return(x+x); /* cbrt(NaN,INF) is itself */
    if((hx|__LO(x))==0) 
        return(x);      /* cbrt(0) is itself */

    __HI(x) = hx;   /* x <- |x| */
    /* rough cbrt to 5 bits */
    if(hx<0x00100000)       /* subnormal number */
      {__HI(t)=0x43500000;      /* set t= 2**54 */
       t*=x; __HI(t)=__HI(t)/3+B2;
      }
    else
      __HI(t)=hx/3+B1;  


    /* new cbrt to 23 bits, may be implemented in single precision */
    r=t*t/x;
    s=C+r*t;
    t*=G+F/(s+E+D/s);   

    /* chopped to 20 bits and make it larger than cbrt(x) */ 
    __LO(t)=0; __HI(t)+=0x00000001;


    /* one step newton iteration to 53 bits with error less than 0.667 ulps */
    s=t*t;      /* t*t is exact */
    r=x/s;
    w=t+t;
    r=(r-t)/(w+r);  /* r-s is exact */
    t=t+t*r;

    /* retore the sign bit */
    __HI(t) |= sign;
    return(t);
}
#endif /* _No_Floating_Point  */
```


