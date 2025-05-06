

# File ar.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**ar.h**](ar_8h.md)

[Go to the documentation of this file](ar_8h.md)


```C++
#ifndef _DOLPHIN_AR_H_
#define _DOLPHIN_AR_H_

#include <types.h>

typedef void (*ARQCallback) (u32 pointerToARQRequest);

struct ARQRequest
{
    struct ARQRequest* next;     
    u32                owner;    
    u32                type;     
    u32                priority; 
    u32                source;   
    u32                dest;     
    u32                length;   
    ARQCallback        callback; 
};

#define ARQ_DMA_ALIGNMENT                32

#define ARAM_DIR_MRAM_TO_ARAM            0x00
#define ARAM_DIR_ARAM_TO_MRAM            0x01

#define ARStartDMARead(mmem, aram, len)  ARStartDMA (ARAM_DIR_ARAM_TO_MRAM, mmem, aram, len)
#define ARStartDMAWrite(mmem, aram, len) ARStartDMA (ARAM_DIR_MRAM_TO_ARAM, mmem, aram, len)

typedef struct ARQRequest ARQRequest;

#define ARQ_TYPE_MRAM_TO_ARAM ARAM_DIR_MRAM_TO_ARAM
#define ARQ_TYPE_ARAM_TO_MRAM ARAM_DIR_ARAM_TO_MRAM

#define ARQ_PRIORITY_LOW      0
#define ARQ_PRIORITY_HIGH     1

// ar.c
ARQCallback ARRegisterDMACallback (ARQCallback callback);
u32         ARGetDMAStatus (void);
void        ARStartDMA (u32 type, u32 mainmem_addr, u32 aram_addr, u32 length);
u32         ARAlloc (u32 length);
u32         ARFree (u32* length);
int         ARCheckInit (void);
u32         ARInit (u32* stack_index_addr, u32 num_entries);
void        ARReset (void);
void        ARSetSize (void);
u32         ARGetBaseAddress (void);
u32         ARGetSize (void);

// arq.c
void ARQInit (void);
void ARQReset (void);
void ARQPostRequest (struct ARQRequest* request,
                     u32                owner,
                     u32                type,
                     u32                priority,
                     u32                source,
                     u32                dest,
                     u32                length,
                     ARQCallback        callback);
void ARQRemoveRequest (struct ARQRequest* request);
void ARQRemoveOwnerRequest (u32 owner);
void ARQFlushQueue (void);
void ARQSetChunkSize (u32 size);
u32  ARQGetChunkSize (void);

#endif
```


