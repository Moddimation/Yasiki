

# File e\_gamma\_r.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Math**](dir_12110d18fe016ada0ac20ca931a7efb5.md) **>** [**Double\_precision**](dir_4aa136d99b9df2fc861ef3e829b58508.md) **>** [**e\_gamma\_r.c**](e__gamma__r_8c.md)

[Go to the documentation of this file](e__gamma__r_8c.md)


```C++

#ifndef _No_Floating_Point  
/* @(#)e_gamma_r.c 1.2 95/01/04 */
/* $Id: e_gamma_r.c,v 1.2.4.1 1999/12/06 19:47:52 fassiott Exp $ */
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

/* __ieee754_gamma_r(x, signgamp)
 * Reentrant version of the logarithm of the Gamma function 
 * with user provide pointer for the sign of Gamma(x). 
 *
 * Method: See __ieee754_lgamma_r
 */

#include "fdlibm.h"

#ifdef __STDC__
    double __ieee754_gamma_r(double x, int *signgamp)
#else
    double __ieee754_gamma_r(x,signgamp)
    double x; int *signgamp;
#endif
{
    return __ieee754_lgamma_r(x,signgamp);
}
#endif /* _No_Floating_Point  */
```


