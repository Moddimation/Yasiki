

# Class Koga::CharacterEventObserver



[**ClassList**](annotated.md) **>** [**Koga**](namespace_koga.md) **>** [**CharacterEventObserver**](class_koga_1_1_character_event_observer.md)





* `#include <CharacterEventObserver.h>`



Inherits the following classes: [Koga::Observer](class_koga_1_1_observer.md)


Inherited by the following classes: [EnemyTypicalStrategy](class_enemy_typical_strategy.md)




















































## Public Functions

| Type | Name |
| ---: | :--- |
| virtual bool | [**FUN\_800ea380**](#function-fun_800ea380) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**FUN\_800ea44c**](#function-fun_800ea44c) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onCaptureBegin**](#function-oncapturebegin) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onCaptureEnd**](#function-oncaptureend) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onCollideWithPlayer**](#function-oncollidewithplayer) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onEnteredFlashlightBeam**](#function-onenteredflashlightbeam) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onFishingBegin**](#function-onfishingbegin) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onHitWithFireBall**](#function-onhitwithfireball) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onHitWithIceBall**](#function-onhitwithiceball) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onHitWithWaterBall**](#function-onhitwithwaterball) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onPlayerEnteredRoom**](#function-onplayerenteredroom) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onPlayerLeftRoom**](#function-onplayerleftroom) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onPlayerTapped**](#function-onplayertapped) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onSprayedWithFire**](#function-onsprayedwithfire) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onSprayedWithIce**](#function-onsprayedwithice) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**onSprayedWithWater**](#function-onsprayedwithwater) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |
| virtual bool | [**receiveMessage**](#function-receivemessage) ([**CharacterEvent**](class_koga_1_1_character_event.md) \* msg) <br> |


## Public Functions inherited from Koga::Observer

See [Koga::Observer](class_koga_1_1_observer.md)

| Type | Name |
| ---: | :--- |
| virtual Ret | [**receiveMessage**](class_koga_1_1_observer.md#function-receivemessage) (Msg \* msg) = 0<br> |






















































## Public Functions Documentation




### function FUN\_800ea380 

```C++
virtual bool Koga::CharacterEventObserver::FUN_800ea380 (
    CharacterEvent * msg
) 
```




<hr>



### function FUN\_800ea44c 

```C++
virtual bool Koga::CharacterEventObserver::FUN_800ea44c (
    CharacterEvent * msg
) 
```




<hr>



### function onCaptureBegin 

```C++
virtual bool Koga::CharacterEventObserver::onCaptureBegin (
    CharacterEvent * msg
) 
```




<hr>



### function onCaptureEnd 

```C++
virtual bool Koga::CharacterEventObserver::onCaptureEnd (
    CharacterEvent * msg
) 
```




<hr>



### function onCollideWithPlayer 

```C++
virtual bool Koga::CharacterEventObserver::onCollideWithPlayer (
    CharacterEvent * msg
) 
```




<hr>



### function onEnteredFlashlightBeam 

```C++
virtual bool Koga::CharacterEventObserver::onEnteredFlashlightBeam (
    CharacterEvent * msg
) 
```




<hr>



### function onFishingBegin 

```C++
virtual bool Koga::CharacterEventObserver::onFishingBegin (
    CharacterEvent * msg
) 
```




<hr>



### function onHitWithFireBall 

```C++
virtual bool Koga::CharacterEventObserver::onHitWithFireBall (
    CharacterEvent * msg
) 
```




<hr>



### function onHitWithIceBall 

```C++
virtual bool Koga::CharacterEventObserver::onHitWithIceBall (
    CharacterEvent * msg
) 
```




<hr>



### function onHitWithWaterBall 

```C++
virtual bool Koga::CharacterEventObserver::onHitWithWaterBall (
    CharacterEvent * msg
) 
```




<hr>



### function onPlayerEnteredRoom 

```C++
virtual bool Koga::CharacterEventObserver::onPlayerEnteredRoom (
    CharacterEvent * msg
) 
```




<hr>



### function onPlayerLeftRoom 

```C++
virtual bool Koga::CharacterEventObserver::onPlayerLeftRoom (
    CharacterEvent * msg
) 
```




<hr>



### function onPlayerTapped 

```C++
virtual bool Koga::CharacterEventObserver::onPlayerTapped (
    CharacterEvent * msg
) 
```




<hr>



### function onSprayedWithFire 

```C++
virtual bool Koga::CharacterEventObserver::onSprayedWithFire (
    CharacterEvent * msg
) 
```




<hr>



### function onSprayedWithIce 

```C++
virtual bool Koga::CharacterEventObserver::onSprayedWithIce (
    CharacterEvent * msg
) 
```




<hr>



### function onSprayedWithWater 

```C++
virtual bool Koga::CharacterEventObserver::onSprayedWithWater (
    CharacterEvent * msg
) 
```




<hr>



### function receiveMessage 

```C++
virtual bool Koga::CharacterEventObserver::receiveMessage (
    CharacterEvent * msg
) 
```



Implements [*Koga::Observer::receiveMessage*](class_koga_1_1_observer.md#function-receivemessage)


<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/Project/sources/Koga/include/CharacterEventObserver.h`

