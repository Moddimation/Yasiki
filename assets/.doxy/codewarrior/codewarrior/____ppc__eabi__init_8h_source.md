

# File \_\_ppc\_eabi\_init.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Runtime**](dir_e69745e3285a8d4f155d29d88e1a7b6b.md) **>** [**Inc**](dir_192ee455ef94b5a11e62d491224058e4.md) **>** [**\_\_ppc\_eabi\_init.h**](____ppc__eabi__init_8h.md)

[Go to the documentation of this file](____ppc__eabi__init_8h.md)


```C++
/***************************************************************************/
/*

FILE
    __ppc_eabi_init.h

DESCRIPTION

    Interface for board-level initialization and user-level initialization.
    
    __start
        (registers initialized)
        __init_hardware called
        (data initialized, .data/.bss/.sdata/.sbss...)
        __init_cpp
        (exceptions initialized and static constructors called)
        __init_user
        main
    
    Define __init_hardware and __init_user or use the default stub functions.
    
    Note: __init_hardware should be written so as to not reference memory
    i.e., it should not be written in C or allocate a stackframe.
        
COPYRIGHT   
    (c) 1997 Metrowerks Corporation
    All rights reserved.

HISTORY
    97 APR 17 LLY   Created.
    97 JUN 21 MEA   added __init_cpp() and __init().
    97 JUL 20 MEA   added _ExitProcess.
    97 JUL 20 MEA   added ADSInit.

*/
/***************************************************************************/

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

__declspec(section ".init") extern void __init_hardware(void);
extern void __init_user(void);
extern void _ExitProcess(void);                                                 
__declspec(section ".init") extern void __flush_cache(void *address, unsigned int size);
__declspec(section ".init") extern void ADSInit();
extern void __copy_vectors(void);

#ifdef __cplusplus
}
#endif
```


