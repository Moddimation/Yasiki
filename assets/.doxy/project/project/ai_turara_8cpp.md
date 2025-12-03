

# File aiTurara.cpp



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**Project**](dir_b9837e7912a2e62dbadd80ce5876b790.md) **>** [**sources**](dir_e9f5f664b7d8a26223d14dd7fedffb79.md) **>** [**sotoike**](dir_588f12229f86c3f2fa7350d59c3aa35e.md) **>** [**src**](dir_140902fe932dc0528f07b51ac7694816.md) **>** [**aiTurara.cpp**](ai_turara_8cpp.md)

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
The documentation for this class was generated from the following file `decomp/Project/sources/sotoike/src/aiTurara.cpp`

