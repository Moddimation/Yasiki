#ifndef __JSU_LIST_HPP__
#define __JSU_LIST_HPP__

#include <JUTTypes.h>

typedef void* JSUListPtr;

class JSUPtrList;

struct JSUPtrLink
{
    JSUPtrLink (JSUListPtr data);
    ~JSUPtrLink ();

    JSUListPtr  pObject;     ///< 0x00 // data ptr
    JSUPtrList* pSupervisor; ///< 0x04 // list that owns the link
    JSUPtrLink* pNext;       ///< 0x08 // next link
    JSUPtrLink* pPrev;       ///< 0x0C // last/previous link
};

SASSERT_SIZE (JSUPtrLink, 0x10);

template <class T>
struct JSULink : public JSUPtrLink
{
    JSULink (JSUListPtr data) : JSUPtrLink (data) {}

    ~JSULink () {}

    JSUListPtr
    getObject ()
    {
        return pObject;
    }

    JSUPtrList*
    getSupervisor ()
    {
        return pSupervisor;
    }

    JSUPtrLink*
    getNext ()
    {
        return pNext;
    }

    JSUPtrLink*
    getPrev ()
    {
        return pPrev;
    }
};

class JSUPtrList
{
public:
    JSUPtrList (bool init);
    ~JSUPtrList ();

    void initiate ();
    void setFirst (JSUPtrLink* link);

    inline void
    setLast (JSUPtrLink* link)
    {
        link->pSupervisor = this;
        link->pNext = pTail;
        link->pPrev = nullptr;
        pTail->pPrev = link;
        pTail = link;
        mNumLinks++;
    }

    inline void
    setNext (JSUPtrLink* link)
    {
        link->pSupervisor = this;
        link->pNext = nullptr;
        link->pPrev = pHead;
        pHead->pNext = link;
        pHead = link;
        mNumLinks++;
    }

    bool append (JSUPtrLink* link);
    bool prepend (JSUPtrLink* link);
    bool insert (JSUPtrLink* last, JSUPtrLink* next);
    bool remove (JSUPtrLink* link);

    // TODO: add these
    JSUPtrLink* getNthLink (u32 n) const;
    JSUPtrLink* getFirstLink () const;
    JSUPtrLink* getLastLink () const;

    u32
    getNumLinks ()
    {
        return mNumLinks;
    }

protected:
    JSUPtrLink* pHead;     ///< 0x00 // head link of list
    JSUPtrLink* pTail;     ///< 0x04 // tail link of list
    u32         mNumLinks; ///< 0x08 // number of links in list
};

SASSERT_SIZE (JSUPtrLink, 0x10);

template <class T>
class JSUList : public JSUPtrList
{
    JSUList (bool init) : JSUPtrList (init) {}

    void
    initiate ()
    {
        JSUPtrList::initiate();
    }

    bool
    append (JSULink<T>* link)
    {
        return JSUPtrList::append (link);
    }

    bool
    prepend (JSULink<T>* link)
    {
        return JSUPtrList::prepend (link);
    }

    bool
    insert (JSULink<T>* prev, JSULink<T>* next)
    {
        return JSUPtrList::insert (prev, next);
    }

    bool
    remove (JSULink<T>* link)
    {
        return JSUPtrList::remove (link);
    }

    JSULink<T>*
    getFirst ()
    {
        return JSUPtrList::getFirstLink();
    }

    JSULink<T>*
    getLast ()
    {
        return JSUPtrList::getLastLink();
    }

    JSULink<T>*
    getEnd ()
    {
        return nullptr;
    }

    u32
    getNumLinks ()
    {
        return JSUPtrList::getNumLinks();
    }
};

template <typename T>
class JSUListIterator
{
public:
    JSUListIterator () : mLink (nullptr) {}

    JSUListIterator (JSULink<T>* link) : mLink (link) {}

    JSUListIterator (JSUList<T>* list) : mLink (list->getFirst()) {}

    JSUListIterator<T>&
    operator= (JSULink<T>* link)
    {
        mLink = link;
        return *this;
    }

    T*
    getObject () const
    {
        return mLink->getObject();
    }

    bool
    isAvailable ()
    {
        return mLink != nullptr;
    }

    bool
    operator== (const JSULink<T>* other) const
    {
        return mLink == other;
    }

    bool
    operator!= (const JSULink<T>* other) const
    {
        return mLink != other;
    }

    bool
    operator== (const JSUListIterator<T>& other) const
    {
        return mLink == other.mLink;
    }

    bool
    operator!= (const JSUListIterator<T>& other) const
    {
        return mLink != other.mLink;
    }

    JSUListIterator<T>
    operator++ (int)
    {
        JSUListIterator<T> prev = *this;
        mLink = mLink->getNext();
        return prev;
    }

    JSUListIterator<T>&
    operator++ ()
    {
        mLink = mLink->getNext();
        return *this;
    }

    JSUListIterator<T>
    operator-- (int)
    {
        JSUListIterator<T> prev = *this;
        mLink = mLink->getPrev();
        return prev;
    }

    JSUListIterator<T>&
    operator-- ()
    {
        mLink = mLink->getPrev();
        return *this;
    }

                           // Investigate where and if this actually exists
    // T &operator*() { return *getObject(); }

    T*
    operator->() const
    {
        return mLink->getObject();
    }

    // private:
    JSULink<T>* mLink;
};

template <typename T>
class JSUTree : public JSUList<T>, public JSULink<T>
{
public:
    JSUTree (T* owner) : JSUList<T>(), JSULink<T> (owner) {}

    ~JSUTree () {}

    bool
    appendChild (JSUTree<T>* child)
    {
        return append (child);
    }

    bool
    prependChild (JSUTree<T>* child)
    {
        return prepend (child);
    }

    bool
    removeChild (JSUTree<T>* child)
    {
        return remove (child);
    }

    bool
    insertChild (JSUTree<T>* before, JSUTree<T>* child)
    {
        return insert (before, child);
    }

    JSUTree<T>*
    getEndChild () const
    {
        return nullptr;
    }

    JSUTree<T>*
    getFirstChild () const
    {
        return (JSUTree<T>*)this->getFirstLink();
    }

    JSUTree<T>*
    getLastChild () const
    {
        return (JSUTree<T>*)this->getLastLink();
    }

    JSUTree<T>*
    getNextChild () const
    {
        return (JSUTree<T>*)this->mNext;
    }

    JSUTree<T>*
    getPrevChild () const
    {
        return (JSUTree<T>*)this->mPrev;
    }

    u32
    getNumChildren () const
    {
        return this->mLinkCount;
    } // In TP Debug getNumLinks() gets called here, however that kills
      // something in JKRHeap::find(inline depth?)

    T*
    getObject () const
    {
        return (T*)this->mData;
    }

    JSUTree<T>*
    getParent () const
    {
        return (JSUTree<T>*)this->mPtrList;
    }
};

template <typename T>
class JSUTreeIterator
{
public:
    JSUTreeIterator () : mTree (nullptr) {}

    JSUTreeIterator (JSUTree<T>* tree) : mTree (tree) {}

    JSUTreeIterator<T>&
    operator= (JSUTree<T>* tree)
    {
        mTree = tree;
        return *this;
    }

    T*
    getObject () const
    {
        return mTree->getObject();
    }

    bool
    operator== (JSUTree<T>* other)
    {
        return mTree == other;
    }

    bool
    operator!= (const JSUTree<T>* other) const
    {
        return mTree != other;
    }

    JSUTreeIterator<T>
    operator++ (int)
    {
        JSUTreeIterator<T> prev = *this;
        mTree = mTree->getNextChild();
        return prev;
    }

    JSUTreeIterator<T>&
    operator++ ()
    {
        mTree = mTree->getNextChild();
        return *this;
    }

    T&
    operator* ()
    {
        return *getObject();
    }

    T*
    operator->() const
    {
        return mTree->getObject();
    }

private:
    JSUTree<T>* mTree;
};

#endif
