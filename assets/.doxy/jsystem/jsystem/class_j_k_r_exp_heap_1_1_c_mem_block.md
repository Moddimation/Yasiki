

# Class JKRExpHeap::CMemBlock



[**ClassList**](annotated.md) **>** [**JKRExpHeap**](class_j_k_r_exp_heap.md) **>** [**CMemBlock**](class_j_k_r_exp_heap_1_1_c_mem_block.md)





* `#include <JKRExpHeap.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  bool | [**\_isTempMemBlock**](#function-_istempmemblock) () const<br> |
|  [**JKRExpHeap::CMemBlock**](class_j_k_r_exp_heap_1_1_c_mem_block.md) \* | [**allocBack**](#function-allocback) (size\_t size, u8 group\_id\_1, u8 align\_1, u8 group\_id\_2, u8 align\_2) <br> |
|  [**JKRExpHeap::CMemBlock**](class_j_k_r_exp_heap_1_1_c_mem_block.md) \* | [**allocFore**](#function-allocfore) (size\_t size, u8 group\_id, u8 align\_1, u8 group\_id\_2, u8 align\_2) <br> |
|  void \* | [**free**](#function-free) ([**JKRExpHeap**](class_j_k_r_exp_heap.md) \* heap) <br> |
|  int | [**getAlignment**](#function-getalignment) () const<br> |
|  void \* | [**getContent**](#function-getcontent) () const<br> |
|  u8 | [**getGroupId**](#function-getgroupid) () const<br> |
|  [**CMemBlock**](class_j_k_r_exp_heap_1_1_c_mem_block.md) \* | [**getNextBlock**](#function-getnextblock) () const<br> |
|  [**CMemBlock**](class_j_k_r_exp_heap_1_1_c_mem_block.md) \* | [**getPrevBlock**](#function-getprevblock) () const<br> |
|  u32 | [**getSize**](#function-getsize) () const<br> |
|  void | [**initiate**](#function-initiate) ([**CMemBlock**](class_j_k_r_exp_heap_1_1_c_mem_block.md) \* prev, [**CMemBlock**](class_j_k_r_exp_heap_1_1_c_mem_block.md) \* next, size\_t size, u8 groupId, u8 align) <br> |
|  bool | [**isValid**](#function-isvalid) () const<br> |
|  void | [**newGroupId**](#function-newgroupid) (u8 group\_id) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**CMemBlock**](class_j_k_r_exp_heap_1_1_c_mem_block.md) \* | [**getBlock**](#function-getblock) (void \* data) <br> |
|  [**CMemBlock**](class_j_k_r_exp_heap_1_1_c_mem_block.md) \* | [**getHeapBlock**](#function-getheapblock) (void \* obj) <br> |


























## Public Functions Documentation




### function \_isTempMemBlock 

```C++
inline bool JKRExpHeap::CMemBlock::_isTempMemBlock () const
```




<hr>



### function allocBack 

```C++
JKRExpHeap::CMemBlock * JKRExpHeap::CMemBlock::allocBack (
    size_t size,
    u8 group_id_1,
    u8 align_1,
    u8 group_id_2,
    u8 align_2
) 
```




<hr>



### function allocFore 

```C++
JKRExpHeap::CMemBlock * JKRExpHeap::CMemBlock::allocFore (
    size_t size,
    u8 group_id,
    u8 align_1,
    u8 group_id_2,
    u8 align_2
) 
```




<hr>



### function free 

```C++
void * JKRExpHeap::CMemBlock::free (
    JKRExpHeap * heap
) 
```




<hr>



### function getAlignment 

```C++
inline int JKRExpHeap::CMemBlock::getAlignment () const
```




<hr>



### function getContent 

```C++
inline void * JKRExpHeap::CMemBlock::getContent () const
```




<hr>



### function getGroupId 

```C++
inline u8 JKRExpHeap::CMemBlock::getGroupId () const
```




<hr>



### function getNextBlock 

```C++
inline CMemBlock * JKRExpHeap::CMemBlock::getNextBlock () const
```




<hr>



### function getPrevBlock 

```C++
inline CMemBlock * JKRExpHeap::CMemBlock::getPrevBlock () const
```




<hr>



### function getSize 

```C++
inline u32 JKRExpHeap::CMemBlock::getSize () const
```




<hr>



### function initiate 

```C++
void JKRExpHeap::CMemBlock::initiate (
    CMemBlock * prev,
    CMemBlock * next,
    size_t size,
    u8 groupId,
    u8 align
) 
```




<hr>



### function isValid 

```C++
inline bool JKRExpHeap::CMemBlock::isValid () const
```




<hr>



### function newGroupId 

```C++
inline void JKRExpHeap::CMemBlock::newGroupId (
    u8 group_id
) 
```




<hr>
## Public Static Functions Documentation




### function getBlock 

```C++
static inline CMemBlock * JKRExpHeap::CMemBlock::getBlock (
    void * data
) 
```




<hr>



### function getHeapBlock 

```C++
static CMemBlock * JKRExpHeap::CMemBlock::getHeapBlock (
    void * obj
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/JSystem/System/JKernel/include/JKRExpHeap.h`

