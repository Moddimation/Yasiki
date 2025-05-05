/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/27 20:51:08 $
 * $Revision: 1.12.4.1 $
 */

// ios.cpp

#include <cstdlib>
#include <ios>
#include <istream>
#include <locale>
#include <ostream>
#include <streambuf>

#ifdef _MSL_FORCE_ENUMS_ALWAYS_INT
#if _MSL_FORCE_ENUMS_ALWAYS_INT
#pragma enumsalwaysint on
#else
#pragma enumsalwaysint off
#endif
#endif

#ifdef _MSL_FORCE_ENABLE_BOOL_SUPPORT
#if _MSL_FORCE_ENABLE_BOOL_SUPPORT
#pragma bool on
#else
#pragma bool off
#endif
#endif

#ifndef _MSL_NO_IO

#ifndef _MSL_NO_CPP_NAMESPACE
namespace std
{
#endif

#ifndef _MSL_NO_LOCALE
locale
ios_base::imbue (const locale& loc)
{
    locale result = *loc_;
#ifndef _MSL_NO_EXCEPTIONS
    try
    {
#endif
        locale* newloc = new locale (loc);
#ifdef _MSL_NO_EXCEPTIONS
        if (newloc == 0)
        {
            __msl_error ("ios_base::imbue out of memory");
        }
#endif
        delete loc_;
        loc_ = newloc;
        do_callbacks (imbue_event);
#ifndef _MSL_NO_EXCEPTIONS
    }
    catch (...)
    {
        setstate (badbit);
    }
#endif
    return result;
}
#endif
long&
ios_base::iword (int index)
{
    if (++index > isize_)
    {
        long* newarray = static_cast<long*> (realloc (iarray_, index * sizeof (long)));
        if (newarray == 0)
        {
            setstate (failbit);
            static long err;
            err = 0;
            return err;
        }
        fill (newarray + isize_, newarray + index, 0L);
        iarray_ = newarray;
        isize_ = static_cast<size_t> (index);
    }
    return iarray_[--index];
}

void*&
ios_base::pword (int index)
{
    if (++index > psize_)
    {
        void** newarray = static_cast<void**> (realloc (parray_, index * sizeof (void*)));
        if (newarray == 0)
        {
            setstate (failbit);
            static void* err;
            err = 0;
            return err;
        }
        fill (newarray + psize_, newarray + index, static_cast<void*> (0));
        parray_ = newarray;
        psize_ = static_cast<size_t> (index);
    }
    return parray_[--index];
}

ios_base::~ios_base ()
{
    do_callbacks (erase_event);
#ifndef _MSL_NO_LOCALE
    delete loc_;
#endif
    free (parray_);
    free (iarray_);
    free (cb_vec_);
}

void
ios_base::register_callback (event_callback fn, int index)
{
    if (cb_siz_ >= cb_cap_)
    {
        size_t new_cap = cb_cap_;
        if (new_cap == 0)
        {
            new_cap = 1;
        }
        else
        {
            new_cap *= 2;
        }
        event_data* newevents =
            static_cast<event_data*> (realloc (cb_vec_, new_cap * sizeof (event_data)));
        if (newevents == 0)
        {
            setstate (badbit);
            return;
        }
        cb_vec_ = newevents;
        cb_cap_ = new_cap;
    }
    cb_vec_[cb_siz_++] = event_data (fn, index);
}

extern istream cin;
extern ostream cout;
extern ostream clog;
extern ostream cerr;

#ifndef _MSL_NO_WCHART_CPP_SUPPORT

extern wistream wcin;
extern wostream wcout;
extern wostream wclog;
extern wostream wcerr;

#endif
bool
ios_base::sync_with_stdio (bool sync)
{
    static ios_base::Init __make_sure_streams_are_constructed;
    static bool           previous_sync = true;
    bool                  result = previous_sync;
    previous_sync = sync;
    cin.rdbuf()->pubsetbuf (0, !sync);
    cout.rdbuf()->pubsetbuf (0, !sync);
    clog.rdbuf()->pubsetbuf (0, !sync);
    cerr.rdbuf()->pubsetbuf (0, !sync);
#ifndef _MSL_NO_WCHART_CPP_SUPPORT
    wcin.rdbuf()->pubsetbuf (0, !sync);
    wcout.rdbuf()->pubsetbuf (0, !sync);
    wclog.rdbuf()->pubsetbuf (0, !sync);
    wcerr.rdbuf()->pubsetbuf (0, !sync);
#endif
    return result;
}

void
ios_base::init (void* sb)
{
    rdbuf_ = sb;
    exceptions_ = goodbit;
    iostate_ = badbit;
    iostate_ = sb != 0 ? goodbit : badbit;
    fmtflags_ = skipws | dec;
    width_ = 0;
    precision_ = 6;
#ifndef _MSL_NO_LOCALE
    loc_ = 0;
#ifndef _MSL_NO_EXCEPTIONS
    try
    {
#endif
        loc_ = new locale;
#ifndef _MSL_NO_EXCEPTIONS
    }
    catch (...)
    {
    }
#endif
    if (loc_ == 0)
    {
        iostate_ = badbit;
    }
#endif // _MSL_NO_LOCALE
    cb_vec_ = 0;
    cb_siz_ = 0;
    cb_cap_ = 0;
    iarray_ = 0;
    isize_ = 0;
    parray_ = 0;
    psize_ = 0;
}

void
ios_base::copy_ios_base (const ios_base& rhs)
{
#ifndef _MSL_NO_EXCEPTIONS
    try
    {
#endif
        if (cb_cap_ < rhs.cb_siz_)
        {
            event_data* newevents =
                static_cast<event_data*> (realloc (cb_vec_, rhs.cb_siz_ * sizeof (event_data)));
            if (newevents == 0)
            {
                setstate (badbit);
                return;
            }
            cb_vec_ = newevents;
            cb_cap_ = rhs.cb_siz_;
        }
        cb_siz_ = rhs.cb_siz_;
        _STD::copy (rhs.cb_vec_, rhs.cb_vec_ + cb_siz_, cb_vec_);

        if (isize_ < rhs.isize_)
        {
            long* newarray = static_cast<long*> (realloc (iarray_, rhs.isize_ * sizeof (long)));
            if (newarray == 0)
            {
                setstate (badbit);
                return;
            }
            iarray_ = newarray;
        }
        _STD::copy (rhs.iarray_, rhs.iarray_ + rhs.isize_, iarray_);

        if (psize_ < rhs.psize_)
        {
            void** newarray = static_cast<void**> (realloc (parray_, rhs.psize_ * sizeof (void*)));
            if (newarray == 0)
            {
                setstate (badbit);
                return;
            }
            parray_ = newarray;
        }
        _STD::copy (rhs.parray_, rhs.parray_ + rhs.psize_, parray_);

#ifndef _MSL_NO_LOCALE
        locale* newloc = new locale (*rhs.loc_);
#ifdef _MSL_NO_EXCEPTIONS
        if (newloc == 0)
        {
            __msl_error ("ios_base::copy_ios_base out of memory");
        }
#endif
        delete loc_;
        loc_ = newloc;
#endif

        precision_ = rhs.precision_;
        width_ = rhs.width_;
        fmtflags_ = rhs.fmtflags_;
#ifndef _MSL_NO_EXCEPTIONS
    }
    catch (...)
    {
        setstate (badbit);
    }
#endif
}
#ifndef _MSL_NO_CPP_NAMESPACE
} // namespace std
#endif

#endif // _MSL_NO_IO

// hh 990524 Rewrote
// hh 000130 Installed _MSL_NO_LOCALE
// hh 000604 Rewrote sync_with_stdio
// hh 000710 Fixed reallocation bug in iword/pword
