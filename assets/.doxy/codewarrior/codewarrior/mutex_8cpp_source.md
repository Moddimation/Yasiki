

# File mutex.cpp

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C++**](dir_bbcc9336d50f30308554b0fe78acfee6.md) **>** [**MSL\_Common**](dir_0c0c2b83f86d5caed54e8218e0fa784d.md) **>** [**Src**](dir_bf8df28de45fc09137eab9119627a3a4.md) **>** [**mutex.cpp**](mutex_8cpp.md)

[Go to the documentation of this file](mutex_8cpp.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/12/09 17:58:23 $ 
 *  $Revision: 1.1.6.1 $ 
 *  $NoKeywords: $ 
 *
 *      Portions Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

#include <mslconfig>

#ifdef _MSL_MULTITHREAD

    #if __dest_os == __win32_os

        #pragma ANSI_strict off

        #include <WINDEF.H>
        #include <WINBASE.H>

        #pragma ANSI_strict reset

        namespace {

        template <bool b>
        class __compile_assert;
        
        template <>
        class __compile_assert<true>
        {
        };
        
        __compile_assert<sizeof(CRITICAL_SECTION) == 24> check_CRITICAL_SECTION;

        // If you get an error with this object, that means that
        // sizeof(CRITICAL_SECTION) != 24.  You need to find out
        // what the new size of CRITICAL_SECTION is, change the
        // number here, and then go to the windows section of
        // mutex.h.  There is a declaration in the mutex class:
        // long m_[6];  You need to adjust this number so that
        // sizeof(long)*x == sizeof(CRITICAL_SECTION).
        //
        // Note:  The reason for this elaborate song and dance is
        // because including windows headers in our own tends to
        // irritate customers.
        //
        // hh 990520

        }

    #endif

#endif
```


