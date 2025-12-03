

# Namespace std



[**Namespace List**](namespaces.md) **>** [**std**](namespacestd.md)



[_**mutex.h**_](mutex_8h.md) __[More...](#detailed-description)
















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**\_Array**](structstd_1_1___array.md) &lt;[**class**](classstd_1_1allocator.md) [**T**](k__tan_8c.md#variable-t)&gt;<br> |
| class | [**\_MSLstring**](classstd_1_1___m_s_lstring.md) <br> |
| class | [**\_RefCountedPtr**](classstd_1_1___ref_counted_ptr.md) &lt;[**class**](classstd_1_1allocator.md) [**T**](k__tan_8c.md#variable-t), [**class**](classstd_1_1allocator.md) [**traits**](classstd_1_1allocator.md)&gt;<br> |
| struct | [**\_Single**](structstd_1_1___single.md) &lt;[**class**](classstd_1_1allocator.md) [**T**](k__tan_8c.md#variable-t)&gt;<br> |
| class | [**\_\_pointer\_plus\_bit**](classstd_1_1____pointer__plus__bit.md) &lt;[**class**](classstd_1_1allocator.md) [**T**](k__tan_8c.md#variable-t)&gt;<br> |
| class | [**\_\_red\_black\_tree**](classstd_1_1____red__black__tree.md) &lt;b&gt;<br> |
| class | [**\_\_tree**](classstd_1_1____tree.md) &lt;[**class**](classstd_1_1allocator.md) [**T**](k__tan_8c.md#variable-t), [**class**](classstd_1_1allocator.md) [**Compare**](classstd_1_1allocator.md), [**class**](classstd_1_1allocator.md) [**Allocator**](classstd_1_1allocator.md)&gt;<br> |
| class | [**allocator**](classstd_1_1allocator.md) &lt;[**class**](classstd_1_1allocator.md) [**T**](k__tan_8c.md#variable-t)&gt;<br> |
| class | [**basic\_string**](classstd_1_1basic__string.md) &lt;[**class**](classstd_1_1allocator.md) [**charT**](classstd_1_1allocator.md), [**class**](classstd_1_1allocator.md) [**traits**](classstd_1_1allocator.md), [**class**](classstd_1_1allocator.md) [**Allocator**](classstd_1_1allocator.md)&gt;<br> |
| struct | [**char\_traits**](structstd_1_1char__traits.md) &lt;[**class**](classstd_1_1allocator.md) [**charT**](classstd_1_1allocator.md)&gt;<br> |
| class | [**mutex**](classstd_1_1mutex.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**basic\_string**](classstd_1_1basic__string.md)&lt; [**char**](classstd_1_1allocator.md), [**char\_traits**](structstd_1_1char__traits.md)&lt; [**char**](classstd_1_1allocator.md) &gt;, [**allocator**](classstd_1_1allocator.md)&lt; [**char**](classstd_1_1allocator.md) &gt; &gt; | [**string**](#typedef-string)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  ctype\_base::mask | [**\_\_mask\_map**](#variable-__mask_map)   = `/* multi line expression */`<br> |
|  ostream | [**cerr**](#variable-cerr)  <br> |
|  istream | [**cin**](#variable-cin)  <br> |
|  ostream | [**clog**](#variable-clog)  <br> |
|  ostream | [**cout**](#variable-cout)  <br> |
|  [**wostream**](classstd_1_1allocator.md) | [**wcerr**](#variable-wcerr)  <br> |
|  [**wistream**](classstd_1_1allocator.md) | [**wcin**](#variable-wcin)  <br> |
|  [**wostream**](classstd_1_1allocator.md) | [**wclog**](#variable-wclog)  <br> |
|  [**wostream**](classstd_1_1allocator.md) | [**wcout**](#variable-wcout)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**\_BCD**](classstd_1_1allocator.md) | [**\_\_two\_exp**](#function-__two_exp) ([**short**](classstd_1_1allocator.md) x) <br> |




























## Detailed Description


[**locale.cpp**](locale_8cpp.md)


[**iostream.cpp**](iostream_8cpp.md)


[**ios.cpp**](ios_8cpp.md)


[**complex.cpp**](complex_8cpp.md)


[**tree.h**](tree_8h.md) 


    
## Public Types Documentation




### typedef string 

```C++
typedef basic_string<char, char_traits<char>, allocator<char> > std::string;
```




<hr>
## Public Attributes Documentation




### variable \_\_mask\_map 

```C++
ctype_base::mask std::__mask_map[ctype< char >::table_size];
```




<hr>



### variable cerr 

```C++
ostream std::cerr;
```




<hr>



### variable cin 

```C++
istream std::cin;
```




<hr>



### variable clog 

```C++
ostream std::clog;
```




<hr>



### variable cout 

```C++
ostream std::cout;
```




<hr>



### variable wcerr 

```C++
wostream std::wcerr;
```




<hr>



### variable wcin 

```C++
wistream std::wcin;
```




<hr>



### variable wclog 

```C++
wostream std::wclog;
```




<hr>



### variable wcout 

```C++
wostream std::wcout;
```




<hr>
## Public Functions Documentation




### function \_\_two\_exp 

```C++
_BCD std::__two_exp (
    short x
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C++/MSL_Common/Include/MSLstring.h`

