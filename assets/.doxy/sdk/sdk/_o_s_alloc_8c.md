

# File OSAlloc.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSAlloc.c**](_o_s_alloc_8c.md)

[Go to the source code of this file](_o_s_alloc_8c_source.md)



* `#include <dolphin/os.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**Cell**](struct_cell.md) <br> |
| struct | [**HeapDesc**](struct_heap_desc.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Cell**](struct_cell.md) | [**Cell**](#typedef-cell)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**HeapDesc**](struct_heap_desc.md) | [**HeapDesc**](#typedef-heapdesc)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSHeapHandle**](_o_s_alloc_8h.md#typedef-osheaphandle) | [**\_\_OSCurrHeap**](#variable-__oscurrheap)   = `-1`<br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**ArenaEnd**](#variable-arenaend)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**ArenaStart**](#variable-arenastart)  <br> |
|  [**HeapDesc**](struct_heap_desc.md) \* | [**HeapArray**](#variable-heaparray)  <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**NumHeaps**](#variable-numheaps)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSAddToHeap**](#function-osaddtoheap) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) heap, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* start, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* end) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSAllocFixed**](#function-osallocfixed) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* rstart, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* rend) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSAllocFromHeap**](#function-osallocfromheap) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) heap, [**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**OSCheckHeap**](#function-oscheckheap) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) heap) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSCreateHeap**](#function-oscreateheap) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* start, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* end) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSDestroyHeap**](#function-osdestroyheap) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) heap) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSDumpHeap**](#function-osdumpheap) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) heap) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSFreeToHeap**](#function-osfreetoheap) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) heap, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* ptr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSInitAlloc**](#function-osinitalloc) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* arenaStart, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* arenaEnd, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) maxHeaps) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSReferentSize**](#function-osreferentsize) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* ptr) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetCurrentHeap**](#function-ossetcurrentheap) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) heap) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSVisitAllocated**](#function-osvisitallocated) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*, [**u32**](types_8h.md#typedef-u32)) visitor) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**Cell**](struct_cell.md) \* | [**DLAddFront**](#function-dladdfront) ([**Cell**](struct_cell.md) \* list, [**Cell**](struct_cell.md) \* cell) <br> |
|  [**Cell**](struct_cell.md) \* | [**DLExtract**](#function-dlextract) ([**Cell**](struct_cell.md) \* list, [**Cell**](struct_cell.md) \* cell) <br> |
|  [**Cell**](struct_cell.md) \* | [**DLInsert**](#function-dlinsert) ([**Cell**](struct_cell.md) \* list, [**Cell**](struct_cell.md) \* cell) <br> |
|  [**Cell**](struct_cell.md) \* | [**DLLookup**](#function-dllookup) ([**Cell**](struct_cell.md) \* list, [**Cell**](struct_cell.md) \* cell) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DLOverlap**](#function-dloverlap) ([**Cell**](struct_cell.md) \* list, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* start, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* end) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DLSize**](#function-dlsize) ([**Cell**](struct_cell.md) \* list) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**ALIGNMENT**](_o_s_alloc_8c.md#define-alignment)  `32`<br> |
| define  | [**ASSERTREPORT**](_o_s_alloc_8c.md#define-assertreport) (line, cond) `/* multi line expression */`<br> |
| define  | [**HEADERSIZE**](_o_s_alloc_8c.md#define-headersize)  `32[**u**](_c_a_r_d_private_8h.md#define-card_max_mount_step)`<br> |
| define  | [**InRange**](_o_s_alloc_8c.md#define-inrange) (cell, arenaStart, arenaEnd) `(([**u32**](types_8h.md#typedef-u32))[**arenaStart**](_c_a_r_d_private_8h.md#define-card_max_mount_step) &lt;= ([**u32**](types_8h.md#typedef-u32))[**cell**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) && (([**u32**](types_8h.md#typedef-u32))[**cell**](_c_a_r_d_private_8h.md#define-card_max_mount_step) &lt; ([**u32**](types_8h.md#typedef-u32))[**arenaEnd**](_c_a_r_d_private_8h.md#define-card_max_mount_step))`<br> |
| define  | [**MINOBJSIZE**](_o_s_alloc_8c.md#define-minobjsize)  `64[**u**](_c_a_r_d_private_8h.md#define-card_max_mount_step)`<br> |

## Public Types Documentation




### typedef Cell 

```C++
typedef struct Cell Cell;
```




<hr>



### typedef HeapDesc 

```C++
typedef struct HeapDesc HeapDesc;
```




<hr>
## Public Attributes Documentation




### variable \_\_OSCurrHeap 

```C++
volatile OSHeapHandle __OSCurrHeap;
```




<hr>
## Public Static Attributes Documentation




### variable ArenaEnd 

```C++
void* ArenaEnd;
```




<hr>



### variable ArenaStart 

```C++
void* ArenaStart;
```




<hr>



### variable HeapArray 

```C++
HeapDesc* HeapArray;
```




<hr>



### variable NumHeaps 

```C++
int NumHeaps;
```




<hr>
## Public Functions Documentation




### function OSAddToHeap 

```C++
void OSAddToHeap (
    int heap,
    void * start,
    void * end
) 
```




<hr>



### function OSAllocFixed 

```C++
void * OSAllocFixed (
    void * rstart,
    void * rend
) 
```




<hr>



### function OSAllocFromHeap 

```C++
void * OSAllocFromHeap (
    int heap,
    u32 size
) 
```




<hr>



### function OSCheckHeap 

```C++
s32 OSCheckHeap (
    int heap
) 
```




<hr>



### function OSCreateHeap 

```C++
int OSCreateHeap (
    void * start,
    void * end
) 
```




<hr>



### function OSDestroyHeap 

```C++
void OSDestroyHeap (
    int heap
) 
```




<hr>



### function OSDumpHeap 

```C++
void OSDumpHeap (
    int heap
) 
```




<hr>



### function OSFreeToHeap 

```C++
void OSFreeToHeap (
    int heap,
    void * ptr
) 
```




<hr>



### function OSInitAlloc 

```C++
void * OSInitAlloc (
    void * arenaStart,
    void * arenaEnd,
    int maxHeaps
) 
```




<hr>



### function OSReferentSize 

```C++
u32 OSReferentSize (
    void * ptr
) 
```




<hr>



### function OSSetCurrentHeap 

```C++
int OSSetCurrentHeap (
    int heap
) 
```




<hr>



### function OSVisitAllocated 

```C++
void OSVisitAllocated (
    void (*)( void *, u32 ) visitor
) 
```




<hr>
## Public Static Functions Documentation




### function DLAddFront 

```C++
static Cell * DLAddFront (
    Cell * list,
    Cell * cell
) 
```




<hr>



### function DLExtract 

```C++
static Cell * DLExtract (
    Cell * list,
    Cell * cell
) 
```




<hr>



### function DLInsert 

```C++
static Cell * DLInsert (
    Cell * list,
    Cell * cell
) 
```




<hr>



### function DLLookup 

```C++
static Cell * DLLookup (
    Cell * list,
    Cell * cell
) 
```




<hr>



### function DLOverlap 

```C++
static int DLOverlap (
    Cell * list,
    void * start,
    void * end
) 
```




<hr>



### function DLSize 

```C++
static s32 DLSize (
    Cell * list
) 
```




<hr>
## Macro Definition Documentation





### define ALIGNMENT 

```C++
#define ALIGNMENT `32`
```




<hr>



### define ASSERTREPORT 

```C++
#define ASSERTREPORT (
    line,
    cond
) `/* multi line expression */`
```




<hr>



### define HEADERSIZE 

```C++
#define HEADERSIZE `32 u`
```




<hr>



### define InRange 

```C++
#define InRange (
    cell,
    arenaStart,
    arenaEnd
) `(( u32 ) arenaStart <= ( u32 ) cell ) && (( u32 ) cell < ( u32 ) arenaEnd )`
```




<hr>



### define MINOBJSIZE 

```C++
#define MINOBJSIZE `64 u`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSAlloc.c`

