

# File JSUIosBase.h

[**File List**](files.md) **>** [**include**](dir_701d6d343be5ce61cc43f23a5e957e2c.md) **>** [**JSUIosBase.h**](_j_s_u_ios_base_8h.md)

[Go to the documentation of this file](_j_s_u_ios_base_8h.md)


```C++
#ifndef __JSU_IOSBASE_HPP__
#define __JSU_IOSBASE_HPP__

#include <JUTTypes.h>

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
    bool mState; 
};

SASSERT_SIZE (JSUIosBase, 0x8);

#endif
```


