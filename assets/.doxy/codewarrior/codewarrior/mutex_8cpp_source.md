

# File mutex.cpp

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C++**](dir_1d8bcf55c9e1564519df8a05b1def2d1.md) **>** [**MSL\_Common**](dir_fc42de24ef3c14a5dea3aca327bd2ec9.md) **>** [**Src**](dir_5dfda252c22d458fde1d653b341676b1.md) **>** [**mutex.cpp**](mutex_8cpp.md)

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


