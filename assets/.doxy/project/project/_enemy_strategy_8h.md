

# File EnemyStrategy.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**Project**](dir_b9837e7912a2e62dbadd80ce5876b790.md) **>** [**sources**](dir_e9f5f664b7d8a26223d14dd7fedffb79.md) **>** [**Sato**](dir_db2b09d99d4f302e3c8ada455a38d2b5.md) **>** [**include**](dir_01267fe4f090b7d6fab035c22a09a92f.md) **>** [**EnemyStrategy.h**](_enemy_strategy_8h.md)

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
The documentation for this class was generated from the following file `decomp/Project/sources/Sato/include/EnemyStrategy.h`

