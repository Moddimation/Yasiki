

# File Observer.h

[**File List**](files.md) **>** [**include**](dir_bc07536bbdd54af3cdc5eaae75e34530.md) **>** [**Observer.h**](_observer_8h.md)

[Go to the documentation of this file](_observer_8h.md)


```C++
#ifndef OBSERVER_H_
#define OBSERVER_H_

namespace Koga
{
template <typename Msg, typename Ret>
class Observer
{
public:
    virtual Ret receiveMessage (Msg* msg) = 0;
};
} // namespace Koga
#endif
```


