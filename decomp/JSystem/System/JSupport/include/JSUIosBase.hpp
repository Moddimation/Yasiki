#ifndef __JSU_IOSBASE_HPP__
#define __JSU_IOSBASE_HPP__

#include <types.h>

#include "macros.h"

// find where to put these
#define constructor explicit
#define destructor  virtual

class JSUIosBase
{
public:
    constructor
    JSUIosBase ()
    {
        mState = EIO_GOOD;
    }

    destructor ~JSUIosBase() {}

    enum EIoState
    {
        EIO_GOOD,
        EIO_BAD,
    };

    inline bool
    isGood () const
    {
        return mState == EIO_GOOD;
    }

    inline void
    setState (EIoState state)
    {
        mState |= state;
    }

    inline void
    clrState (EIoState state)
    {
        mState &= ~state;
    }

private:
    bool mState; ///< 0x00 // IO state (true = Good, false = Bad)
};

SASSERT_SIZE (JSUIosBase, 0x8);

#endif
