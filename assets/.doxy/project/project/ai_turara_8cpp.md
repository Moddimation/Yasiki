

# File aiTurara.cpp



[**FileList**](files.md) **>** [**Project**](dir_ffd1f789ec7bd0a45fc6ad92579c5070.md) **>** [**sources**](dir_b8a352f40b7c42104060207e884dd5ae.md) **>** [**sotoike**](dir_6867fe11e6cb6feb9e155a20906c505f.md) **>** [**src**](dir_8e6d97c301f48fc0c31caca3dfec66da.md) **>** [**aiTurara.cpp**](ai_turara_8cpp.md)

[Go to the source code of this file](ai_turara_8cpp_source.md)



* `#include "Sotoike/AITurara.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**AITurara\_State**](struct_a_i_turara___state.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef bool(AITurara::\* | [**behaviorFunc**](#typedef-behaviorfunc)  <br> |






## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**AITurara\_State**](struct_a_i_turara___state.md) | [**AITurara\_Behaviors**](#variable-aiturara_behaviors)   = `/* multi line expression */`<br> |
|  float | [**dummy**](#variable-dummy)   = `{ 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f }`<br> |
|  float | [**dummy2**](#variable-dummy2)   = `{ 1.0f, 0.95f, 0.9f, 0.85f, 1.0f, 0.9f, 0.75f, 0.3f }`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**freeCharacterByIndex**](#function-freecharacterbyindex) (int i\_idx) <br> |




























## Public Types Documentation




### typedef behaviorFunc 

```C++
typedef bool(AITurara::* behaviorFunc) (void);
```




<hr>
## Public Static Attributes Documentation




### variable AITurara\_Behaviors 

```C++
AITurara_State AITurara_Behaviors[];
```




<hr>



### variable dummy 

```C++
float dummy[];
```




<hr>



### variable dummy2 

```C++
float dummy2[];
```




<hr>
## Public Functions Documentation




### function freeCharacterByIndex 

```C++
void freeCharacterByIndex (
    int i_idx
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `Project/sources/sotoike/src/aiTurara.cpp`

