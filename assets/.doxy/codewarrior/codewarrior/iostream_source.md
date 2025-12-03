

# File iostream

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C++**](dir_1d8bcf55c9e1564519df8a05b1def2d1.md) **>** [**MSL\_Common**](dir_fc42de24ef3c14a5dea3aca327bd2ec9.md) **>** [**Include**](dir_f262df31fb8e04d575b9a3aa2e30ecf8.md) **>** [**iostream**](iostream.md)

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


