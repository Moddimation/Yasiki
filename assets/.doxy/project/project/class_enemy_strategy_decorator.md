

# Class EnemyStrategyDecorator



[**ClassList**](annotated.md) **>** [**EnemyStrategyDecorator**](class_enemy_strategy_decorator.md)





* `#include <EnemyStrategy.h>`



Inherits the following classes: [EnemyStrategy](class_enemy_strategy.md)


Inherited by the following classes: [EnemyTypicalStrategy](class_enemy_typical_strategy.md)




















## Public Attributes

| Type | Name |
| ---: | :--- |
|  s16 | [**mTsuriState**](#variable-mtsuristate)  <br>_0x18_  |
|  [**EnemyStrategy**](class_enemy_strategy.md) \* | [**mpTsuriStrategy**](#variable-mptsuristrategy)  <br>_0x14_  |


## Public Attributes inherited from EnemyStrategy

See [EnemyStrategy](class_enemy_strategy.md)

| Type | Name |
| ---: | :--- |
|  u16 | [**mCurState**](class_enemy_strategy.md#variable-mcurstate)  <br>_0x0E_  |
|  u16 | [**mNextState**](class_enemy_strategy.md#variable-mnextstate)  <br>_0x0C_  |
|  s32 | [**mTimer**](class_enemy_strategy.md#variable-mtimer)  <br>_0x10_  |
|  void \* | [**mpUserData**](class_enemy_strategy.md#variable-mpuserdata)  <br>_0x08_  |
|  void \* | [**mpZako**](class_enemy_strategy.md#variable-mpzako)  <br>_0x04_  |






























## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**EnemyStrategyDecorator**](#function-enemystrategydecorator) () <br> |
|  s32 | [**setTsuriStrategy**](#function-settsuristrategy) ([**EnemyStrategy**](class_enemy_strategy.md) \* i\_tsuriStrategy) <br> |
| virtual void | [**update**](#function-update) () <br> |


## Public Functions inherited from EnemyStrategy

See [EnemyStrategy](class_enemy_strategy.md)

| Type | Name |
| ---: | :--- |
|   | [**EnemyStrategy**](class_enemy_strategy.md#function-enemystrategy) () <br> |
|  void | [**changeState**](class_enemy_strategy.md#function-changestate) () <br> |
| virtual void | [**doBehavior**](class_enemy_strategy.md#function-dobehavior) () <br> |
| virtual void | [**doBehaviorInit**](class_enemy_strategy.md#function-dobehaviorinit) () <br> |
| virtual void | [**init**](class_enemy_strategy.md#function-init) () <br> |
|  void | [**setNextState**](class_enemy_strategy.md#function-setnextstate) (s16 i\_nextState) <br> |
| virtual s32 | [**unkEnemyStrategyFunc01**](class_enemy_strategy.md#function-unkenemystrategyfunc01) () <br> |
| virtual void | [**unkEnemyStrategyFunc02**](class_enemy_strategy.md#function-unkenemystrategyfunc02) () <br> |
| virtual void | [**update**](class_enemy_strategy.md#function-update) () <br> |
| virtual  | [**~EnemyStrategy**](class_enemy_strategy.md#function-enemystrategy) () <br> |




## Public Static Functions inherited from EnemyStrategy

See [EnemyStrategy](class_enemy_strategy.md)

| Type | Name |
| ---: | :--- |
|  void | [**operator delete**](class_enemy_strategy.md#function-operator-delete) (void \* mem) <br> |
|  void \* | [**operator new**](class_enemy_strategy.md#function-operator-new) ([**size\_t**](_enemy_strategy_8h.md#typedef-size_t) size, void \* mem) <br> |


















































## Public Attributes Documentation




### variable mTsuriState 

_0x18_ 
```C++
s16 EnemyStrategyDecorator::mTsuriState;
```




<hr>



### variable mpTsuriStrategy 

_0x14_ 
```C++
EnemyStrategy* EnemyStrategyDecorator::mpTsuriStrategy;
```




<hr>
## Public Functions Documentation




### function EnemyStrategyDecorator 

```C++
EnemyStrategyDecorator::EnemyStrategyDecorator () 
```




<hr>



### function setTsuriStrategy 

```C++
s32 EnemyStrategyDecorator::setTsuriStrategy (
    EnemyStrategy * i_tsuriStrategy
) 
```




<hr>



### function update 

```C++
virtual void EnemyStrategyDecorator::update () 
```



Implements [*EnemyStrategy::update*](class_enemy_strategy.md#function-update)


<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/Project/sources/Sato/include/EnemyStrategy.h`

