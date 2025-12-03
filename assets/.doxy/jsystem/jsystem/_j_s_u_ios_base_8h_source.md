

# File JSUIosBase.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**JSystem**](dir_2add8750dabb2c81b6f2c3c5af4cfeba.md) **>** [**System**](dir_e5be38218225624e70ebb9ea7ff5d81f.md) **>** [**JSupport**](dir_308f6f999a37d66526675b2f4ad20c02.md) **>** [**include**](dir_5eac6eb0a6ef103191c6b0789cc9720c.md) **>** [**JSUIosBase.h**](_j_s_u_ios_base_8h.md)

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


