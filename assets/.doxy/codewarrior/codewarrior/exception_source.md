

# File exception

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C++**](dir_bbcc9336d50f30308554b0fe78acfee6.md) **>** [**MSL\_Common**](dir_0c0c2b83f86d5caed54e8218e0fa784d.md) **>** [**Include**](dir_4b09b958bee5575b6e3a9125618b7d0e.md) **>** [**exception**](exception.md)

[Go to the documentation of this file](exception.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/12/09 17:58:49 $ 
 *  $Revision: 1.8.6.1 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/************************************************************************/
/*  Project...: Standard C++ Library                                    */
/*  Name......: exception                                               */
/*  Purpose...: exception handling                                      */
/************************************************************************/

#ifndef _EXCEPTION
#define _EXCEPTION

#include <mslconfig>

#ifndef RC_INVOKED // hh 971230

#pragma options align=native
#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import on
#endif

#ifndef _MSL_NO_CPP_NAMESPACE           // hh 971206 moved this up in the file
    namespace std {
#endif

    // hh 971226
    // Removed string and bool from this class.  This data is moved into
    // derived classes if and when needed.
    class exception {       // hh 971226 moved from mexcept.h
    public :
        exception () _MSL_THROW {}
        exception (const exception&) _MSL_THROW {}
        exception& operator= (const exception&) _MSL_THROW {return *this;}
        virtual ~exception () _MSL_THROW {}
        virtual const char* what () const _MSL_THROW {return "exception";}
    };

    class bad_exception : public exception {
    public:
        bad_exception() _MSL_THROW {}
        bad_exception(const bad_exception&) _MSL_THROW {}
        bad_exception& operator=(const bad_exception&) _MSL_THROW { return *this; }
        virtual ~bad_exception() _MSL_THROW {};
        virtual const char* what() const _MSL_THROW { return "bad_exception"; };
    };

    typedef void (*unexpected_handler)();
    unexpected_handler set_unexpected(unexpected_handler f) _MSL_THROW;
    void unexpected();
//  bool uncaught_exception();    // hh 971226 not implemented yet.

    typedef void (*terminate_handler)();
    terminate_handler set_terminate(terminate_handler f) _MSL_THROW;
    void terminate();

#ifndef _MSL_NO_CPP_NAMESPACE
    }
#endif

#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import reset
#endif
#pragma options align=reset

#endif // RC_INVOKED

#endif
/*     Change record
960828 bkoz try a forward declaration to cut the exception->string dependencies
960828 bkoz add exception::exception(const char*) ctor for string literals
961210 bkoz added wrapper for alignment
961217 KO   Changed char_traits from a struct to a class. Needed for the new x86
            compiler.
970211 bkoz line 73 added bad_exception::what from stdexcept.cp
970408 bkoz line 22, include bstring, inlined exception class
hh 971206   Moved #ifdef MSIPL_USING_NAMESPACE around
// hh 971226 moved exception from mexcept.h
// hh 971226 cleaned up & checked against standard
// hh 971226 Removed string and bool from this class.  This data is moved into
//           derived classes if and when needed.
// hh 971230 added RC_INVOKED wrapper
// hh 970102 __priv_throwbadcast no longer needed
// hh 990120 changed name of MSIPL flags
*/
```


