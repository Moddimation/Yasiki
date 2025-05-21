

# File e\_gamma\_r.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Double\_precision**](dir_7833348e5deec0cfbc202fbe86c1fb0a.md) **>** [**e\_gamma\_r.c**](e__gamma__r_8c.md)

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


