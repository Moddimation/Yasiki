

# File JKRExpHeap.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**JSystem**](dir_2add8750dabb2c81b6f2c3c5af4cfeba.md) **>** [**System**](dir_e5be38218225624e70ebb9ea7ff5d81f.md) **>** [**JKernel**](dir_cddf90ee7c92ffd4474a8c27c5ea5882.md) **>** [**include**](dir_f5aca01ef7e59deeb7bfd439213c8ac0.md) **>** [**JKRExpHeap.h**](_j_k_r_exp_heap_8h.md)

[Go to the documentation of this file](_j_k_r_exp_heap_8h.md)


```C++
#ifndef __JKR_EXPHEAP_H__
#define __JKR_EXPHEAP_H__

#include <JKRHeap.h>

class JKRExpHeap : public JKRHeap
{
public:
    static JKRExpHeap* createRoot (int maxHeaps, bool errorFlag);
    static JKRExpHeap* create (size_t size, JKRHeap* parent, bool errorFlag);
    static JKRExpHeap* create (void* obj, size_t size, JKRHeap* parent, bool errorFlag);
    void               destroy (void);

    enum EAllocMode
    {
        ALLOC_HEAD = 0,
        ALLOC_TAIL = 1
    };

    class CMemBlock
    {
        friend class JKRExpHeap;

    public:
        static CMemBlock* getHeapBlock (void* obj);

        void initiate (CMemBlock* prev, //
                       CMemBlock* next,
                       size_t     size,
                       u8         groupId,
                       u8         align);

        JKRExpHeap::CMemBlock* allocFore (size_t size,
                                          u8     group_id,
                                          u8     align_1,
                                          u8     group_id_2,
                                          u8     align_2);

        JKRExpHeap::CMemBlock* allocBack (size_t size,
                                          u8     group_id_1,
                                          u8     align_1,
                                          u8     group_id_2,
                                          u8     align_2);

        void* free (JKRExpHeap* heap);

        inline void
        newGroupId (u8 group_id)
        {
            mGroupID = group_id;
        }

        bool
        isValid () const
        {
            return mMagic == 'HM';
        }

        bool
        _isTempMemBlock () const
        {
            return (mFlags & 0x80) ? true : false;
        }

        int
        getAlignment () const
        {
            return mFlags & 0x7f;
        }

        void*
        getContent () const
        {
            return (void*)(this + 0x1);
        }

        CMemBlock*
        getPrevBlock () const
        {
            return mPrev;
        }

        CMemBlock*
        getNextBlock () const
        {
            return mNext;
        }

        u32
        getSize () const
        {
            return mSize;
        }

        u8
        getGroupId () const
        {
            return mGroupID;
        }

        static CMemBlock*
        getBlock (void* data)
        {
            return (CMemBlock*)((u32)data + -0x10);
        }

    private:
        u16        mMagic;              
        u8         mFlags;              
        u8         mGroupID;            
        size_t     mSize;               
        CMemBlock* mPrev;               
        CMemBlock* mNext;               
    };

    friend class CMemBlock;

protected:
    constructor JKRExpHeap (void* data, size_t size, JKRHeap* parent, bool error);
    destructor ~JKRExpHeap();

public:
    u8 changeGroupID (u8 group_id);

    override void* alloc (size_t size, int align);

    override void free (void* obj);
    override void freeAll (void);
    override void freeTail (void);
    s32           freeGroup (u8 groupID);

    override size_t resize (void* obj, size_t size);
    override size_t getSize (void* obj);
    override size_t getFreeSize (void);
    override size_t getTotalFreeSize (void);
    size_t          getUsedSize (u8 group_id) const;
    size_t          getTotalUsedSize (void) const;

    override u32  getHeapType (void);
    override BOOL check (void);
    override BOOL dump (void);
    BOOL          dump_sort (void);
    override u32  getUNK (void);
    override u32  getCurrentGroupId (void);

    CMemBlock*
    getHeadUsedList () const
    {
        return mUsedHeadList;
    }

    void
    setAllocationMode (EAllocMode mode)
    {
        mAllocMode = mode;
    }

protected:
    void* allocFromHead (size_t size, int align);
    void* allocFromHead (size_t size);
    void* allocFromTail (size_t size, int align);
    void* allocFromTail (size_t size);

    void appendUsedList (CMemBlock* block);
    void setFreeBlock (CMemBlock* block, CMemBlock* prev, CMemBlock* next);
    void removeFreeBlock (CMemBlock* block);
    void removeUsedBlock (CMemBlock* block);
    void recycleFreeBlock (CMemBlock* block);
    void joinTwoBlocks (CMemBlock* block);

public:                                 // TODO: I feel like these offsets are wrong
    u8   mAllocMode;                    
    u8   mGroupID;                      
    bool mIsRoot;                       

private:
    void*      _68;                     
    u32        _6C;                     
    CMemBlock* mFreeHeadList;           
    CMemBlock* mFreeTailList;           
    CMemBlock* mUsedHeadList;           
    CMemBlock* mUsedTailList;           
};

#endif                                  /* __JKR_EXPHEAP_H__ */
```


