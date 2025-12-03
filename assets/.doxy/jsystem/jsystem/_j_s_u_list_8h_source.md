

# File JSUList.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**JSystem**](dir_2add8750dabb2c81b6f2c3c5af4cfeba.md) **>** [**System**](dir_e5be38218225624e70ebb9ea7ff5d81f.md) **>** [**JSupport**](dir_308f6f999a37d66526675b2f4ad20c02.md) **>** [**include**](dir_5eac6eb0a6ef103191c6b0789cc9720c.md) **>** [**JSUList.h**](_j_s_u_list_8h.md)

[Go to the documentation of this file](_j_s_u_list_8h.md)


```C++
#ifndef __JSU_LIST_HPP__
#define __JSU_LIST_HPP__

#include <JUTTypes.h>

class JSUPtrList;

struct JSUPtrLink
{
    JSUPtrLink (void* data);
    ~JSUPtrLink ();

    void*       pObject;     
    JSUPtrList* pSupervisor; 
    JSUPtrLink* pNext;       
    JSUPtrLink* pPrev;       
};

SASSERT_SIZE (JSUPtrLink, 0x10);

template <class T>
struct JSULink : public JSUPtrLink
{
    JSULink (void* data)
      : JSUPtrLink (data)
    {}

    ~JSULink () {}

    void*
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
    JSUPtrList () { initiate(); }

    JSUPtrList (BOOL do_init);
    ~JSUPtrList ();

    void initiate ();
    void setFirst (JSUPtrLink* link);
    void setLast (JSUPtrLink* link);
    void setNext (JSUPtrLink* link);

    BOOL append (JSUPtrLink* link);
    BOOL prepend (JSUPtrLink* link);
    BOOL insert (JSUPtrLink* last, JSUPtrLink* next);
    BOOL remove (JSUPtrLink* link);

    JSUPtrLink* getNthLink (u32 n) const;

    JSUPtrLink*
    getFirstLink () const
    {
        return pFirst;
    }

    JSUPtrLink*
    getLastLink () const
    {
        return pLast;
    }

    u32
    getNumLinks () const
    {
        return mNumLinks;
    }

protected:
    JSUPtrLink* pFirst;      
    JSUPtrLink* pLast;       
    u32         mNumLinks;   
};

SASSERT_SIZE (JSUPtrList, 0xC);

template <class T>
class JSUList : public JSUPtrList
{
public:
    JSUList (BOOL init)
      : JSUPtrList (init)
    {}

    JSUList ()
      : JSUPtrList()
    {}

    void
    initiate ()
    {
        JSUPtrList::initiate();
    }

    BOOL
    append (JSULink<T>* link)
    {
        return JSUPtrList::append (link);
    }

    BOOL
    prepend (JSULink<T>* link)
    {
        return JSUPtrList::prepend (link);
    }

    BOOL
    insert (JSULink<T>* prev, JSULink<T>* next)
    {
        return JSUPtrList::insert (prev, next);
    }

    BOOL
    remove (JSULink<T>* link)
    {
        return JSUPtrList::remove (link);
    }

    JSULink<T>*
    getFirst () const
    {
        return (JSULink<T>*)JSUPtrList::getFirstLink();
    }

    JSULink<T>*
    getLast () const
    {
        return (JSULink<T>*)JSUPtrList::getLastLink();
    }

    JSULink<T>*
    getEnd () const
    {
        return (JSULink<T>*)Nil;
    }

    u32
    getNumLinks () const
    {
        return JSUPtrList::getNumLinks();
    }
};

template <typename T>
class JSUListIterator
{
public:
    JSUListIterator ()
      : mLink (Nil)
    {}

    JSUListIterator (JSULink<T>* link)
      : mLink (link)
    {}

    JSUListIterator (JSUList<T>* list)
      : mLink (list->getFirst())
    {}

    JSUListIterator<T>&
    operator= (JSULink<T>* link)
    {
        mLink = link;
        return *this;
    }

    T*
    getObject () const
    {
        return (T*)mLink->getObject();
    }

    BOOL
    isAvailable ()
    {
        return mLink != Nil;
    }

    BOOL
    operator== (const JSULink<T>* other) const
    {
        return mLink == other;
    }

    BOOL
    operator!= (const JSULink<T>* other) const
    {
        return mLink != other;
    }

    BOOL
    operator== (const JSUListIterator<T>& other) const
    {
        return mLink == other.mLink;
    }

    BOOL
    operator!= (const JSUListIterator<T>& other) const
    {
        return mLink != other.mLink;
    }

    JSUListIterator<T>
    operator++ (int)
    {
        JSUListIterator<T> prev = *this;
        mLink                   = (JSULink<T>*)mLink->getNext();
        return prev;
    }

    JSUListIterator<T>&
    operator++ ()
    {
        mLink = (JSULink<T>*)mLink->getNext();
        return *this;
    }

    JSUListIterator<T>
    operator-- (int)
    {
        JSUListIterator<T> prev = *this;
        mLink                   = (JSULink<T>*)mLink->getPrev();
        return prev;
    }

    JSUListIterator<T>&
    operator-- ()
    {
        mLink = (JSULink<T>*)mLink->getPrev();
        return *this;
    }

    // T &operator*() { return *getObject(); }

    T*
    operator->() const
    {
        return (T*)mLink->getObject();
    }

private:
    JSULink<T>* mLink;
};

template <typename T>
class JSUTree : public JSUList<T>, public JSULink<T>
{
public:
    JSUTree (T* owner)
      : JSUList<T>(),
        JSULink<T> (owner)
    {}

    ~JSUTree () {}

    BOOL
    appendChild (JSUTree<T>* child)
    {
        return append (child);
    }

    BOOL
    prependChild (JSUTree<T>* child)
    {
        return prepend (child);
    }

    BOOL
    removeChild (JSUTree<T>* child)
    {
        return remove (child);
    }

    BOOL
    insertChild (JSUTree<T>* before, JSUTree<T>* child)
    {
        return insert (before, child);
    }

    JSUTree<T>*
    getEndChild () const
    {
        return Nil;
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
        return (JSUTree<T>*)this->pNext;
    }

    JSUTree<T>*
    getPrevChild () const
    {
        return (JSUTree<T>*)this->pPrev;
    }

    u32
    getNumChildren () const
    {
        return JSUList<T>::getNumLinks();
    }

    T*
    getObject () const
    {
        return (T*)this->pObject;
    }

    JSUTree<T>*
    getParent () const
    {
        return (JSUTree<T>*)this->pSupervisor;
    }
};

template <typename T>
class JSUTreeIterator
{
public:
    JSUTreeIterator ()
      : mTree (Nil)
    {}

    JSUTreeIterator (JSUTree<T>* tree)
      : mTree (tree)
    {}

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

    BOOL
    operator== (JSUTree<T>* other)
    {
        return mTree == other;
    }

    BOOL
    operator!= (const JSUTree<T>* other) const
    {
        return mTree != other;
    }

    JSUTreeIterator<T>
    operator++ (int)
    {
        JSUTreeIterator<T> prev = *this;
        mTree                   = mTree->getNextChild();
        return prev;
    }

    JSUTreeIterator<T>&
    operator++ ()
    {
        mTree = mTree->getNextChild();
        return *this;
    }

    JSUTreeIterator<T>
    operator-- (int)
    {
        JSUTreeIterator<T> prev = *this;
        mTree                   = mTree->getPrevChild();
        return prev;
    }

    JSUTreeIterator<T>&
    operator-- ()
    {
        mTree = mTree->getPrevChild();
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
```


