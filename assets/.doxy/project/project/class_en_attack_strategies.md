

# Class EnAttackStrategies



[**ClassList**](annotated.md) **>** [**EnAttackStrategies**](class_en_attack_strategies.md)





* `#include <EnStrategy.h>`



Inherits the following classes: [EnStrategyContainer](class_en_strategy_container.md)






















































## Public Functions

| Type | Name |
| ---: | :--- |
| virtual s32 | [**getStrategyId**](#function-getstrategyid) (int i\_entityIdx) <br> |


## Public Functions inherited from EnStrategyContainer

See [EnStrategyContainer](class_en_strategy_container.md)

| Type | Name |
| ---: | :--- |
|   | [**EnStrategyContainer**](class_en_strategy_container.md#function-enstrategycontainer) () <br> |
|  [**EnemyStrategy**](class_enemy_strategy.md) \* | [**createStrategy**](class_en_strategy_container.md#function-createstrategy) (int i\_entityIdx) <br> |
|  void | [**destroyStrategy**](class_en_strategy_container.md#function-destroystrategy) () <br> |
|  void \* | [**getBuffer**](class_en_strategy_container.md#function-getbuffer) () <br> |
|  int | [**getBufferSize**](class_en_strategy_container.md#function-getbuffersize) () <br> |
| virtual s32 | [**getStrategyId**](class_en_strategy_container.md#function-getstrategyid) (int i\_entityIdx) = 0<br> |
| virtual  | [**~EnStrategyContainer**](class_en_strategy_container.md#function-enstrategycontainer) () <br> |






















































## Public Functions Documentation




### function getStrategyId 

```C++
virtual s32 EnAttackStrategies::getStrategyId (
    int i_entityIdx
) 
```



Implements [*EnStrategyContainer::getStrategyId*](class_en_strategy_container.md#function-getstrategyid)


<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/Project/sources/Sato/include/EnStrategy.h`

