#include <JSUList.hpp>

JSUPtrLink::JSUPtrLink (void* data)
{
    pOwner = nullptr;
    pData = data;
    pNext = nullptr;
    pLast = nullptr;
}

JSUPtrLink::~JSUPtrLink ()
{
    if (pOwner != nullptr)
    {
        pOwner->remove (this);
    }
}

JSUPtrList::JSUPtrList (bool _init)
{
    if (_init)
    {
        initiate();
    }
}

JSUPtrList::~JSUPtrList ()
{
    JSUPtrLink* link = pHead;

    for (u32 i = 0; i < mCount; i++)
    {
        link->pOwner = nullptr;
        link = link->pLast;
    }
}

void
JSUPtrList::initiate ()
{
    pHead = nullptr;
    pTail = nullptr;
    mCount = nullptr;
}

void
JSUPtrList::setFirst (JSUPtrLink* link)
{
    link->pOwner = this;
    link->pNext = nullptr;
    link->pLast = nullptr;
    pTail = link;
    pHead = link;
    mCount = 1;
}

bool
JSUPtrList::append (JSUPtrLink* link)
{
    bool result = (link->pOwner == nullptr);
    if (!result)
    {
        result = link->pOwner->remove (link);
    }

    if (result)
    {
        if (mCount == 0)
        {
            setFirst (link);
        }
        else
        {
            setLast (link);
        }
    }
    return result;
}

bool
JSUPtrList::prepend (JSUPtrLink* link)
{
    bool result = (link->pOwner == nullptr);
    if (!result)
    {
        result = link->pOwner->remove (link);
    }

    if (result)
    {
        if (mCount == 0)
        {
            setFirst (link);
        }
        else
        {
            setNext (link);
        }
    }
    return result;
}

bool
JSUPtrList::insert (JSUPtrLink* last, JSUPtrLink* next)
{
    if (last == pHead)
    {
        return prepend (next);
    }
    if (last == nullptr)
    {
        return append (next);
    }

    if (last->pOwner != this)
    {
        return false;
    }

    bool result = next->pOwner == nullptr;
    if (!result)
    {
        result = next->pOwner->remove (next);
    }
    if (result)
    {
        JSUPtrLink* old = last->pNext;
        next->pOwner = this;
        next->pNext = old;
        next->pLast = last;
        old->pLast = next;
        last->pNext = next;
        mCount++;
    }

    return result;
}

bool
JSUPtrList::remove (JSUPtrLink* link)
{
    bool result = link->pOwner == this;
    if (result)
    {
        if (mCount == 1)
        {
            pHead = nullptr;
            pTail = nullptr;
        }
        else if (link == pHead)
        {
            link->pLast->pNext = nullptr;
            pHead = link->pLast;
        }
        else if (link == pTail)
        {
            link->pNext->pLast = nullptr;
            pTail = link->pNext;
        }
        else
        {
            link->pNext->pLast = link->pLast;
            link->pLast->pNext = link->pNext;
        }

        link->pOwner = nullptr;
        mCount--;
    }
    return result;
}
