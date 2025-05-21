

# File iostream

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C++**](dir_bbcc9336d50f30308554b0fe78acfee6.md) **>** [**MSL\_Common**](dir_0c0c2b83f86d5caed54e8218e0fa784d.md) **>** [**Include**](dir_4b09b958bee5575b6e3a9125618b7d0e.md) **>** [**iostream**](iostream.md)

[Go to the documentation of this file](iostream.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/12/09 17:58:50 $ 
 *  $Revision: 1.8.6.1 $ 
 *  $NoKeywords: $ 
 *
 *      Portions Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/**
 **  iostream
 **/

#ifndef _IOSTREAM
#define _IOSTREAM

#include <mslconfig>

#ifndef _MSL_NO_IO

#include <istream>
#include <ostream>

#ifndef RC_INVOKED

#pragma options align=native
#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import on
#endif

#ifndef _MSL_NO_CPP_NAMESPACE
    namespace std {
#endif

extern istream cin;
extern ostream cout;
extern ostream clog;
extern ostream cerr;

// hh 990109 Added support for wide standard streams
#ifndef _MSL_NO_WCHART

    extern wistream wcin;
    extern wostream wcout;
    extern wostream wclog;
    extern wostream wcerr;

#endif

static ios_base::Init  __msl_ios_base_init;

#ifndef _MSL_NO_CPP_NAMESPACE
    } // namespace std 
#endif

#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import reset
#endif
#pragma options align=reset

#endif // RC_INVOKED

#endif // _MSL_NO_IO

#endif //  _IOSTREAM

// hh 971220 fixed MOD_INCLUDE
// hh 971222 added alignment wrapper
// hh 971222 Changed filename from iostream.h to iostream
// hh 971222 Made include guards standard
// hh 971230 added RC_INVOKED wrapper
// hh 990109 Added support for wide standard streams
// hh 990120 Rewritten
```


