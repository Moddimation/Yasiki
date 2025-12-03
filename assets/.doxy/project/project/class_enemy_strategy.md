

# Class EnemyStrategy



[**ClassList**](annotated.md) **>** [**EnemyStrategy**](class_enemy_strategy.md)





* `#include <EnemyStrategy.h>`



Inherits the following classes: JORReflexible


Inherited by the following classes: [EnemyStrategyDecorator](class_enemy_strategy_decorator.md)
















## Public Attributes

| Type | Name |
| ---: | :--- |
|  u16 | [**mCurState**](#variable-mcurstate)  <br>_0x0E_  |
|  u16 | [**mNextState**](#variable-mnextstate)  <br>_0x0C_  |
|  s32 | [**mTimer**](#variable-mtimer)  <br>_0x10_  |
|  void \* | [**mpUserData**](#variable-mpuserdata)  <br>_0x08_  |
|  void \* | [**mpZako**](#variable-mpzako)  <br>_0x04_  |
















## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**EnemyStrategy**](#function-enemystrategy) () <br> |
|  void | [**changeState**](#function-changestate) () <br> |
| virtual void | [**doBehavior**](#function-dobehavior) () <br> |
| virtual void | [**doBehaviorInit**](#function-dobehaviorinit) () <br> |
| virtual void | [**init**](#function-init) () <br> |
|  void | [**setNextState**](#function-setnextstate) (s16 i\_nextState) <br> |
| virtual s32 | [**unkEnemyStrategyFunc01**](#function-unkenemystrategyfunc01) () <br> |
| virtual void | [**unkEnemyStrategyFunc02**](#function-unkenemystrategyfunc02) () <br> |
| virtual void | [**update**](#function-update) () <br> |
| virtual  | [**~EnemyStrategy**](#function-enemystrategy) () <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  void | [**operator delete**](#function-operator-delete) (void \* mem) <br> |
|  void \* | [**operator new**](#function-operator-new) ([**size\_t**](_enemy_strategy_8h.md#typedef-size_t) size, void \* mem) <br> |


























## Public Attributes Documentation




### variable mCurState 

_0x0E_ 
```C++
u16 EnemyStrategy::mCurState;
```




<hr>



### variable mNextState 

_0x0C_ 
```C++
u16 EnemyStrategy::mNextState;
```




<hr>



### variable mTimer 

_0x10_ 
```C++
s32 EnemyStrategy::mTimer;
```




<hr>



### variable mpUserData 

_0x08_ 
```C++
void* EnemyStrategy::mpUserData;
```




<hr>



### variable mpZako 

_0x04_ 
```C++
void* EnemyStrategy::mpZako;
```




<hr>
## Public Functions Documentation




### function EnemyStrategy 

```C++
EnemyStrategy::EnemyStrategy () 
```




<hr>



### function changeState 

```C++
void EnemyStrategy::changeState () 
```




<hr>



### function doBehavior 

```C++
virtual void EnemyStrategy::doBehavior () 
```




<hr>



### function doBehaviorInit 

```C++
virtual void EnemyStrategy::doBehaviorInit () 
```




<hr>



### function init 

```C++
virtual void EnemyStrategy::init () 
```




<hr>



### function setNextState 

```C++
void EnemyStrategy::setNextState (
    s16 i_nextState
) 
```




<hr>



### function unkEnemyStrategyFunc01 

```C++
virtual s32 EnemyStrategy::unkEnemyStrategyFunc01 () 
```




<hr>



### function unkEnemyStrategyFunc02 

```C++
virtual void EnemyStrategy::unkEnemyStrategyFunc02 () 
```




<hr>



### function update 

```C++
virtual void EnemyStrategy::update () 
```




<hr>



### function ~EnemyStrategy 

```C++
virtual EnemyStrategy::~EnemyStrategy () 
```




<hr>
## Public Static Functions Documentation




### function operator delete 

```C++
static void EnemyStrategy::operator delete (
    void * mem
) 
```




<hr>



### function operator new 

```C++
static void * EnemyStrategy::operator new (
    size_t size,
    void * mem
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/Project/sources/Sato/include/EnemyStrategy.h`

