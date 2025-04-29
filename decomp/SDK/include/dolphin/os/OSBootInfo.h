
#include <dolphin/dvd.h>
#include <types.h>

#ifndef _DOLPHIN_OS_BOOTINFO_H_
#define _DOLPHIN_OS_BOOTINFO_H_

#define OS_BOOTINFO_MAGIC      0x0D15EA5E
#define OS_BOOTINFO_MAGIC_JTAG 0xE5207C22
typedef struct OSBootInfo_s
{
    // total size: 0x40
    DVDDiskID DVDDiskID;    // offset 0x0, size 0x20
    u32       magic;        // offset 0x20, size 0x4
    u32       version;      // offset 0x24, size 0x4
    u32       memorySize;   // offset 0x28, size 0x4
    u32       consoleType;  // offset 0x2C, size 0x4
    void*     arenaLo;      // offset 0x30, size 0x4
    void*     arenaHi;      // offset 0x34, size 0x4
    void*     FSTLocation;  // offset 0x38, size 0x4
    u32       FSTMaxLength; // offset 0x3C, size 0x4
} OSBootInfo;
#endif
