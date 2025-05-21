

# File MSLstring.cpp

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C++**](dir_bbcc9336d50f30308554b0fe78acfee6.md) **>** [**MSL\_Common**](dir_0c0c2b83f86d5caed54e8218e0fa784d.md) **>** [**Src**](dir_bf8df28de45fc09137eab9119627a3a4.md) **>** [**MSLstring.cpp**](_m_s_lstring_8cpp.md)

[Go to the documentation of this file](_m_s_lstring_8cpp.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/12/09 17:58:23 $ 
 *  $Revision: 1.8.6.1 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/************************************************************************/
/*  Project...: Standard C++ Library                                    */
/*  Name......: MSLstring.cpp                                           */
/*  Purpose...: exception string handling                               */
/************************************************************************/

#include <MSLstring.h>

#ifndef _MSL_NO_EXCEPTIONS

#include <string>
#include <cstring>

_STD::_MSLstring::_MSLstring(const string& value)
    : data_(new char [value.size()+1])
{
    strcpy(const_cast<char*>(static_cast<const char*>(data_)), value.c_str());
}

#endif // _MSL_NO_EXCEPTIONS

// hh 990120 changed name of MSIPL flags
// hh 990314 Added const char* constructor to support nonstandard const char* constructors
//           on all of the standard exceptions.
```


