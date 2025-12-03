

# File MSLstring.cpp

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C++**](dir_1d8bcf55c9e1564519df8a05b1def2d1.md) **>** [**MSL\_Common**](dir_fc42de24ef3c14a5dea3aca327bd2ec9.md) **>** [**Src**](dir_5dfda252c22d458fde1d653b341676b1.md) **>** [**MSLstring.cpp**](_m_s_lstring_8cpp.md)

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


