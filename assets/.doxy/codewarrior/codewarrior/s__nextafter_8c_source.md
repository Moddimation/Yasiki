

# File s\_nextafter.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Math**](dir_12110d18fe016ada0ac20ca931a7efb5.md) **>** [**Double\_precision**](dir_4aa136d99b9df2fc861ef3e829b58508.md) **>** [**s\_nextafter.c**](s__nextafter_8c.md)

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


