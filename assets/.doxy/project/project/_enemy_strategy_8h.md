

# File EnemyStrategy.h



[**FileList**](files.md) **>** [**include**](dir_aae898d1b51427f8be7dcd244b9d0fce.md) **>** [**EnemyStrategy.h**](_enemy_strategy_8h.md)

[Go to the source code of this file](_enemy_strategy_8h_source.md)



* `#include "dolphin/types.h"`
* `#include "JSystem/JHostIOD/JORServer.h"`















## Classes

| Type | Name |
| ---: | :--- |
| class | [**EnemyStrategy**](class_enemy_strategy.md) <br> |
| class | [**EnemyStrategyDecorator**](class_enemy_strategy_decorator.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef void \*(\* | [**enemyStrategyInitFunc**](#typedef-enemystrategyinitfunc)  <br> |
| typedef unsigned long | [**size\_t**](#typedef-size_t)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**enemyStrategyInitFunc**](_enemy_strategy_8h.md#typedef-enemystrategyinitfunc) \* | [**getEnemyStrategyInitFunc**](#function-getenemystrategyinitfunc) (int i\_entityIdx) <br> |




























## Public Types Documentation




### typedef enemyStrategyInitFunc 

```C++
typedef void *(* enemyStrategyInitFunc) (void *buf, int bufSize);
```




<hr>



### typedef size\_t 

```C++
typedef unsigned long size_t;
```




<hr>
## Public Functions Documentation




### function getEnemyStrategyInitFunc 

```C++
enemyStrategyInitFunc * getEnemyStrategyInitFunc (
    int i_entityIdx
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `Project/sources/Sato/include/EnemyStrategy.h`

