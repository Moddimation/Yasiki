

# Class EnemyTypicalStrategy



[**ClassList**](annotated.md) **>** [**EnemyTypicalStrategy**](class_enemy_typical_strategy.md)





* `#include <EnemyTypicalStrategy.h>`



Inherits the following classes: [EnemyStrategyDecorator](class_enemy_strategy_decorator.md),  [Koga::CharacterEventObserver](class_koga_1_1_character_event_observer.md)


Inherited by the following classes: [AITurara](class_a_i_turara.md)
































## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**EnTsuriStrategies**](class_en_tsuri_strategies.md) | [**mTsuriStrategies**](#variable-mtsuristrategies)  <br>_0x20_  |


## Public Attributes inherited from EnemyStrategyDecorator

See [EnemyStrategyDecorator](class_enemy_strategy_decorator.md)

| Type | Name |
| ---: | :--- |
|  s16 | [**mTsuriState**](class_enemy_strategy_decorator.md#variable-mtsuristate)  <br>_0x18_  |
|  [**EnemyStrategy**](class_enemy_strategy.md) \* | [**mpTsuriStrategy**](class_enemy_strategy_decorator.md#variable-mptsuristrategy)  <br>_0x14_  |


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
| virtual bool | [**onFishingBegin**](#function-onfishingbegin) ([**Koga::CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual  | [**~EnemyTypicalStrategy**](#function-enemytypicalstrategy) () <br> |


## Public Functions inherited from EnemyStrategyDecorator

See [EnemyStrategyDecorator](class_enemy_strategy_decorator.md)

| Type | Name |
| ---: | :--- |
|   | [**EnemyStrategyDecorator**](class_enemy_strategy_decorator.md#function-enemystrategydecorator) () <br> |
|  s32 | [**setTsuriStrategy**](class_enemy_strategy_decorator.md#function-settsuristrategy) ([**EnemyStrategy**](class_enemy_strategy.md) \* i\_tsuriStrategy) <br> |
| virtual void | [**update**](class_enemy_strategy_decorator.md#function-update) () <br> |


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


## Public Functions inherited from Koga::CharacterEventObserver

See [Koga::CharacterEventObserver](class_koga_1_1_character_event_observer.md)

| Type | Name |
| ---: | :--- |
| virtual bool | [**FUN\_800ea380**](class_koga_1_1_character_event_observer.md#function-fun_800ea380) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**FUN\_800ea44c**](class_koga_1_1_character_event_observer.md#function-fun_800ea44c) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onCaptureBegin**](class_koga_1_1_character_event_observer.md#function-oncapturebegin) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onCaptureEnd**](class_koga_1_1_character_event_observer.md#function-oncaptureend) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onCollideWithPlayer**](class_koga_1_1_character_event_observer.md#function-oncollidewithplayer) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onEnteredFlashlightBeam**](class_koga_1_1_character_event_observer.md#function-onenteredflashlightbeam) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onFishingBegin**](class_koga_1_1_character_event_observer.md#function-onfishingbegin) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onHitWithFireBall**](class_koga_1_1_character_event_observer.md#function-onhitwithfireball) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onHitWithIceBall**](class_koga_1_1_character_event_observer.md#function-onhitwithiceball) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onHitWithWaterBall**](class_koga_1_1_character_event_observer.md#function-onhitwithwaterball) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onPlayerEnteredRoom**](class_koga_1_1_character_event_observer.md#function-onplayerenteredroom) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onPlayerLeftRoom**](class_koga_1_1_character_event_observer.md#function-onplayerleftroom) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onPlayerTapped**](class_koga_1_1_character_event_observer.md#function-onplayertapped) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onSprayedWithFire**](class_koga_1_1_character_event_observer.md#function-onsprayedwithfire) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onSprayedWithIce**](class_koga_1_1_character_event_observer.md#function-onsprayedwithice) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onSprayedWithWater**](class_koga_1_1_character_event_observer.md#function-onsprayedwithwater) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**receiveMessage**](class_koga_1_1_character_event_observer.md#function-receivemessage) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |


## Public Functions inherited from Koga::Observer

See [Koga::Observer](class_koga_1_1_observer.md)

| Type | Name |
| ---: | :--- |
| virtual Ret | [**receiveMessage**](class_koga_1_1_observer.md#function-receivemessage) (Msg \* msg) = 0<br> |






## Public Static Functions inherited from EnemyStrategy

See [EnemyStrategy](class_enemy_strategy.md)

| Type | Name |
| ---: | :--- |
|  void | [**operator delete**](class_enemy_strategy.md#function-operator-delete) (void \* mem) <br> |
|  void \* | [**operator new**](class_enemy_strategy.md#function-operator-new) ([**size\_t**](_enemy_strategy_8h.md#typedef-size_t) size, void \* mem) <br> |






























































































































## Public Attributes Documentation




### variable mTsuriStrategies 

_0x20_ 
```C++
EnTsuriStrategies EnemyTypicalStrategy::mTsuriStrategies;
```




<hr>
## Public Functions Documentation




### function onFishingBegin 

```C++
virtual bool EnemyTypicalStrategy::onFishingBegin (
    Koga::CharacterEvent * msg
) 
```



Implements [*Koga::CharacterEventObserver::onFishingBegin*](class_koga_1_1_character_event_observer.md#function-onfishingbegin)


<hr>



### function ~EnemyTypicalStrategy 

```C++
inline virtual EnemyTypicalStrategy::~EnemyTypicalStrategy () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/Project/sources/Sato/include/EnemyTypicalStrategy.h`

