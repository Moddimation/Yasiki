

# File MSLHeaders++.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C++**](dir_bbcc9336d50f30308554b0fe78acfee6.md) **>** [**MSL\_Precompiled\_Headers**](dir_d1422149919fc917e071ee33ddf17a69.md) **>** [**Src**](dir_59c2ae364cd75456f32aa45f34a7ec33.md) **>** [**MSLHeaders++.h**](_m_s_l_headers_09_09_8h.md)

[Go to the documentation of this file](_m_s_l_headers_09_09_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/12/09 17:57:44 $ 
 *  $Revision: 1.1.8.1 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  Prefix file for MSL C++ projects which precompiles in the most common
 *  MSL Header files.
 *
 *  This prefix file is ONLY for C++ projects, it will not work for C projects unless
 *  C++ is activated.
 *
 */

/* static initializations */

#if __CFM68K__
    #include <MSLHeaders.CFM68K.mch>
#elif __MC68K__
    #include <MSLHeaders.68K.mch>
#elif __POWERPC__
    #include <MSLHeaders.PPC.mch>
#elif __INTEL__
    #include <MSLHeaders.x86.mch>
#else
    #error "target currently unsupported.mch"
#endif

//#include <MSLPrefixPartial.h>

#if 0

    #if __option(far_data) || __option(far_strings) || __option(far_vtables)
        #if __option(mpwc_newline)
            #if __option(fourbyteints)
                #if __option(code68881)
                    #if __option(IEEEdoubles)
                        #if __A5__
                            #include <MSL C++ PCH.68kFa(NL_4i_F_8d).mch>
                        #else
                            #include <MSL C++ PCH.68kFa(NL_4i_F_8d)A4.mch>
                        #endif
                    #else
                        #if __A5__
                            #include <MSL C++ PCH.68kFa(NL_4i_F).mch>
                        #else
                            #include <MSL C++ PCH.68kFa(NL_4i_F)A4.mch>
                        #endif
                    #endif
                #else
                    #if __option(IEEEdoubles)
                        #if __A5__
                            #include <MSL C++ PCH.68kFa(NL_4i_8d).mch>
                        #else
                            #include <MSL C++ PCH.68kFa(NL_4i_8d)A4.mch>
                        #endif
                    #else
                        #if __A5__
                            #include <MSL C++ PCH.68kFa(NL_4i).mch>
                        #else
                            #include <MSL C++ PCH.68kFa(NL_4i)A4.mch>
                        #endif
                    #endif
                #endif
            #else
                #if __option(code68881)
                    #if __option(IEEEdoubles)
                        #if __A5__
                            #include <MSL C++ PCH.68kFa(NL_2i_F_8d).mch>
                        #else
                            #include <MSL C++ PCH.68kFa(NL_2i_F_8d)A4.mch>
                        #endif
                    #else
                        #if __A5__
                            #include <MSL C++ PCH.68kFa(NL_2i_F).mch>
                        #else
                            #include <MSL C++ PCH.68kFa(NL_2i_F)A4.mch>
                        #endif
                    #endif
                #else
                    #if __option(IEEEdoubles)
                        #if __A5__
                            #include <MSL C++ PCH.68kFa(NL_2i_8d).mch>
                        #else
                            #include <MSL C++ PCH.68kFa(NL_2i_8d)A4.mch>
                        #endif
                    #else
                        #if __A5__
                            #include <MSL C++ PCH.68kFa(NL_2i).mch>
                        #else
                            #include <MSL C++ PCH.68kFa(NL_2i)A4.mch>
                        #endif
                    #endif
                #endif
            #endif
        #else
            #if __option(fourbyteints)
                #if __option(code68881)
                    #if __option(IEEEdoubles)
                        #if __A5__
                            #include <MSL C++ PCH.68kFa(4i_F_8d).mch>
                        #else
                            #include <MSL C++ PCH.68kFa(4i_F_8d)A4.mch>
                        #endif
                    #else
                        #if __A5__
                            #include <MSL C++ PCH.68kFa(4i_F).mch>
                        #else
                            #include <MSL C++ PCH.68kFa(4i_F)A4.mch>
                        #endif
                    #endif
                #else
                    #if __option(IEEEdoubles)
                        #if __A5__
                            #include <MSL C++ PCH.68kFa(4i_8d).mch>
                        #else
                            #include <MSL C++ PCH.68kFa(4i_8d)A4.mch>
                        #endif
                    #else
                        #if __A5__
                            #include <MSL C++ PCH.68kFa(4i).mch>
                        #else
                            #include <MSL C++ PCH.68kFa(4i)A4.mch>
                        #endif
                    #endif
                #endif
            #else
                #if __option(code68881)
                    #if __option(IEEEdoubles)
                        #if __A5__
                            #include <MSL C++ PCH.68kFa(2i_F_8d).mch>
                        #else
                            #include <MSL C++ PCH.68kFa(2i_F_8d)A4.mch>
                        #endif
                    #else
                        #if __A5__
                            #include <MSL C++ PCH.68kFa(2i_F).mch>
                        #else
                            #include <MSL C++ PCH.68kFa(2i_F)A4.mch>
                        #endif
                    #endif
                #else
                    #if __option(IEEEdoubles)
                        #if __A5__
                            #include <MSL C++ PCH.68kFa(2i_8d).mch>
                        #else
                            #include <MSL C++ PCH.68kFa(2i_8d)A4.mch>
                        #endif
                    #else
                        #if __A5__
                            #include <MSL C++ PCH.68kFa(2i).mch>
                        #else
                            #include <MSL C++ PCH.68kFa(2i)A4.mch>
                        #endif
                    #endif
                #endif
            #endif
        #endif
    #else
        #if __option(mpwc_newline)
            #if __option(fourbyteints)
                #if __option(code68881)
                    #if __option(IEEEdoubles)
                        #if __A5__
                            #include <MSL C++ PCH.68k(NL_4i_F_8d).mch>
                        #else
                            #include <MSL C++ PCH.68k(NL_4i_F_8d)A4.mch>
                        #endif
                    #else
                        #if __A5__
                            #include <MSL C++ PCH.68k(NL_4i_F).mch>
                        #else
                            #include <MSL C++ PCH.68k(NL_4i_F)A4.mch>
                        #endif
                    #endif
                #else
                    #if __option(IEEEdoubles)
                        #if __A5__
                            #include <MSL C++ PCH.68k(NL_4i_8d).mch>
                        #else
                            #include <MSL C++ PCH.68k(NL_4i_8d)A4.mch>
                        #endif
                    #else
                        #if __A5__
                            #include <MSL C++ PCH.68k(NL_4i).mch>
                        #else
                            #include <MSL C++ PCH.68k(NL_4i)A4.mch>
                        #endif
                    #endif
                #endif
            #else
                #if __option(code68881)
                    #if __option(IEEEdoubles)
                        #if __A5__
                            #include <MSL C++ PCH.68k(NL_2i_F_8d).mch>
                        #else
                            #include <MSL C++ PCH.68k(NL_2i_F_8d)A4.mch>
                        #endif
                    #else
                        #if __A5__
                            #include <MSL C++ PCH.68k(NL_2i_F).mch>
                        #else
                            #include <MSL C++ PCH.68k(NL_2i_F)A4.mch>
                        #endif
                    #endif
                #else
                    #if __option(IEEEdoubles)
                        #if __A5__
                            #include <MSL C++ PCH.68k(NL_2i_8d).mch>
                        #else
                            #include <MSL C++ PCH.68k(NL_2i_8d)A4.mch>
                        #endif
                    #else
                        #if __A5__
                            #include <MSL C++ PCH.68k(NL_2i).mch>
                        #else
                            #include <MSL C++ PCH.68k(NL_2i)A4.mch>
                        #endif
                    #endif
                #endif
            #endif
        #else
            #if __option(fourbyteints)
                #if __option(code68881)
                    #if __option(IEEEdoubles)
                        #if __A5__
                            #include <MSL C++ PCH.68k(4i_F_8d).mch>
                        #else
                            #include <MSL C++ PCH.68k(4i_F_8d)A4.mch>
                        #endif
                    #else
                        #if __A5__
                            #include <MSL C++ PCH.68k(4i_F).mch>
                        #else
                            #include <MSL C++ PCH.68k(4i_F)A4.mch>
                        #endif
                    #endif
                #else
                    #if __option(IEEEdoubles)
                        #if __A5__
                            #include <MSL C++ PCH.68k(4i_8d).mch>
                        #else
                            #include <MSL C++ PCH.68k(4i_8d)A4.mch>
                        #endif
                    #else
                        #if __A5__
                            #include <MSL C++ PCH.68k(4i).mch>
                        #else
                            #include <MSL C++ PCH.68k(4i)A4.mch>
                        #endif
                    #endif
                #endif
            #else
                #if __option(code68881)
                    #if __option(IEEEdoubles)
                        #if __A5__
                            #include <MSL C++ PCH.68k(2i_F_8d).mch>
                        #else
                            #include <MSL C++ PCH.68k(2i_F_8d)A4.mch>
                        #endif
                    #else
                        #if __A5__
                            #include <MSL C++ PCH.68k(2i_F).mch>
                        #else
                            #include <MSL C++ PCH.68k(2i_F)A4.mch>
                        #endif
                    #endif
                #else
                    #if __option(IEEEdoubles)
                        #if __A5__
                            #include <MSL C++ PCH.68k(2i_8d).mch>
                        #else
                            #include <MSL C++ PCH.68k(2i_8d)A4.mch>
                        #endif
                    #else
                        #if __A5__
                            #include <MSL C++ PCH.68k(2i).mch>
                        #else
                            #include <MSL C++ PCH.68k(2i)A4.mch>
                        #endif
                    #endif
                #endif
            #endif
        #endif
    #endif


#endif
```


