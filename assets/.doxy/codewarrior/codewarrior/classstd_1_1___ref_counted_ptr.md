

# Class std::\_RefCountedPtr

**template &lt;[**class**](classstd_1_1allocator.md) [**T**](k__tan_8c.md#variable-t), [**class**](classstd_1_1allocator.md) [**traits**](classstd_1_1allocator.md)&gt;**



[**ClassList**](annotated.md) **>** [**std**](namespacestd.md) **>** [**\_RefCountedPtr**](classstd_1_1___ref_counted_ptr.md)





* `#include <RefCountedPtrArray.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**\_RefCountedPtr**](#function-_refcountedptr-12) ([**T**](k__tan_8c.md#variable-t) \* ptr=0) <br> |
|   | [**\_RefCountedPtr**](#function-_refcountedptr-22) ([**const**](classstd_1_1allocator.md) [**\_RefCountedPtr**](classstd_1_1___ref_counted_ptr.md)&lt; [**T**](k__tan_8c.md#variable-t), [**traits**](classstd_1_1allocator.md) &gt; & other) <br> |
|  [**bool**](stdbool_8h.md#define-bool) | [**isNonUnique**](#function-isnonunique) () const<br> |
|   | [**operator const T \***](#function-operator-const-t-*) () const<br> |
|  [**T**](k__tan_8c.md#variable-t) & | [**operator\***](#function-operator) () <br> |
|  [**const**](classstd_1_1allocator.md) [**T**](k__tan_8c.md#variable-t) & | [**operator\***](#function-operator_1) () const<br> |
|  [**T**](k__tan_8c.md#variable-t) \* | [**operator-&gt;**](#function-operator-) () <br> |
|  [**const**](classstd_1_1allocator.md) [**T**](k__tan_8c.md#variable-t) \* | [**operator-&gt;**](#function-operator-_1) () const<br> |
|  [**\_RefCountedPtr**](classstd_1_1___ref_counted_ptr.md)&lt; [**T**](k__tan_8c.md#variable-t), [**traits**](classstd_1_1allocator.md) &gt; & | [**operator=**](#function-operator_2) ([**const**](classstd_1_1allocator.md) [**\_RefCountedPtr**](classstd_1_1___ref_counted_ptr.md)&lt; [**T**](k__tan_8c.md#variable-t), [**traits**](classstd_1_1allocator.md) &gt; & rhs) <br> |
|   | [**~\_RefCountedPtr**](#function-_refcountedptr) () <br> |








## Protected Attributes

| Type | Name |
| ---: | :--- |
|  [**T**](k__tan_8c.md#variable-t) \* | [**ptr\_**](#variable-ptr_)  <br> |
|  [**int**](classstd_1_1allocator.md) \* | [**refCount\_**](#variable-refcount_)  <br> |




















## Public Functions Documentation




### function \_RefCountedPtr [1/2]

```C++
std::_RefCountedPtr::_RefCountedPtr (
    T * ptr=0
) 
```




<hr>



### function \_RefCountedPtr [2/2]

```C++
std::_RefCountedPtr::_RefCountedPtr (
    const  _RefCountedPtr < T , traits > & other
) 
```




<hr>



### function isNonUnique 

```C++
inline bool std::_RefCountedPtr::isNonUnique () const
```




<hr>



### function operator const T \* 

```C++
inline std::_RefCountedPtr::operator const T * () const
```




<hr>



### function operator\* 

```C++
inline T & std::_RefCountedPtr::operator* () 
```




<hr>



### function operator\* 

```C++
inline const  T & std::_RefCountedPtr::operator* () const
```




<hr>



### function operator-&gt; 

```C++
inline T * std::_RefCountedPtr::operator-> () 
```




<hr>



### function operator-&gt; 

```C++
inline const  T * std::_RefCountedPtr::operator-> () const
```




<hr>



### function operator= 

```C++
_RefCountedPtr < T , traits > & std::_RefCountedPtr::operator= (
    const  _RefCountedPtr < T , traits > & rhs
) 
```




<hr>



### function ~\_RefCountedPtr 

```C++
std::_RefCountedPtr::~_RefCountedPtr () 
```




<hr>
## Protected Attributes Documentation




### variable ptr\_ 

```C++
T* std::_RefCountedPtr< T, traits >::ptr_;
```




<hr>



### variable refCount\_ 

```C++
int* std::_RefCountedPtr< T, traits >::refCount_;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C++/MSL_Common/Include/RefCountedPtrArray.h`

