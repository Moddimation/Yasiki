

# File s\_floor.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Math**](dir_12110d18fe016ada0ac20ca931a7efb5.md) **>** [**Double\_precision**](dir_4aa136d99b9df2fc861ef3e829b58508.md) **>** [**s\_floor.c**](s__floor_8c.md)

[Go to the documentation of this file](s__floor_8c.md)


```C++
#if !( __MIPS__ && __MIPS_ISA3__  && __MIPS_double_fpu__)
#ifndef _No_Floating_Point  
/* @(#)s_floor.c 1.2 95/01/04 */
/* $Id: s_floor.c,v 1.4.4.1 1999/12/06 19:47:31 fassiott Exp $ */
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

/*
 * floor(x)
 * Return x rounded toward -inf to integral value
 * Method:
 *  Bit twiddling.
 * Exception:
 *  Inexact flag raised if x not equal to floor(x).
 */

#include "fdlibm.h"

#if !( __MIPS__ && __MIPS_ISA3__ && __MIPS_double_fpu__)
#ifdef __STDC__
static const double big = 1.0e300;
#else
static double big = 1.0e300;
#endif

#ifdef __STDC__
    double floor(double x)
#else
    double floor(x)
    double x;
#endif
{
    int i0,i1,j0;
    unsigned i,j;
    i0 =  __HI(x);
    i1 =  __LO(x);
    j0 = ((i0>>20)&0x7ff)-0x3ff;
    if(j0<20) {
        if(j0<0) {  /* raise inexact if x != 0 */
        if(big+x>0.0) {/* return 0*sign(x) if |x|<1 */
            if(i0>=0) {i0=i1=0;} 
            else if(((i0&0x7fffffff)|i1)!=0)
            { i0=0xbff00000;i1=0;}
        }
        } else {
        i = (0x000fffff)>>j0;
        if(((i0&i)|i1)==0) return x; /* x is integral */
        if(big+x>0.0) { /* raise inexact flag */
            if(i0<0) i0 += (0x00100000)>>j0;
            i0 &= (~i); i1=0;
        }
        }
    } else if (j0>51) {
        if(j0==0x400) return x+x;   /* inf or NaN */
        else return x;      /* x is integral */
    } else {
        i = ((unsigned)(0xffffffff))>>(j0-20);
        if((i1&i)==0) return x; /* x is integral */
        if(big+x>0.0) {         /* raise inexact flag */
        if(i0<0) {
            if(j0==20) i0+=1; 
            else {
            j = i1+(1<<(52-j0));
            if(j<i1) i0 +=1 ;   /* got a carry */
            i1=j;
            }
        }
        i1 &= (~i);
        }
    }
    __HI(x) = i0;
    __LO(x) = i1;
    return x;
}
#endif /* MIPS */
#endif /* _No_Floating_Point  */
#endif /* !( __MIPS__ && __MIPS_ISA3__  && __MIPS_double_fpu__) */
```


