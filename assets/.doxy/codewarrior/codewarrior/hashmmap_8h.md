

# File hashmmap.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C++**](dir_bbcc9336d50f30308554b0fe78acfee6.md) **>** [**MSL\_Common**](dir_0c0c2b83f86d5caed54e8218e0fa784d.md) **>** [**Include**](dir_4b09b958bee5575b6e3a9125618b7d0e.md) **>** [**hashmmap.h**](hashmmap_8h.md)

[Go to the source code of this file](hashmmap_8h_source.md)



* `#include <mcompile.h>`
* `#include <memory>`
* `#include <hashtbl.h>`
* `#include <functional>`















## Classes

| Type | Name |
| ---: | :--- |
| class | [**hash\_multimap**](classhash__multimap.md) &lt;class Key, class [**T**](k__tan_8c.md#variable-t), class HashFunction, class KeyEqual&gt;<br>[_**hashmmap.h**_](hashmmap_8h.md) __ |
| class | [**value\_compare**](classhash__multimap_1_1value__compare.md) <br> |






















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**bool**](stdbool_8h.md#define-bool) | [**operator!=**](#function-operator) (const [**hash\_multimap**](classhash__multimap.md)&lt; Key, [**T**](k__tan_8c.md#variable-t), HashFunction, KeyEqual &gt; & x, const [**hash\_multimap**](classhash__multimap.md)&lt; Key, [**T**](k__tan_8c.md#variable-t), HashFunction, KeyEqual &gt; & y) <br> |
|  [**bool**](stdbool_8h.md#define-bool) | [**operator&lt;**](#function-operator_1) (const [**hash\_multimap**](classhash__multimap.md)&lt; Key, [**T**](k__tan_8c.md#variable-t), HashFunction, KeyEqual &gt; & x, const [**hash\_multimap**](classhash__multimap.md)&lt; Key, [**T**](k__tan_8c.md#variable-t), HashFunction, KeyEqual &gt; & y) <br> |
|  [**bool**](stdbool_8h.md#define-bool) | [**operator&lt;=**](#function-operator_2) (const [**hash\_multimap**](classhash__multimap.md)&lt; Key, [**T**](k__tan_8c.md#variable-t), HashFunction, KeyEqual &gt; & x, const [**hash\_multimap**](classhash__multimap.md)&lt; Key, [**T**](k__tan_8c.md#variable-t), HashFunction, KeyEqual &gt; & y) <br> |
|  [**bool**](stdbool_8h.md#define-bool) | [**operator==**](#function-operator_3) (const [**hash\_multimap**](classhash__multimap.md)&lt; Key, [**T**](k__tan_8c.md#variable-t), HashFunction, KeyEqual &gt; & x, const [**hash\_multimap**](classhash__multimap.md)&lt; Key, [**T**](k__tan_8c.md#variable-t), HashFunction, KeyEqual &gt; & y) <br> |
|  [**bool**](stdbool_8h.md#define-bool) | [**operator&gt;**](#function-operator_4) (const [**hash\_multimap**](classhash__multimap.md)&lt; Key, [**T**](k__tan_8c.md#variable-t), HashFunction, KeyEqual &gt; & x, const [**hash\_multimap**](classhash__multimap.md)&lt; Key, [**T**](k__tan_8c.md#variable-t), HashFunction, KeyEqual &gt; & y) <br> |
|  [**bool**](stdbool_8h.md#define-bool) | [**operator&gt;=**](#function-operator_5) (const [**hash\_multimap**](classhash__multimap.md)&lt; Key, [**T**](k__tan_8c.md#variable-t), HashFunction, KeyEqual &gt; & x, const [**hash\_multimap**](classhash__multimap.md)&lt; Key, [**T**](k__tan_8c.md#variable-t), HashFunction, KeyEqual &gt; & y) <br> |




























## Public Functions Documentation




### function operator!= 

```C++
template<class Key, class T, class HashFunction, class KeyEqual>
inline bool operator!= (
    const hash_multimap < Key, T , HashFunction, KeyEqual > & x,
    const hash_multimap < Key, T , HashFunction, KeyEqual > & y
) 
```




<hr>



### function operator&lt; 

```C++
template<class Key, class T, class HashFunction, class KeyEqual>
inline bool operator< (
    const hash_multimap < Key, T , HashFunction, KeyEqual > & x,
    const hash_multimap < Key, T , HashFunction, KeyEqual > & y
) 
```




<hr>



### function operator&lt;= 

```C++
template<class Key, class T, class HashFunction, class KeyEqual>
inline bool operator<= (
    const hash_multimap < Key, T , HashFunction, KeyEqual > & x,
    const hash_multimap < Key, T , HashFunction, KeyEqual > & y
) 
```




<hr>



### function operator== 

```C++
template<class Key, class T, class HashFunction, class KeyEqual>
inline bool operator== (
    const hash_multimap < Key, T , HashFunction, KeyEqual > & x,
    const hash_multimap < Key, T , HashFunction, KeyEqual > & y
) 
```




<hr>



### function operator&gt; 

```C++
template<class Key, class T, class HashFunction, class KeyEqual>
inline bool operator> (
    const hash_multimap < Key, T , HashFunction, KeyEqual > & x,
    const hash_multimap < Key, T , HashFunction, KeyEqual > & y
) 
```




<hr>



### function operator&gt;= 

```C++
template<class Key, class T, class HashFunction, class KeyEqual>
inline bool operator>= (
    const hash_multimap < Key, T , HashFunction, KeyEqual > & x,
    const hash_multimap < Key, T , HashFunction, KeyEqual > & y
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C++/MSL_Common/Include/hashmmap.h`

