

# File stdbool.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**stdbool.h**](stdbool_8h.md)

[Go to the documentation of this file](stdbool_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/03/24 05:37:37 $ 
 *  $Revision: 1.1 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */
 
/*
 *  stdbool.h
 *
 *  based on the 18 January 1999 committee draft
 *
*/

#ifndef _STDBOOL_H
#define _STDBOOL_H

#if !(__option(c9x) && !__option(cplusplus))
#error "stdbool.h relies on C9X language features"
#endif

#define bool                            _Bool
#define true                            1
#define false                           0
#define __bool_true_false_are_defined   1

#endif

/*
 * Change record
 * blc 990323 Created.
 */
```


