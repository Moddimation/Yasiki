

# File ExceptionPPC.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Runtime**](dir_e69745e3285a8d4f155d29d88e1a7b6b.md) **>** [**Inc**](dir_192ee455ef94b5a11e62d491224058e4.md) **>** [**ExceptionPPC.h**](_exception_p_p_c_8h.md)

[Go to the source code of this file](_exception_p_p_c_8h_source.md)


















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**ExceptionRangeLarge**](struct_exception_range_large.md) <br> |
| struct | [**ExceptionRangeSmall**](struct_exception_range_small.md) <br> |
| struct | [**ExceptionTableIndex**](struct_exception_table_index.md) <br> |
| struct | [**ExceptionTableLarge**](struct_exception_table_large.md) <br> |
| struct | [**ExceptionTableSmall**](struct_exception_table_small.md) <br> |
| struct | [**ExceptionTableSmallVector**](struct_exception_table_small_vector.md) <br> |
| struct | [**ex\_activecatchblock**](structex__activecatchblock.md) <br> |
| struct | [**ex\_branch**](structex__branch.md) <br> |
| struct | [**ex\_catchblock**](structex__catchblock.md) <br> |
| struct | [**ex\_deletepointer**](structex__deletepointer.md) <br> |
| struct | [**ex\_deletepointercond**](structex__deletepointercond.md) <br> |
| struct | [**ex\_destroylocal**](structex__destroylocal.md) <br> |
| struct | [**ex\_destroylocalarray**](structex__destroylocalarray.md) <br> |
| struct | [**ex\_destroylocalcond**](structex__destroylocalcond.md) <br> |
| struct | [**ex\_destroylocalpointer**](structex__destroylocalpointer.md) <br> |
| struct | [**ex\_destroymember**](structex__destroymember.md) <br> |
| struct | [**ex\_destroymemberarray**](structex__destroymemberarray.md) <br> |
| struct | [**ex\_destroymembercond**](structex__destroymembercond.md) <br> |
| struct | [**ex\_specification**](structex__specification.md) <br> |
| struct | [**ex\_terminate**](structex__terminate.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef struct [**ExceptionRangeLarge**](struct_exception_range_large.md) | [**ExceptionRangeLarge**](#typedef-exceptionrangelarge)  <br> |
| typedef struct [**ExceptionRangeSmall**](struct_exception_range_small.md) | [**ExceptionRangeSmall**](#typedef-exceptionrangesmall)  <br> |
| typedef struct [**ExceptionTableIndex**](struct_exception_table_index.md) | [**ExceptionTableIndex**](#typedef-exceptiontableindex)  <br> |
| typedef struct [**ExceptionTableLarge**](struct_exception_table_large.md) | [**ExceptionTableLarge**](#typedef-exceptiontablelarge)  <br> |
| typedef struct [**ExceptionTableSmall**](struct_exception_table_small.md) | [**ExceptionTableSmall**](#typedef-exceptiontablesmall)  <br> |
| typedef struct [**ExceptionTableSmallVector**](struct_exception_table_small_vector.md) | [**ExceptionTableSmallVector**](#typedef-exceptiontablesmallvector)  <br> |
| typedef struct [**ex\_activecatchblock**](structex__activecatchblock.md) | [**ex\_activecatchblock**](#typedef-ex_activecatchblock)  <br> |
| typedef struct [**ex\_branch**](structex__branch.md) | [**ex\_branch**](#typedef-ex_branch)  <br> |
| typedef struct [**ex\_catchblock**](structex__catchblock.md) | [**ex\_catchblock**](#typedef-ex_catchblock)  <br> |
| typedef struct [**ex\_deletepointer**](structex__deletepointer.md) | [**ex\_deletepointer**](#typedef-ex_deletepointer)  <br> |
| typedef struct [**ex\_deletepointercond**](structex__deletepointercond.md) | [**ex\_deletepointercond**](#typedef-ex_deletepointercond)  <br> |
| typedef struct [**ex\_destroylocal**](structex__destroylocal.md) | [**ex\_destroylocal**](#typedef-ex_destroylocal)  <br> |
| typedef struct [**ex\_destroylocalarray**](structex__destroylocalarray.md) | [**ex\_destroylocalarray**](#typedef-ex_destroylocalarray)  <br> |
| typedef struct [**ex\_destroylocalcond**](structex__destroylocalcond.md) | [**ex\_destroylocalcond**](#typedef-ex_destroylocalcond)  <br> |
| typedef struct [**ex\_destroylocalpointer**](structex__destroylocalpointer.md) | [**ex\_destroylocalpointer**](#typedef-ex_destroylocalpointer)  <br> |
| typedef struct [**ex\_destroymember**](structex__destroymember.md) | [**ex\_destroymember**](#typedef-ex_destroymember)  <br> |
| typedef struct [**ex\_destroymemberarray**](structex__destroymemberarray.md) | [**ex\_destroymemberarray**](#typedef-ex_destroymemberarray)  <br> |
| typedef struct [**ex\_destroymembercond**](structex__destroymembercond.md) | [**ex\_destroymembercond**](#typedef-ex_destroymembercond)  <br> |
| typedef struct [**ex\_specification**](structex__specification.md) | [**ex\_specification**](#typedef-ex_specification)  <br> |
| typedef struct [**ex\_terminate**](structex__terminate.md) | [**ex\_terminate**](#typedef-ex_terminate)  <br> |
| typedef unsigned char | [**exaction\_type**](#typedef-exaction_type)  <br> |















































## Macros

| Type | Name |
| ---: | :--- |
| define  | [**ETI\_GetDirectStore**](_exception_p_p_c_8h.md#define-eti_getdirectstore) (field) `((field)&gt;&gt;31)`<br> |
| define  | [**ETI\_GetFunctionSize**](_exception_p_p_c_8h.md#define-eti_getfunctionsize) (field) `((field)&0x7fffffff)`<br> |
| define  | [**ETI\_MakeField**](_exception_p_p_c_8h.md#define-eti_makefield) (direct, fsize) `((((long)(direct))&lt;&lt;31)\|((fsize)&0x7fffffff))`<br> |
| define  | [**ET\_ClearLargeBit**](_exception_p_p_c_8h.md#define-et_clearlargebit) (field) `((field) & ~(1&lt;&lt;3))`<br> |
| define  | [**ET\_GetHasFramePtr**](_exception_p_p_c_8h.md#define-et_gethasframeptr) (field) `(((field)&gt;&gt;4)&0x0001)`<br> |
| define  | [**ET\_GetSavedCR**](_exception_p_p_c_8h.md#define-et_getsavedcr) (field) `(((field)&gt;&gt;5)&0x0001)`<br> |
| define  | [**ET\_GetSavedFPRs**](_exception_p_p_c_8h.md#define-et_getsavedfprs) (field) `(((field)&gt;&gt;6)&0x001f)`<br> |
| define  | [**ET\_GetSavedGPRs**](_exception_p_p_c_8h.md#define-et_getsavedgprs) (field) `((field)&gt;&gt;11)`<br> |
| define  | [**ET\_IsLargeTable**](_exception_p_p_c_8h.md#define-et_islargetable) (field) `(((field)&gt;&gt;3)&0x0001)`<br> |
| define  | [**ET\_MakeField**](_exception_p_p_c_8h.md#define-et_makefield) (savedGPRs, savedFPRs, savedCR, hasframeptr, isLarge) `			(((savedGPRs)&lt;&lt;11)\|((savedFPRs&0x001f)&lt;&lt;6)\|((savedCR&0x0001)&lt;&lt;5)\|((hasframeptr&0x0001)&lt;&lt;4)\|((isLarge&1)&lt;&lt;3))`<br> |
| define  | [**ET\_SetLargeBit**](_exception_p_p_c_8h.md#define-et_setlargebit) (field) `((field) \|  (1&lt;&lt;3))`<br> |
| define  | [**EXACTION\_ACTIVECATCHBLOCK**](_exception_p_p_c_8h.md#define-exaction_activecatchblock)  `13`<br> |
| define  | [**EXACTION\_BRANCH**](_exception_p_p_c_8h.md#define-exaction_branch)  `1`<br> |
| define  | [**EXACTION\_CATCHBLOCK**](_exception_p_p_c_8h.md#define-exaction_catchblock)  `12`<br> |
| define  | [**EXACTION\_DELETEPOINTER**](_exception_p_p_c_8h.md#define-exaction_deletepointer)  `10`<br> |
| define  | [**EXACTION\_DELETEPOINTERCOND**](_exception_p_p_c_8h.md#define-exaction_deletepointercond)  `11`<br> |
| define  | [**EXACTION\_DESTROYBASE**](_exception_p_p_c_8h.md#define-exaction_destroybase)  `6`<br> |
| define  | [**EXACTION\_DESTROYLOCAL**](_exception_p_p_c_8h.md#define-exaction_destroylocal)  `2`<br> |
| define  | [**EXACTION\_DESTROYLOCALARRAY**](_exception_p_p_c_8h.md#define-exaction_destroylocalarray)  `5`<br> |
| define  | [**EXACTION\_DESTROYLOCALCOND**](_exception_p_p_c_8h.md#define-exaction_destroylocalcond)  `3`<br> |
| define  | [**EXACTION\_DESTROYLOCALPOINTER**](_exception_p_p_c_8h.md#define-exaction_destroylocalpointer)  `4`<br> |
| define  | [**EXACTION\_DESTROYMEMBER**](_exception_p_p_c_8h.md#define-exaction_destroymember)  `7`<br> |
| define  | [**EXACTION\_DESTROYMEMBERARRAY**](_exception_p_p_c_8h.md#define-exaction_destroymemberarray)  `9`<br> |
| define  | [**EXACTION\_DESTROYMEMBERCOND**](_exception_p_p_c_8h.md#define-exaction_destroymembercond)  `8`<br> |
| define  | [**EXACTION\_ENDBIT**](_exception_p_p_c_8h.md#define-exaction_endbit)  `0x80`<br> |
| define  | [**EXACTION\_ENDOFLIST**](_exception_p_p_c_8h.md#define-exaction_endoflist)  `0`<br> |
| define  | [**EXACTION\_MASK**](_exception_p_p_c_8h.md#define-exaction_mask)  `0x7F`<br> |
| define  | [**EXACTION\_SPECIFICATION**](_exception_p_p_c_8h.md#define-exaction_specification)  `15`<br> |
| define  | [**EXACTION\_TERMINATE**](_exception_p_p_c_8h.md#define-exaction_terminate)  `14`<br> |
| define  | [**ex\_deletepointer\_GetRegPointer**](_exception_p_p_c_8h.md#define-ex_deletepointer_getregpointer) (field) `((field)&gt;&gt;7)`<br> |
| define  | [**ex\_deletepointer\_MakeField**](_exception_p_p_c_8h.md#define-ex_deletepointer_makefield) (regpointer) `(((regpointer)&lt;&lt;7))`<br> |
| define  | [**ex\_deletepointercond\_GetRegCond**](_exception_p_p_c_8h.md#define-ex_deletepointercond_getregcond) (field) `((field)&gt;&gt;7)`<br> |
| define  | [**ex\_deletepointercond\_GetRegPointer**](_exception_p_p_c_8h.md#define-ex_deletepointercond_getregpointer) (field) `(((field)&gt;&gt;6)&0x0001)`<br> |
| define  | [**ex\_deletepointercond\_MakeField**](_exception_p_p_c_8h.md#define-ex_deletepointercond_makefield) (regcond, regpointer) `			(((regcond)&lt;&lt;7)\|(((regpointer)&0x0001)&lt;&lt;6))`<br> |
| define  | [**ex\_destroylocalcond\_GetRegCond**](_exception_p_p_c_8h.md#define-ex_destroylocalcond_getregcond) (field) `((field)&gt;&gt;7)`<br> |
| define  | [**ex\_destroylocalcond\_MakeField**](_exception_p_p_c_8h.md#define-ex_destroylocalcond_makefield) (regcond) `(((regcond)&lt;&lt;7))`<br> |
| define  | [**ex\_destroylocalpointer\_GetRegPointer**](_exception_p_p_c_8h.md#define-ex_destroylocalpointer_getregpointer) (field) `((field)&gt;&gt;7)`<br> |
| define  | [**ex\_destroylocalpointer\_MakeField**](_exception_p_p_c_8h.md#define-ex_destroylocalpointer_makefield) (regpointer) `(((regpointer)&lt;&lt;7))`<br> |
| define  | [**ex\_destroymember\_GetRegPointer**](_exception_p_p_c_8h.md#define-ex_destroymember_getregpointer) (field) `((field)&gt;&gt;7)`<br> |
| define  | [**ex\_destroymember\_MakeField**](_exception_p_p_c_8h.md#define-ex_destroymember_makefield) (regpointer) `(((regpointer)&lt;&lt;7))`<br> |
| define  | [**ex\_destroymemberarray\_GetRegPointer**](_exception_p_p_c_8h.md#define-ex_destroymemberarray_getregpointer) (field) `((field)&gt;&gt;7)`<br> |
| define  | [**ex\_destroymemberarray\_MakeField**](_exception_p_p_c_8h.md#define-ex_destroymemberarray_makefield) (regpointer) `(((regpointer)&lt;&lt;7))`<br> |
| define  | [**ex\_destroymembercond\_GetRegCond**](_exception_p_p_c_8h.md#define-ex_destroymembercond_getregcond) (field) `((field)&gt;&gt;7)`<br> |
| define  | [**ex\_destroymembercond\_GetRegPointer**](_exception_p_p_c_8h.md#define-ex_destroymembercond_getregpointer) (field) `(((field)&gt;&gt;6)&0x0001)`<br> |
| define  | [**ex\_destroymembercond\_MakeField**](_exception_p_p_c_8h.md#define-ex_destroymembercond_makefield) (regcond, regpointer) `			(((regcond)&lt;&lt;7)\|(((regpointer)&0x0001)&lt;&lt;6))`<br> |

## Public Types Documentation




### typedef ExceptionRangeLarge 

```C++
typedef struct ExceptionRangeLarge ExceptionRangeLarge;
```




<hr>



### typedef ExceptionRangeSmall 

```C++
typedef struct ExceptionRangeSmall ExceptionRangeSmall;
```




<hr>



### typedef ExceptionTableIndex 

```C++
typedef struct ExceptionTableIndex ExceptionTableIndex;
```




<hr>



### typedef ExceptionTableLarge 

```C++
typedef struct ExceptionTableLarge ExceptionTableLarge;
```




<hr>



### typedef ExceptionTableSmall 

```C++
typedef struct ExceptionTableSmall ExceptionTableSmall;
```




<hr>



### typedef ExceptionTableSmallVector 

```C++
typedef struct ExceptionTableSmallVector ExceptionTableSmallVector;
```




<hr>



### typedef ex\_activecatchblock 

```C++
typedef struct ex_activecatchblock ex_activecatchblock;
```




<hr>



### typedef ex\_branch 

```C++
typedef struct ex_branch ex_branch;
```




<hr>



### typedef ex\_catchblock 

```C++
typedef struct ex_catchblock ex_catchblock;
```




<hr>



### typedef ex\_deletepointer 

```C++
typedef struct ex_deletepointer ex_deletepointer;
```




<hr>



### typedef ex\_deletepointercond 

```C++
typedef struct ex_deletepointercond ex_deletepointercond;
```




<hr>



### typedef ex\_destroylocal 

```C++
typedef struct ex_destroylocal ex_destroylocal;
```




<hr>



### typedef ex\_destroylocalarray 

```C++
typedef struct ex_destroylocalarray ex_destroylocalarray;
```




<hr>



### typedef ex\_destroylocalcond 

```C++
typedef struct ex_destroylocalcond ex_destroylocalcond;
```




<hr>



### typedef ex\_destroylocalpointer 

```C++
typedef struct ex_destroylocalpointer ex_destroylocalpointer;
```




<hr>



### typedef ex\_destroymember 

```C++
typedef struct ex_destroymember ex_destroymember;
```




<hr>



### typedef ex\_destroymemberarray 

```C++
typedef struct ex_destroymemberarray ex_destroymemberarray;
```




<hr>



### typedef ex\_destroymembercond 

```C++
typedef struct ex_destroymembercond ex_destroymembercond;
```




<hr>



### typedef ex\_specification 

```C++
typedef struct ex_specification ex_specification;
```




<hr>



### typedef ex\_terminate 

```C++
typedef struct ex_terminate ex_terminate;
```




<hr>



### typedef exaction\_type 

```C++
typedef unsigned char exaction_type;
```




<hr>
## Macro Definition Documentation





### define ETI\_GetDirectStore 

```C++
#define ETI_GetDirectStore (
    field
) `((field)>>31)`
```




<hr>



### define ETI\_GetFunctionSize 

```C++
#define ETI_GetFunctionSize (
    field
) `((field)&0x7fffffff)`
```




<hr>



### define ETI\_MakeField 

```C++
#define ETI_MakeField (
    direct,
    fsize
) `((((long)(direct))<<31)|((fsize)&0x7fffffff))`
```




<hr>



### define ET\_ClearLargeBit 

```C++
#define ET_ClearLargeBit (
    field
) `((field) & ~(1<<3))`
```




<hr>



### define ET\_GetHasFramePtr 

```C++
#define ET_GetHasFramePtr (
    field
) `(((field)>>4)&0x0001)`
```




<hr>



### define ET\_GetSavedCR 

```C++
#define ET_GetSavedCR (
    field
) `(((field)>>5)&0x0001)`
```




<hr>



### define ET\_GetSavedFPRs 

```C++
#define ET_GetSavedFPRs (
    field
) `(((field)>>6)&0x001f)`
```




<hr>



### define ET\_GetSavedGPRs 

```C++
#define ET_GetSavedGPRs (
    field
) `((field)>>11)`
```




<hr>



### define ET\_IsLargeTable 

```C++
#define ET_IsLargeTable (
    field
) `(((field)>>3)&0x0001)`
```




<hr>



### define ET\_MakeField 

```C++
#define ET_MakeField (
    savedGPRs,
    savedFPRs,
    savedCR,
    hasframeptr,
    isLarge
) `(((savedGPRs)<<11)|((savedFPRs&0x001f)<<6)|((savedCR&0x0001)<<5)|((hasframeptr&0x0001)<<4)|((isLarge&1)<<3))`
```




<hr>



### define ET\_SetLargeBit 

```C++
#define ET_SetLargeBit (
    field
) `((field) |  (1<<3))`
```




<hr>



### define EXACTION\_ACTIVECATCHBLOCK 

```C++
#define EXACTION_ACTIVECATCHBLOCK `13`
```




<hr>



### define EXACTION\_BRANCH 

```C++
#define EXACTION_BRANCH `1`
```




<hr>



### define EXACTION\_CATCHBLOCK 

```C++
#define EXACTION_CATCHBLOCK `12`
```




<hr>



### define EXACTION\_DELETEPOINTER 

```C++
#define EXACTION_DELETEPOINTER `10`
```




<hr>



### define EXACTION\_DELETEPOINTERCOND 

```C++
#define EXACTION_DELETEPOINTERCOND `11`
```




<hr>



### define EXACTION\_DESTROYBASE 

```C++
#define EXACTION_DESTROYBASE `6`
```




<hr>



### define EXACTION\_DESTROYLOCAL 

```C++
#define EXACTION_DESTROYLOCAL `2`
```




<hr>



### define EXACTION\_DESTROYLOCALARRAY 

```C++
#define EXACTION_DESTROYLOCALARRAY `5`
```




<hr>



### define EXACTION\_DESTROYLOCALCOND 

```C++
#define EXACTION_DESTROYLOCALCOND `3`
```




<hr>



### define EXACTION\_DESTROYLOCALPOINTER 

```C++
#define EXACTION_DESTROYLOCALPOINTER `4`
```




<hr>



### define EXACTION\_DESTROYMEMBER 

```C++
#define EXACTION_DESTROYMEMBER `7`
```




<hr>



### define EXACTION\_DESTROYMEMBERARRAY 

```C++
#define EXACTION_DESTROYMEMBERARRAY `9`
```




<hr>



### define EXACTION\_DESTROYMEMBERCOND 

```C++
#define EXACTION_DESTROYMEMBERCOND `8`
```




<hr>



### define EXACTION\_ENDBIT 

```C++
#define EXACTION_ENDBIT `0x80`
```




<hr>



### define EXACTION\_ENDOFLIST 

```C++
#define EXACTION_ENDOFLIST `0`
```




<hr>



### define EXACTION\_MASK 

```C++
#define EXACTION_MASK `0x7F`
```




<hr>



### define EXACTION\_SPECIFICATION 

```C++
#define EXACTION_SPECIFICATION `15`
```




<hr>



### define EXACTION\_TERMINATE 

```C++
#define EXACTION_TERMINATE `14`
```




<hr>



### define ex\_deletepointer\_GetRegPointer 

```C++
#define ex_deletepointer_GetRegPointer (
    field
) `((field)>>7)`
```




<hr>



### define ex\_deletepointer\_MakeField 

```C++
#define ex_deletepointer_MakeField (
    regpointer
) `(((regpointer)<<7))`
```




<hr>



### define ex\_deletepointercond\_GetRegCond 

```C++
#define ex_deletepointercond_GetRegCond (
    field
) `((field)>>7)`
```




<hr>



### define ex\_deletepointercond\_GetRegPointer 

```C++
#define ex_deletepointercond_GetRegPointer (
    field
) `(((field)>>6)&0x0001)`
```




<hr>



### define ex\_deletepointercond\_MakeField 

```C++
#define ex_deletepointercond_MakeField (
    regcond,
    regpointer
) `(((regcond)<<7)|(((regpointer)&0x0001)<<6))`
```




<hr>



### define ex\_destroylocalcond\_GetRegCond 

```C++
#define ex_destroylocalcond_GetRegCond (
    field
) `((field)>>7)`
```




<hr>



### define ex\_destroylocalcond\_MakeField 

```C++
#define ex_destroylocalcond_MakeField (
    regcond
) `(((regcond)<<7))`
```




<hr>



### define ex\_destroylocalpointer\_GetRegPointer 

```C++
#define ex_destroylocalpointer_GetRegPointer (
    field
) `((field)>>7)`
```




<hr>



### define ex\_destroylocalpointer\_MakeField 

```C++
#define ex_destroylocalpointer_MakeField (
    regpointer
) `(((regpointer)<<7))`
```




<hr>



### define ex\_destroymember\_GetRegPointer 

```C++
#define ex_destroymember_GetRegPointer (
    field
) `((field)>>7)`
```




<hr>



### define ex\_destroymember\_MakeField 

```C++
#define ex_destroymember_MakeField (
    regpointer
) `(((regpointer)<<7))`
```




<hr>



### define ex\_destroymemberarray\_GetRegPointer 

```C++
#define ex_destroymemberarray_GetRegPointer (
    field
) `((field)>>7)`
```




<hr>



### define ex\_destroymemberarray\_MakeField 

```C++
#define ex_destroymemberarray_MakeField (
    regpointer
) `(((regpointer)<<7))`
```




<hr>



### define ex\_destroymembercond\_GetRegCond 

```C++
#define ex_destroymembercond_GetRegCond (
    field
) `((field)>>7)`
```




<hr>



### define ex\_destroymembercond\_GetRegPointer 

```C++
#define ex_destroymembercond_GetRegPointer (
    field
) `(((field)>>6)&0x0001)`
```




<hr>



### define ex\_destroymembercond\_MakeField 

```C++
#define ex_destroymembercond_MakeField (
    regcond,
    regpointer
) `(((regcond)<<7)|(((regpointer)&0x0001)<<6))`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Runtime/Inc/ExceptionPPC.h`

