#include <JSUList.h>

JSUPtrLink::JSUPtrLink (void* data)
{
    pSupervisor = nullptr;
    pObject = data;
    pNext = nullptr;
    pPrev = nullptr;
}

JSUPtrLink::~JSUPtrLink ()
{
    if (pSupervisor != nullptr)
    {
        pSupervisor->remove (this);
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

    for (u32 i = 0; i < mNumLinks; i++)
    {
        link->pSupervisor = nullptr;
        link = link->pPrev;
    }
}

void
JSUPtrList::initiate ()
{
    pHead = nullptr;
    pTail = nullptr;
    mNumLinks = nullptr;
}

void
JSUPtrList::setFirst (JSUPtrLink* link)
{
    link->pSupervisor = this;
    link->pNext = nullptr;
    link->pPrev = nullptr;
    pTail = link;
    pHead = link;
    mNumLinks = 1;
}

bool
JSUPtrList::append (JSUPtrLink* link)
{
    bool result = (link->pSupervisor == nullptr);
    if (!result)
    {
        result = link->pSupervisor->remove (link);
    }

    if (result)
    {
        if (mNumLinks == 0)
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
    bool result = (link->pSupervisor == nullptr);
    if (!result)
    {
        result = link->pSupervisor->remove (link);
    }

    if (result)
    {
        if (mNumLinks == 0)
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

    if (last->pSupervisor != this)
    {
        return false;
    }

    bool result = next->pSupervisor == nullptr;
    if (!result)
    {
        result = next->pSupervisor->remove (next);
    }
    if (result)
    {
        JSUPtrLink* old = last->pNext;
        next->pSupervisor = this;
        next->pNext = old;
        next->pPrev = last;
        old->pPrev = next;
        last->pNext = next;
        mNumLinks++;
    }

    return result;
}

bool
JSUPtrList::remove (JSUPtrLink* link)
{
    bool result = link->pSupervisor == this;
    if (result)
    {
        if (mNumLinks == 1)
        {
            pHead = nullptr;
            pTail = nullptr;
        }
        else if (link == pHead)
        {
            link->pPrev->pNext = nullptr;
            pHead = link->pPrev;
        }
        else if (link == pTail)
        {
            link->pNext->pPrev = nullptr;
            pTail = link->pNext;
        }
        else
        {
            link->pNext->pPrev = link->pPrev;
            link->pPrev->pNext = link->pNext;
        }

        link->pSupervisor = nullptr;
        mNumLinks--;
    }
    return result;
}
