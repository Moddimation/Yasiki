

# File hashmmap.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C++**](dir_1d8bcf55c9e1564519df8a05b1def2d1.md) **>** [**MSL\_Common**](dir_fc42de24ef3c14a5dea3aca327bd2ec9.md) **>** [**Include**](dir_f262df31fb8e04d575b9a3aa2e30ecf8.md) **>** [**hashmmap.h**](hashmmap_8h.md)

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
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C++/MSL_Common/Include/hashmmap.h`

