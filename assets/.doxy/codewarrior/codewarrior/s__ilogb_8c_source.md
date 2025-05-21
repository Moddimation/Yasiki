

# File s\_ilogb.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Double\_precision**](dir_7833348e5deec0cfbc202fbe86c1fb0a.md) **>** [**s\_ilogb.c**](s__ilogb_8c.md)

[Go to the documentation of this file](s__ilogb_8c.md)


```C++

#ifndef _No_Floating_Point  
/* @(#)s_ilogb.c 1.2 95/01/04 */
/* $Id: s_ilogb.c,v 1.2.4.1 1999/12/06 19:47:31 fassiott Exp $ */
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

/* ilogb(double x)
 * return the binary exponent of non-zero x
 * ilogb(0) = 0x80000001
 * ilogb(inf/NaN) = 0x7fffffff (no signal is raised)
 */

#include "fdlibm.h"

#ifdef __STDC__
    int ilogb(double x)
#else
    int ilogb(x)
    double x;
#endif
{
    int hx,lx,ix;

    hx  = (__HI(x))&0x7fffffff; /* high word of x */
    if(hx<0x00100000) {
        lx = __LO(x);
        if((hx|lx)==0) 
        return 0x80000001;  /* ilogb(0) = 0x80000001 */
        else            /* subnormal x */
        if(hx==0) {
            for (ix = -1043; lx>0; lx<<=1) ix -=1;
        } else {
            for (ix = -1022,hx<<=11; hx>0; hx<<=1) ix -=1;
        }
        return ix;
    }
    else if (hx<0x7ff00000) return (hx>>20)-1023;
    else return 0x7fffffff;
}
#endif /* _No_Floating_Point  */
```


