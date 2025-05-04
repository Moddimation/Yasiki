#ifndef __JSU_LIST_H__
#define __JSU_LIST_H__

#include <dolphin/types.h>

// find where to put these
#define constructor explicit
#define destructor  virtual

class JSUPtrList;

struct JSUPtrLink
{
    JSUPtrLink (void* data);
    ~JSUPtrLink ();

    const void* pData;  ///< 0x00 // data ptr
    JSUPtrList* pOwner; ///< 0x04 // list that owns the link
    JSUPtrLink* pNext;  ///< 0x08 // next link
    JSUPtrLink* pLast;  ///< 0x0C // last/previous link
};

class JSUPtrList
{
public:
    JSUPtrList (bool _init);
    ~JSUPtrList ();

    void initiate ();
    void setFirst (JSUPtrLink* link);

    inline void
    setLast (JSUPtrLink* link)
    {
        link->pOwner = this;
        link->pNext = pTail;
        link->pLast = nullptr;
        pTail->pLast = link;
        pTail = link;
        mCount++;
    }

    inline void
    setNext (JSUPtrLink* link)
    {
        link->pOwner = this;
        link->pNext = nullptr;
        link->pLast = pHead;
        pHead->pNext = link;
        pHead = link;
        mCount++;
    }

    bool append (JSUPtrLink* link);
    bool prepend (JSUPtrLink* link);
    bool insert (JSUPtrLink* last, JSUPtrLink* next);
    bool remove (JSUPtrLink* link);

    // TODO: add these
    JSUPtrLink* getNthLink (u32 n) const;
    JSUPtrLink* getFirstLink () const;

private:
    JSUPtrLink* pHead;  ///< 0x00 // head link of list
    JSUPtrLink* pTail;  ///< 0x04 // tail link of list
    u32         mCount; ///< 0x08 // number of links in list
};

#endif
