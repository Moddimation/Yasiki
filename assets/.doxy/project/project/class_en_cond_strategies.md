

# Class EnCondStrategies



[**ClassList**](annotated.md) **>** [**EnCondStrategies**](class_en_cond_strategies.md)





* `#include <EnStrategy.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**EnemyStrategy**](class_enemy_strategy.md) \* | [**createCondStrategy**](#function-createcondstrategy) (int i\_condType) <br> |
|  void | [**destroyCondStrategy**](#function-destroycondstrategy) () <br> |
|  void \* | [**getBuffer**](#function-getbuffer) () <br> |
|  int | [**getBufferSize**](#function-getbuffersize) () <br> |
|  s32 | [**getCondStrategyId**](#function-getcondstrategyid) (int i\_entityIdx) <br> |
| virtual  | [**~EnCondStrategies**](#function-encondstrategies) () <br> |




























## Public Functions Documentation




### function createCondStrategy 

```C++
EnemyStrategy * EnCondStrategies::createCondStrategy (
    int i_condType
) 
```




<hr>



### function destroyCondStrategy 

```C++
void EnCondStrategies::destroyCondStrategy () 
```




<hr>



### function getBuffer 

```C++
inline void * EnCondStrategies::getBuffer () 
```




<hr>



### function getBufferSize 

```C++
inline int EnCondStrategies::getBufferSize () 
```




<hr>



### function getCondStrategyId 

```C++
s32 EnCondStrategies::getCondStrategyId (
    int i_entityIdx
) 
```




<hr>



### function ~EnCondStrategies 

```C++
virtual EnCondStrategies::~EnCondStrategies () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/Project/sources/Sato/include/EnStrategy.h`

