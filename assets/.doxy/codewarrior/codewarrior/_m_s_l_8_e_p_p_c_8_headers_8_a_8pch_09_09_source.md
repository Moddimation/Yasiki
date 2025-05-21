

# File MSL.EPPC.Headers.A.pch++

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C++**](dir_bbcc9336d50f30308554b0fe78acfee6.md) **>** [**MSL\_Precompiled\_Headers**](dir_d1422149919fc917e071ee33ddf17a69.md) **>** [**Src**](dir_59c2ae364cd75456f32aa45f34a7ec33.md) **>** [**MSL.EPPC.Headers.A.pch++**](_m_s_l_8_e_p_p_c_8_headers_8_a_8pch_09_09.md)

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


