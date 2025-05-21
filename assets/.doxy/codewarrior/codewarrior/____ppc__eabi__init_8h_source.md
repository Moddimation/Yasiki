

# File \_\_ppc\_eabi\_init.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Runtime**](dir_ab14c6633277f31934f3117250613416.md) **>** [**Inc**](dir_897f0b8955620369fec815c20eca3684.md) **>** [**\_\_ppc\_eabi\_init.h**](____ppc__eabi__init_8h.md)

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


