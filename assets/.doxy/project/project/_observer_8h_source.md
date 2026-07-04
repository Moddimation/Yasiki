

# File Observer.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**Project**](dir_b9837e7912a2e62dbadd80ce5876b790.md) **>** [**sources**](dir_e9f5f664b7d8a26223d14dd7fedffb79.md) **>** [**Koga**](dir_9fe0a947080822e90509f3f3e5cdb9ae.md) **>** [**include**](dir_ac979847baa7fefd28f0aba72629da54.md) **>** [**Observer.h**](_observer_8h.md)

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


