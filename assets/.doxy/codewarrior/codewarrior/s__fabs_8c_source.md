

# File s\_fabs.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Math**](dir_12110d18fe016ada0ac20ca931a7efb5.md) **>** [**Double\_precision**](dir_4aa136d99b9df2fc861ef3e829b58508.md) **>** [**s\_fabs.c**](s__fabs_8c.md)

[Go to the documentation of this file](s__fabs_8c.md)


```C++
#if !(__MIPS__ && __MIPS_ISA2__ && __MIPS_double_fpu__)
#ifndef _No_Floating_Point  
/* @(#)s_fabs.c 1.2 95/01/04 */
/* $Id: s_fabs.c,v 1.4.4.1 1999/12/06 19:47:31 fassiott Exp $ */
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
 * fabs(x) returns the absolute value of x.
 */

#if !defined(__MIPS__)

#include "fdlibm.h"

#ifdef __STDC__
     double   fabs(double x)    /* wrapper pow */
#else
    double fabs(x)
    double x;
#endif
{
    __HI(x) &= 0x7fffffff;
        return x;
}

#endif /* !defined(__MIPS__)    */

#endif /* _No_Floating_Point  */
#endif /* !(__MIPS__ && __MIPS_ISA2__ && __MIPS_double_fpu__) */
```


