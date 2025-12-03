

# File MSL.EPPC.Headers.A.pch++

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C++**](dir_1d8bcf55c9e1564519df8a05b1def2d1.md) **>** [**MSL\_Precompiled\_Headers**](dir_d26d753317f353d6066c4c85b24e2704.md) **>** [**Src**](dir_c5e5ef435a29f09c5697fd895bbe5c13.md) **>** [**MSL.EPPC.Headers.A.pch++**](_m_s_l_8_e_p_p_c_8_headers_8_a_8pch_09_09.md)

[Go to the documentation of this file](_m_s_l_8_e_p_p_c_8_headers_8_a_8pch_09_09.md)


```C++
/*  Metrowerks Standard Library  Version 2.4  1998 March 10  */

/*  $Date: 1999/12/09 17:57:44 $ 
 *  $Revision: 1.1.2.1 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1998 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  970415 bkoz
 *  MSL C++ pch file, precompiles all the C++ Headers 
 *  with and without appropriate .pch's for host OS  (ie MFC or MacHeaders).
 */
 
/*  vss  971015  */
/*  #pragma once on  */
/* Switching this pragma on, can improve compilation speed but it may cause problems with the
   use of assert.h, which generally depends upon being actually included more than once during
   compilation.   Please see also ansi_prefix.mac.h  */

/*  vss  971015  */
#pragma check_header_flags on  


#pragma precompile_target "MSLHeaders.EPPC.A.mch"

#if __dest_os == __ppc_eabi
#include <ansi_prefix.PPCEABI.bare.h>
#elif __dest_os == __eppc_vxworks
#include <ansi_prefix.EPPC.VxWorks.h>
#else
#error "Missing target (Must match prefix file)"
#endif

#include "MSLHeaders++.cp"

/* 971015 vss  This is supposed to be off
 * 971015 vss  Check to ensure precompiled headers are compiled with
               same int/double lengths as library
 * 971015 vss  Turned off pragma once as per Andreas' suggestion
 * 971019 beb  added file name extensions of .mch to speed up useage on windows
*/
```


