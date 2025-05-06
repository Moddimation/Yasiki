

# File OSBootInfo.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**os**](dir_ec7c732b679442ba7b10ef1b15f4b60e.md) **>** [**OSBootInfo.h**](_o_s_boot_info_8h.md)

[Go to the documentation of this file](_o_s_boot_info_8h.md)


```C++
#ifdef __cplusplus
extern "C"
{
#endif

#include <types.h>

#include <dolphin/dvd.h>

#ifndef _DOLPHIN_OS_BOOTINFO_H_
#define _DOLPHIN_OS_BOOTINFO_H_

#define OS_BOOTINFO_MAGIC      0x0D15EA5E
#define OS_BOOTINFO_MAGIC_JTAG 0xE5207C22

typedef struct OSBootInfo_s
{
    // total size: 0x40
    DVDDiskID DVDDiskID;     // offset 0x0, size 0x20
    u32       magic;         // offset 0x20, size 0x4
    u32       version;       // offset 0x24, size 0x4
    u32       memorySize;    // offset 0x28, size 0x4
    u32       consoleType;   // offset 0x2C, size 0x4
    void*     arenaLo;       // offset 0x30, size 0x4
    void*     arenaHi;       // offset 0x34, size 0x4
    void*     FSTLocation;   // offset 0x38, size 0x4
    u32       FSTMaxLength;  // offset 0x3C, size 0x4
} OSBootInfo;
#endif
typedef struct BI2Debug
{
    int debugMonSize;        
    int simMemSize;          
    u32 argOffset;           
    u32 debugFlag;           
    int trackLocation;       
    int trackSize;           
    u32 countryCode;         
    u8  _1C[0x4];            
    u32 dvdLongFileNameFlag; 
    u32 padSpec;             
} BI2Debug;

// Magic number defines.
#define OS_BOOTINFO_MAGIC      0x0D15EA5E
#define OS_BOOTINFO_MAGIC_JTAG 0xE5207C22
#define OS_DVD_MAGIC_NINTENDO  0xC2339F3D
#define OS_THREAD_STACK_MAGIC  0xDEADBABE

#define OS_BOOTROM_ADDR        0x81300000

#ifdef __cplusplus
}
#endif
```


