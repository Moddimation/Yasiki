

# File stdbool.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**stdbool.h**](stdbool_8h.md)

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


