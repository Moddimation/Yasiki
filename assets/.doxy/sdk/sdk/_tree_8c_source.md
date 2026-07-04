

# File Tree.c

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**support**](dir_7636aa5346774086801f2528daa452d7.md) **>** [**Tree.c**](_tree_8c.md)

[Go to the documentation of this file](_tree_8c.md)


```C++
#include <charPipeline/structures/Tree.h>

void
DSExtractBranch (DSTreePtr tree, Ptr obj)
{
    DSBranchPtr branch = (DSBranchPtr)(obj + tree->Offset);
    Ptr         cursor = branch->Children;
    Ptr         next;

    while (cursor)
    {
        next = ((DSBranchPtr)(cursor + tree->Offset))->Next;
        DSInsertBranchBelow (tree, branch->Parent, cursor);
        cursor = next;
    }
    DSRemoveBranch (tree, obj);
}

void
DSInitTree (DSTreePtr tree, Ptr obj, DSBranchPtr branch)
{
    tree->Root = NULL;
    tree->Offset = (Ptr)branch - obj;
}

void
DSInsertBranchBelow (DSTreePtr tree, Ptr cursor, Ptr obj)
{
    DSBranchPtr branch;
    DSBranchPtr objBranch = (DSBranchPtr)(obj + tree->Offset);
    Ptr         tail = NULL;

    if (cursor)
    {
        branch = (DSBranchPtr)(cursor + tree->Offset);
        if (branch->Children)
        {
            tail = branch->Children;
        }
        else
        {
            branch->Children = obj;
        }
    }
    else if (tree->Root)
    {
        tail = tree->Root;
    }
    else
    {
        tree->Root = obj;
    }
    if (tail)
    {
        while (((DSBranchPtr)(tail + tree->Offset))->Next)
        {
            tail = ((DSBranchPtr)(tail + tree->Offset))->Next;
        }
        ((DSBranchPtr)(tail + tree->Offset))->Next = obj;
        objBranch->Prev = tail;
    }
    else
    {
        objBranch->Prev = NULL;
    }
    objBranch->Next = NULL;
    objBranch->Parent = cursor;
}

void
DSInsertBranchBeside (DSTreePtr tree, Ptr cursor, Ptr obj)
{
    DSBranchPtr parent;
    DSBranchPtr branch;

    branch = (DSBranchPtr)(obj + tree->Offset);
    if (!cursor)
    {
        if (!tree->Root)
        {
            tree->Root = obj;
            branch->Next = NULL;
            branch->Prev = NULL;
            branch->Children = NULL;
            branch->Parent = NULL;
            return;
        }
        cursor = tree->Root;
    }
    while (((DSBranchPtr)(cursor + tree->Offset))->Next)
    {
        cursor = ((DSBranchPtr)(cursor + tree->Offset))->Next;
    }
    parent = (DSBranchPtr)(cursor + tree->Offset);
    parent->Next = obj;
    branch->Prev = cursor;
    branch->Next = NULL;
    branch->Parent = parent->Parent;
}

void
DSRemoveBranch (DSTreePtr tree, Ptr obj)
{
    DSBranchPtr branch;
    DSBranchPtr parent;

    branch = (DSBranchPtr)(obj + tree->Offset);
    if (branch->Parent)
    {
        parent = (DSBranchPtr)(branch->Parent + tree->Offset);
        if (parent->Children == obj)
        {
            parent->Children = branch->Next;
        }
    }
    else if (tree->Root == obj)
    {
        tree->Root = branch->Next;
    }
    if (branch->Prev)
    {
        ((DSBranchPtr)(branch->Prev + tree->Offset))->Next = branch->Next;
    }
    if (branch->Next)
    {
        ((DSBranchPtr)(branch->Next + tree->Offset))->Prev = branch->Prev;
    }
    branch->Prev = NULL;
    branch->Next = NULL;
    branch->Parent = NULL;
}
```


