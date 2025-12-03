

# File MSLHeaders++.cp

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C++**](dir_1d8bcf55c9e1564519df8a05b1def2d1.md) **>** [**MSL\_Precompiled\_Headers**](dir_d26d753317f353d6066c4c85b24e2704.md) **>** [**Src**](dir_c5e5ef435a29f09c5697fd895bbe5c13.md) **>** [**MSLHeaders++.cp**](_m_s_l_headers_09_09_8cp.md)

[Go to the documentation of this file](_m_s_l_headers_09_09_8cp.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/12/09 17:57:44 $ 
 *  $Revision: 1.2.4.1 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*  This file contains the code that gets precompiled.  */

#if macintosh
    /*  option 1
     *  to have ansi_prefix not include MacHeaders set MSL_USE_PRECOMPILED_HEADERS to something other than 0 or 1
     *  uncommenting the following line will achieve this.
     */

    /*  #define MSL_USE_PRECOMPILED_HEADERS 2 */

    /*  option 2
     *  to generate MacHeaders as part of the MSL pch leave everything as is.
     */

    #ifndef MSL_USE_PRECOMPILED_HEADERS
    #define MSL_USE_PRECOMPILED_HEADERS 1   
    #endif
    
    #include <ansi_prefix.mac.h>

#elif __INTEL__ && !__BEOS__

    #include <ansi_prefix.win32.h>

#elif __PPC_EABI__

    /* prefix file is in Language preference panel */
    
#else
    #error "OS currently unsupported"
#endif

#include <iosfwd>
#if 0
// Support
#include <exception>
#include <new>
#include <limits>
#include <typeinfo>
// Diagnostics
#include <stdexcept>
// Iterators
#include <iterator>
// Utilities
#include <functional>
#include <memory>
#include <utility>
// Algorithms
#include <algorithm>
// Strings
#include <string>
// Containers
#include <bitset>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <vector>
#include <queue>
#include <stack>
// Localization
#include <locale>
// Input/Output
#include <ios>
#include <streambuf>
#include <istream>
#include <ostream>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
// Numerics
#include <complex>
#include <numeric>
#include <valarray>

//#include <algobase.h>
//#include <extbasic.h>
//#include <extfunc.h>
//#include <extmath.h>
//#include <hashfun.h>
//#include <hashmap.h>
//#include <hashmmap.h>
//#include <hashmset.h>
//#include <hashset.h>
//#include <hashtbl.h>
//#include <heap.h>
//#include <mtools.h>
//#include <mutex.h>
//#include <slist.h>
//#include <tree.h>
#endif
```


