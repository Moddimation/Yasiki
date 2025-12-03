

# File JKRSolidHeap.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**JSystem**](dir_2add8750dabb2c81b6f2c3c5af4cfeba.md) **>** [**System**](dir_e5be38218225624e70ebb9ea7ff5d81f.md) **>** [**JKernel**](dir_cddf90ee7c92ffd4474a8c27c5ea5882.md) **>** [**include**](dir_f5aca01ef7e59deeb7bfd439213c8ac0.md) **>** [**JKRSolidHeap.h**](_j_k_r_solid_heap_8h.md)

[Go to the documentation of this file](_j_k_r_solid_heap_8h.md)


```C++
#ifndef __JKR_SOLIDHEAP_H__
#define __JKR_SOLIDHEAP_H__

#include <JKRHeap.h>

class JKRSolidHeap : public JKRHeap
{
public:
    static JKRSolidHeap* create (size_t size, JKRHeap* parent, BOOL isError);
    void                 destroy (void);

public:
    override void* alloc (size_t size, int align);
    void*          allocFromHead (size_t size, int align);
    void*          allocFromTail (size_t size, int align);

    override void free (void* ptr);
    override void freeAll (void);
    override void freeTail (void);

    override size_t resize (void* obj, size_t size);
    s32             adjustSize (void);
    override size_t getSize (void* obj);

    override size_t
    getFreeSize (void)
    {
        return mFreeSize; // TODO: match this, it is the only function not being bundled in the
                          // tu block, making vtable mismatch
    }

    override size_t getTotalFreeSize (void);

    override u32  getHeapType (void);
    override BOOL check (void);
    override BOOL dump (void);

protected:
    struct Iter
    {
        unk32 _0;
        unk32 _4;
        unk32 _8;
        void* mTail;
        Iter* mHead;
    };
    typedef struct Iter Iter;

    size_t mFreeSize;
    void*  mHead;
    void*  mTail;
    Iter*  mIter;

protected:
    constructor JKRSolidHeap (void* obj, size_t size, JKRHeap* parent, bool is_error);
    destructor ~JKRSolidHeap();
};

SASSERT_SIZE (JKRSolidHeap, 0x78);

#endif
```


