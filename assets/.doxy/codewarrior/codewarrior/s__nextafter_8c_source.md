

# File s\_nextafter.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Double\_precision**](dir_7833348e5deec0cfbc202fbe86c1fb0a.md) **>** [**s\_nextafter.c**](s__nextafter_8c.md)

[Go to the documentation of this file](s__nextafter_8c.md)


```C++

#ifndef _No_Floating_Point  
/* @(#)s_nextafter.c 1.2 95/01/04 */
/* $Id: s_nextafter.c,v 1.2.4.1 1999/12/06 19:47:32 fassiott Exp $ */
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

/* IEEE functions
 *  nextafter(x,y)
 *  return the next machine floating-point number of x in the
 *  direction toward y.
 *   Special cases:
 */

#include "fdlibm.h"

#ifdef __STDC__
    double nextafter(double x, double y)
#else
    double nextafter(x,y)
    double x,y;
#endif
{
    int hx,hy,ix,iy;
    unsigned lx,ly;

    hx = __HI(x);       /* high word of x */
    lx = __LO(x);       /* low  word of x */
    hy = __HI(y);       /* high word of y */
    ly = __LO(y);       /* low  word of y */
    ix = hx&0x7fffffff;     /* |x| */
    iy = hy&0x7fffffff;     /* |y| */

    if(((ix>=0x7ff00000)&&((ix-0x7ff00000)|lx)!=0) ||   /* x is nan */ 
       ((iy>=0x7ff00000)&&((iy-0x7ff00000)|ly)!=0))     /* y is nan */ 
       return x+y;              
    if(x==y) return x;      /* x=y, return x */
    if((ix|lx)==0) {            /* x == 0 */
        __HI(x) = hy&0x80000000;    /* return +-minsubnormal */
        __LO(x) = 1;
        y = x*x;
        if(y==x) return y; else return x;   /* raise underflow flag */
    } 
    if(hx>=0) {             /* x > 0 */
        if(hx>hy||((hx==hy)&&(lx>ly))) {    /* x > y, x -= ulp */
        if(lx==0) hx -= 1;
        lx -= 1;
        } else {                /* x < y, x += ulp */
        lx += 1;
        if(lx==0) hx += 1;
        }
    } else {                /* x < 0 */
        if(hy>=0||hx>hy||((hx==hy)&&(lx>ly))){/* x < y, x -= ulp */
        if(lx==0) hx -= 1;
        lx -= 1;
        } else {                /* x > y, x += ulp */
        lx += 1;
        if(lx==0) hx += 1;
        }
    }
    hy = hx&0x7ff00000;
    if(hy>=0x7ff00000) return x+x;  /* overflow  */
    if(hy<0x00100000) {     /* underflow */
        y = x*x;
        if(y!=x) {      /* raise underflow flag */
        __HI(y) = hx; __LO(y) = lx;
        return y;
        }
    }
    __HI(x) = hx; __LO(x) = lx;
    return x;
}
#endif /* _No_Floating_Point  */
```


