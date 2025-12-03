

# Class EnStrategyContainer



[**ClassList**](annotated.md) **>** [**EnStrategyContainer**](class_en_strategy_container.md)





* `#include <EnStrategy.h>`





Inherited by the following classes: [EnAttackStrategies](class_en_attack_strategies.md),  [EnTsuriStrategies](class_en_tsuri_strategies.md)
































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**EnStrategyContainer**](#function-enstrategycontainer) () <br> |
|  [**EnemyStrategy**](class_enemy_strategy.md) \* | [**createStrategy**](#function-createstrategy) (int i\_entityIdx) <br> |
|  void | [**destroyStrategy**](#function-destroystrategy) () <br> |
|  void \* | [**getBuffer**](#function-getbuffer) () <br> |
|  int | [**getBufferSize**](#function-getbuffersize) () <br> |
| virtual s32 | [**getStrategyId**](#function-getstrategyid) (int i\_entityIdx) = 0<br> |
| virtual  | [**~EnStrategyContainer**](#function-enstrategycontainer) () <br> |




























## Public Functions Documentation




### function EnStrategyContainer 

```C++
EnStrategyContainer::EnStrategyContainer () 
```




<hr>



### function createStrategy 

```C++
EnemyStrategy * EnStrategyContainer::createStrategy (
    int i_entityIdx
) 
```




<hr>



### function destroyStrategy 

```C++
void EnStrategyContainer::destroyStrategy () 
```




<hr>



### function getBuffer 

```C++
inline void * EnStrategyContainer::getBuffer () 
```




<hr>



### function getBufferSize 

```C++
inline int EnStrategyContainer::getBufferSize () 
```




<hr>



### function getStrategyId 

```C++
virtual s32 EnStrategyContainer::getStrategyId (
    int i_entityIdx
) = 0
```




<hr>



### function ~EnStrategyContainer 

```C++
virtual EnStrategyContainer::~EnStrategyContainer () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/Project/sources/Sato/include/EnStrategy.h`

