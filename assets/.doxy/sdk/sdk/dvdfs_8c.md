

# File dvdfs.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**dvd**](dir_6809de60dbef2d995cf7d874d1fa5b65.md) **>** [**dvdfs.c**](dvdfs_8c.md)

[Go to the source code of this file](dvdfs_8c_source.md)



* `#include <dolphin.h>`
* `#include <dolphin/dvd.h>`
* `#include <ctype.h>`
* `#include <stddef.h>`
* `#include "dvd_private.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**FSTEntry**](struct_f_s_t_entry.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**FSTEntry**](struct_f_s_t_entry.md) | [**FSTEntry**](#typedef-fstentry)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_DVDLongFileNameFlag**](#variable-__dvdlongfilenameflag)  <br> |
|  [**OSThreadQueue**](struct_o_s_thread_queue.md) | [**\_\_DVDThreadQueue**](#variable-__dvdthreadqueue)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**OSBootInfo**](_o_s_boot_info_8h.md#typedef-osbootinfo) \* | [**BootInfo**](#variable-bootinfo)  <br> |
|  [**FSTEntry**](struct_f_s_t_entry.md) \* | [**FstStart**](#variable-fststart)  <br> |
|  [**u8**](types_8h.md#typedef-u8) \* | [**FstStringStart**](#variable-fststringstart)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**MaxEntryNum**](#variable-maxentrynum)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**currentDirectory**](#variable-currentdirectory)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDChangeDir**](#function-dvdchangedir) ([**u8**](types_8h.md#typedef-u8) \* dirName) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDClose**](#function-dvdclose) ([**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDCloseDir**](#function-dvdclosedir) ([**DVDDir**](struct_d_v_d_dir.md) \* dir) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDConvertPathToEntrynum**](#function-dvdconvertpathtoentrynum) ([**u8**](types_8h.md#typedef-u8) \* pathPtr) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDFastOpen**](#function-dvdfastopen) ([**s32**](types_8h.md#typedef-s32) entrynum, [**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDGetCurrentDir**](#function-dvdgetcurrentdir) ([**u8**](types_8h.md#typedef-u8) \* path, [**u32**](types_8h.md#typedef-u32) maxlen) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**DVDGetFSTLocation**](#function-dvdgetfstlocation) () <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDGetFileInfoStatus**](#function-dvdgetfileinfostatus) ([**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDGetTransferredSize**](#function-dvdgettransferredsize) ([**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileinfo) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDOpen**](#function-dvdopen) ([**u8**](types_8h.md#typedef-u8) \* fileName, [**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDOpenDir**](#function-dvdopendir) ([**u8**](types_8h.md#typedef-u8) \* dirName, [**DVDDir**](struct_d_v_d_dir.md) \* dir) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDPrepareStream**](#function-dvdpreparestream) ([**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo, [**u32**](types_8h.md#typedef-u32) length, [**u32**](types_8h.md#typedef-u32) offset) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDPrepareStreamAsync**](#function-dvdpreparestreamasync) ([**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo, [**u32**](types_8h.md#typedef-u32) length, [**u32**](types_8h.md#typedef-u32) offset, [**DVDCallback**](dvd_8h.md#typedef-dvdcallback) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDReadAsyncPrio**](#function-dvdreadasyncprio) ([**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**s32**](types_8h.md#typedef-s32) length, [**s32**](types_8h.md#typedef-s32) offset, [**DVDCallback**](dvd_8h.md#typedef-dvdcallback) callback, [**s32**](types_8h.md#typedef-s32) prio) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDReadDir**](#function-dvdreaddir) ([**DVDDir**](struct_d_v_d_dir.md) \* dir, [**DVDDirEntry**](struct_d_v_d_dir_entry.md) \* dirent) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDReadPrio**](#function-dvdreadprio) ([**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**s32**](types_8h.md#typedef-s32) length, [**s32**](types_8h.md#typedef-s32) offset, [**s32**](types_8h.md#typedef-s32) prio) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDSeekAsyncPrio**](#function-dvdseekasyncprio) ([**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo, [**s32**](types_8h.md#typedef-s32) offset, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**DVDFileInfo**](struct_d_v_d_file_info.md) \*) callback, [**s32**](types_8h.md#typedef-s32) prio) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDSeekPrio**](#function-dvdseekprio) ([**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo, [**s32**](types_8h.md#typedef-s32) offset, [**s32**](types_8h.md#typedef-s32) prio) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DVDFSInit**](#function-__dvdfsinit) () <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDConvertEntrynumToPath**](#function-dvdconvertentrynumtopath) ([**s32**](types_8h.md#typedef-s32) entrynum, [**u8**](types_8h.md#typedef-u8) \* path, [**u32**](types_8h.md#typedef-u32) maxlen) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForPrepareStreamAsync**](#function-cbforpreparestreamasync) ([**s32**](types_8h.md#typedef-s32) result, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForPrepareStreamSync**](#function-cbforpreparestreamsync) ([**s32**](types_8h.md#typedef-s32) result, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForReadAsync**](#function-cbforreadasync) ([**s32**](types_8h.md#typedef-s32) result, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForReadSync**](#function-cbforreadsync) ([**s32**](types_8h.md#typedef-s32) result, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForSeekAsync**](#function-cbforseekasync) ([**s32**](types_8h.md#typedef-s32) result, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForSeekSync**](#function-cbforseeksync) ([**s32**](types_8h.md#typedef-s32) result, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**entryToPath**](#function-entrytopath) ([**u32**](types_8h.md#typedef-u32) entry, [**u8**](types_8h.md#typedef-u8) \* path, [**u32**](types_8h.md#typedef-u32) maxlen) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**isSame**](#function-issame) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u8**](types_8h.md#typedef-u8) \* path, [**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u8**](types_8h.md#typedef-u8) \* string) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**myStrncpy**](#function-mystrncpy) ([**u8**](types_8h.md#typedef-u8) \* dest, [**u8**](types_8h.md#typedef-u8) \* src, [**u32**](types_8h.md#typedef-u32) maxlen) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**Is32KBAligned**](dvdfs_8c.md#define-is32kbaligned) (x) `((([**u32**](types_8h.md#typedef-u32))(x) & (32 \* 1024 - 1)) == 0)`<br> |
| define  | [**RoundUp32KB**](dvdfs_8c.md#define-roundup32kb) (x) `((([**u32**](types_8h.md#typedef-u32))(x) + 32 \* 1024 - 1) & ~(32 \* 1024 - 1))`<br> |
| define  | [**entryIsDir**](dvdfs_8c.md#define-entryisdir) (i) `((([**FstStart**](dvdfs_8c.md#variable-fststart)[[**i**](_c_a_r_d_private_8h.md#define-card_max_mount_step)].isDirAndStringOff & 0xff000000) == 0) ? [**FALSE**](types_8h.md#define-false) : [**TRUE**](types_8h.md#define-true))`<br> |
| define  | [**fileLength**](dvdfs_8c.md#define-filelength) (i) `([**FstStart**](dvdfs_8c.md#variable-fststart)[[**i**](_c_a_r_d_private_8h.md#define-card_max_mount_step)].nextEntryOrLength)`<br> |
| define  | [**filePosition**](dvdfs_8c.md#define-fileposition) (i) `([**FstStart**](dvdfs_8c.md#variable-fststart)[[**i**](_c_a_r_d_private_8h.md#define-card_max_mount_step)].parentOrPosition)`<br> |
| define  | [**nextDir**](dvdfs_8c.md#define-nextdir) (i) `([**FstStart**](dvdfs_8c.md#variable-fststart)[[**i**](_c_a_r_d_private_8h.md#define-card_max_mount_step)].nextEntryOrLength)`<br> |
| define  | [**parentDir**](dvdfs_8c.md#define-parentdir) (i) `([**FstStart**](dvdfs_8c.md#variable-fststart)[[**i**](_c_a_r_d_private_8h.md#define-card_max_mount_step)].parentOrPosition)`<br> |
| define  | [**stringOff**](dvdfs_8c.md#define-stringoff) (i) `([**FstStart**](dvdfs_8c.md#variable-fststart)[[**i**](_c_a_r_d_private_8h.md#define-card_max_mount_step)].isDirAndStringOff & ~0xff000000)`<br> |

## Public Types Documentation




### typedef FSTEntry 

```C++
typedef struct FSTEntry FSTEntry;
```




<hr>
## Public Attributes Documentation




### variable \_\_DVDLongFileNameFlag 

```C++
u32 __DVDLongFileNameFlag;
```




<hr>



### variable \_\_DVDThreadQueue 

```C++
OSThreadQueue __DVDThreadQueue;
```




<hr>
## Public Static Attributes Documentation




### variable BootInfo 

```C++
OSBootInfo* BootInfo;
```




<hr>



### variable FstStart 

```C++
FSTEntry* FstStart;
```




<hr>



### variable FstStringStart 

```C++
u8* FstStringStart;
```




<hr>



### variable MaxEntryNum 

```C++
u32 MaxEntryNum;
```




<hr>



### variable currentDirectory 

```C++
u32 currentDirectory;
```




<hr>
## Public Functions Documentation




### function DVDChangeDir 

```C++
BOOL DVDChangeDir (
    u8 * dirName
) 
```




<hr>



### function DVDClose 

```C++
BOOL DVDClose (
    DVDFileInfo * fileInfo
) 
```




<hr>



### function DVDCloseDir 

```C++
BOOL DVDCloseDir (
    DVDDir * dir
) 
```




<hr>



### function DVDConvertPathToEntrynum 

```C++
s32 DVDConvertPathToEntrynum (
    u8 * pathPtr
) 
```




<hr>



### function DVDFastOpen 

```C++
BOOL DVDFastOpen (
    s32 entrynum,
    DVDFileInfo * fileInfo
) 
```




<hr>



### function DVDGetCurrentDir 

```C++
BOOL DVDGetCurrentDir (
    u8 * path,
    u32 maxlen
) 
```




<hr>



### function DVDGetFSTLocation 

```C++
void * DVDGetFSTLocation () 
```




<hr>



### function DVDGetFileInfoStatus 

```C++
s32 DVDGetFileInfoStatus (
    DVDFileInfo * fileInfo
) 
```




<hr>



### function DVDGetTransferredSize 

```C++
s32 DVDGetTransferredSize (
    DVDFileInfo * fileinfo
) 
```




<hr>



### function DVDOpen 

```C++
BOOL DVDOpen (
    u8 * fileName,
    DVDFileInfo * fileInfo
) 
```




<hr>



### function DVDOpenDir 

```C++
int DVDOpenDir (
    u8 * dirName,
    DVDDir * dir
) 
```




<hr>



### function DVDPrepareStream 

```C++
s32 DVDPrepareStream (
    DVDFileInfo * fileInfo,
    u32 length,
    u32 offset
) 
```




<hr>



### function DVDPrepareStreamAsync 

```C++
BOOL DVDPrepareStreamAsync (
    DVDFileInfo * fileInfo,
    u32 length,
    u32 offset,
    DVDCallback callback
) 
```




<hr>



### function DVDReadAsyncPrio 

```C++
BOOL DVDReadAsyncPrio (
    DVDFileInfo * fileInfo,
    void * addr,
    s32 length,
    s32 offset,
    DVDCallback callback,
    s32 prio
) 
```




<hr>



### function DVDReadDir 

```C++
BOOL DVDReadDir (
    DVDDir * dir,
    DVDDirEntry * dirent
) 
```




<hr>



### function DVDReadPrio 

```C++
s32 DVDReadPrio (
    DVDFileInfo * fileInfo,
    void * addr,
    s32 length,
    s32 offset,
    s32 prio
) 
```




<hr>



### function DVDSeekAsyncPrio 

```C++
BOOL DVDSeekAsyncPrio (
    DVDFileInfo * fileInfo,
    s32 offset,
    void (*)( s32 , DVDFileInfo *) callback,
    s32 prio
) 
```




<hr>



### function DVDSeekPrio 

```C++
s32 DVDSeekPrio (
    DVDFileInfo * fileInfo,
    s32 offset,
    s32 prio
) 
```




<hr>



### function \_\_DVDFSInit 

```C++
void __DVDFSInit () 
```




<hr>
## Public Static Functions Documentation




### function DVDConvertEntrynumToPath 

```C++
static BOOL DVDConvertEntrynumToPath (
    s32 entrynum,
    u8 * path,
    u32 maxlen
) 
```




<hr>



### function cbForPrepareStreamAsync 

```C++
static void cbForPrepareStreamAsync (
    s32 result,
    DVDCommandBlock * block
) 
```




<hr>



### function cbForPrepareStreamSync 

```C++
static void cbForPrepareStreamSync (
    s32 result,
    DVDCommandBlock * block
) 
```




<hr>



### function cbForReadAsync 

```C++
static void cbForReadAsync (
    s32 result,
    DVDCommandBlock * block
) 
```




<hr>



### function cbForReadSync 

```C++
static void cbForReadSync (
    s32 result,
    DVDCommandBlock * block
) 
```




<hr>



### function cbForSeekAsync 

```C++
static void cbForSeekAsync (
    s32 result,
    DVDCommandBlock * block
) 
```




<hr>



### function cbForSeekSync 

```C++
static void cbForSeekSync (
    s32 result,
    DVDCommandBlock * block
) 
```




<hr>



### function entryToPath 

```C++
static u32 entryToPath (
    u32 entry,
    u8 * path,
    u32 maxlen
) 
```




<hr>



### function isSame 

```C++
static BOOL isSame (
    const  u8 * path,
    const  u8 * string
) 
```




<hr>



### function myStrncpy 

```C++
static u32 myStrncpy (
    u8 * dest,
    u8 * src,
    u32 maxlen
) 
```




<hr>
## Macro Definition Documentation





### define Is32KBAligned 

```C++
#define Is32KBAligned (
    x
) `((( u32 )(x) & (32 * 1024 - 1)) == 0)`
```




<hr>



### define RoundUp32KB 

```C++
#define RoundUp32KB (
    x
) `((( u32 )(x) + 32 * 1024 - 1) & ~(32 * 1024 - 1))`
```




<hr>



### define entryIsDir 

```C++
#define entryIsDir (
    i
) `((( FstStart [ i ].isDirAndStringOff & 0xff000000) == 0) ? FALSE : TRUE )`
```




<hr>



### define fileLength 

```C++
#define fileLength (
    i
) `( FstStart [ i ].nextEntryOrLength)`
```




<hr>



### define filePosition 

```C++
#define filePosition (
    i
) `( FstStart [ i ].parentOrPosition)`
```




<hr>



### define nextDir 

```C++
#define nextDir (
    i
) `( FstStart [ i ].nextEntryOrLength)`
```




<hr>



### define parentDir 

```C++
#define parentDir (
    i
) `( FstStart [ i ].parentOrPosition)`
```




<hr>



### define stringOff 

```C++
#define stringOff (
    i
) `( FstStart [ i ].isDirAndStringOff & ~0xff000000)`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/dvd/dvdfs.c`

