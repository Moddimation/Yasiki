

# File MSLPrefixPartial.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C++**](dir_bbcc9336d50f30308554b0fe78acfee6.md) **>** [**MSL\_Precompiled\_Headers**](dir_d1422149919fc917e071ee33ddf17a69.md) **>** [**Src**](dir_59c2ae364cd75456f32aa45f34a7ec33.md) **>** [**MSLPrefixPartial.h**](_m_s_l_prefix_partial_8h.md)

[Go to the documentation of this file](_m_s_l_prefix_partial_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/12/09 17:57:44 $ 
 *  $Revision: 1.1.8.1 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*  This file contains the code that does not get precompiled. */

#ifdef __cplusplus  /* 971006 vss */

//  iostream.h line 58
// 971025  HH  commented out following line.  This line is now in iostream.cpp
//static ios_base::Init  __msipl_ios_init;

//  slist line 474
//  970420 bkoz you will need this also if slist.h is in your .pch
/*
#ifdef MSIPL_MULTITHREAD
    template <class T, class Allocator>
    mutex_arith<bool, mutex> slist<T, Allocator>::separate_copying = false;
#else
    template <class T, class Allocator>
    bool slist<T, Allocator>::separate_copying = false;
#endif
*/

//  bstring line 1301
template <class charT, class traits, class Allocator>
const typename basic_string<charT, traits, Allocator>::size_type
basic_string<charT, traits, Allocator>::npos = (size_t) -1;

#endif  /* ifdef __cplusplus  */

/*  971006 vss  guarantee inclusion in C++ headers only */


```


