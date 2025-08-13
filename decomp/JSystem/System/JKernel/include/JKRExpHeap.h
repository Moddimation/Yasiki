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
        u16        mMagic;              ///< 0x0
        u8         mFlags;              ///< 0x2 // a|bbbbbbb a=temporary b=align
        u8         mGroupID;            ///< 0x3
        size_t     mSize;               ///< 0x4
        CMemBlock* mPrev;               ///< 0x8
        CMemBlock* mNext;               ///< 0xC
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
    u8   mAllocMode;                    ///< 0x6C
    u8   mGroupID;                      ///< 0x6D
    bool mIsRoot;                       ///< 0x6E

private:
    void*      _68;                     ///< 0x68
    u32        _6C;                     ///< 0x6C
    CMemBlock* mFreeHeadList;           ///< 0x70
    CMemBlock* mFreeTailList;           ///< 0x74
    CMemBlock* mUsedHeadList;           ///< 0x78
    CMemBlock* mUsedTailList;           ///< 0x7C
};

#endif                                  /* __JKR_EXPHEAP_H__ */
