

# File slist.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C++**](dir_1d8bcf55c9e1564519df8a05b1def2d1.md) **>** [**MSL\_Common**](dir_fc42de24ef3c14a5dea3aca327bd2ec9.md) **>** [**Include**](dir_f262df31fb8e04d575b9a3aa2e30ecf8.md) **>** [**slist.h**](slist_8h.md)

[Go to the documentation of this file](slist_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/12/09 17:59:45 $ 
 *  $Revision: 1.8.6.1 $ 
 *  $NoKeywords: $ 
 *
 *      Portions Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

#ifndef _SLIST_H
#define _SLIST_H

#include <slist>

#ifndef _MSL_NO_CPP_NAMESPACE
    using std::slist;
#endif

#endif // _SLIST_H 

// hh 971220 fixed MOD_INCLUDE
// hh 971223 added alignment wrapper
// hh 971223 added header <iterator>
// dwa, hh 980306 added qualifier to iterator in two places
// hh 980306 removed unused argument in two places
// hh 980713 Temporarily moved member templates into class definition to support compiler
// hh 980902 #ifdef'd out exception code when ndef MSIPL_EXCEPT
// hh 990629 Rewrote
```


