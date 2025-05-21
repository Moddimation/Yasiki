

# File JKRExpHeap.h

[**File List**](files.md) **>** [**include**](dir_aa4045410c0ff4a0352c8e4463772829.md) **>** [**JKRExpHeap.h**](_j_k_r_exp_heap_8h.md)

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
    static JKRExpHeap* create (HANDLE obj, size_t size, JKRHeap* parent, bool errorFlag);

    enum EAllocMode
    {
        ALLOC_MODE_1 = 1,
    };

    class CMemBlock
    {
        friend class JKRExpHeap;

    public:
        static CMemBlock* getHeapBlock (HANDLE obj);

        void initiate (CMemBlock* prev, //
                       CMemBlock* next,
                       size_t     size,
                       u8         groupId,
                       u8         align);

        JKRExpHeap::CMemBlock* allocFore (size_t size,
                                          u8     groupId1,
                                          u8     align1,
                                          u8     groupId2,
                                          u8     align2);

        JKRExpHeap::CMemBlock* allocBack (size_t size,
                                          u8     groupId1,
                                          u8     align1,
                                          u8     groupId2,
                                          u8     align2);

        int free (JKRExpHeap* heap);

        inline void
        newGroupId (u8 groupId)
        {
            mGroupId = groupId;
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

        HANDLE
        getContent () const { return (HANDLE)(this + 1); }

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
            return mGroupId;
        }

        static CMemBlock*
        getBlock (void* data)
        {
            return (CMemBlock*)((u32)data + -0x10);
        }

    private:
        u16        mMagic;              
        u8         mFlags;              
        u8         mGroupId;            
        u32        mSize;               
        CMemBlock* mPrev;               
        CMemBlock* mNext;               
    };

    friend class CMemBlock;

public:
    override HANDLE alloc (size_t size, int align);

    override void free (HANDLE obj);
    override void freeAll (void);
    override void freeTail (void);

    override s32    resize (HANDLE obj, size_t size);
    override s32    getSize (HANDLE obj);
    override size_t getFreeSize (void);
    override size_t getTotalFreeSize (void);
    s32             getUsedSize (u8 groupId) const;
    s32             getTotalUsedSize (void) const;

    override u32  getHeapType (void);
    override BOOL check (void);
    override BOOL dump (void);

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

    void appendUsedList (CMemBlock* newblock);
    void setFreeBlock (CMemBlock* block, CMemBlock* prev, CMemBlock* next);
    void removeFreeBlock (CMemBlock* block);
    void removeUsedBlock (CMemBlock* block);
    void recycleFreeBlock (CMemBlock* block);
    void joinTwoBlocks (CMemBlock* block);

public:
    u8   mAllocMode;                    
    u8   mGroupId;                      
    bool _6E;                           

protected:
    constructor JKRExpHeap (void* data, size_t size, JKRHeap* parent, bool errorFlag);
    destructor ~JKRExpHeap();

private:
    void*      _70;                     
    u32        _74;                     
    CMemBlock* mFreeHeadList;           
    CMemBlock* mFreeTailList;           
    CMemBlock* mUsedHeadList;           
    CMemBlock* mUsedTailList;           
};

#endif                                  /* __JKR_EXPHEAP_H__ */
```


