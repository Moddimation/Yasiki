

# File HTable.c

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**support**](dir_7636aa5346774086801f2528daa452d7.md) **>** [**HTable.c**](_h_table_8c.md)

[Go to the documentation of this file](_h_table_8c.md)


```C++
#include <charPipeline/structures/HTable.h>
#include <charPipeline/structures/List.h>

void
DSInitHTable (DSHashTable* hTable,
              u16          size,
              DSList*      listArray,
              DSHashFunc*  hashFunc,
              Ptr          obj,
              DSLinkPtr    link)
{
    u16 i;

    hTable->table = listArray;
    hTable->tableSize = size;
    hTable->hash = hashFunc;
    for (i = 0; i < size; i++)
    {
        DSInitList (&listArray[i], obj, link);
    }
}

void
DSInsertHTableObj (DSHashTable* hTable, Ptr obj)
{
    DSList* list = &hTable->table[hTable->hash (obj)];
    DSInsertListObject (list, 0, obj);
}

void
DSHTableToList (DSHashTable* hTable, DSList* list)
{
    DSLink* link = NULL;
    u16     i = 0;

    list->Offset = hTable->table[i].Offset;
    for (i = 0; i < hTable->tableSize; i++)
    {
        DSAttachList (list, &hTable->table[i]);
    }
}

void*
DSNextHTableObj (DSHashTable* hTable, Ptr obj)
{
    s32   currentIndex;
    void* cursor;

    if (!hTable)
    {
        return NULL;
    }
    if (!obj)
    {
        currentIndex = 0;
        cursor = DSNextListObj (&hTable->table[currentIndex], NULL);
    }
    else
    {
        currentIndex = DSHTableIndex (hTable, obj);
        if (currentIndex == -1)
        {
            return NULL;
        }
        cursor = DSNextListObj (&hTable->table[currentIndex], obj);
    }
    while (cursor == NULL && currentIndex < hTable->tableSize - 1)
    {
        currentIndex++;
        cursor = DSNextListObj (&hTable->table[currentIndex], NULL);
    }
    return cursor;
}

s32
DSHTableIndex (DSHashTable* hTable, Ptr obj)
{
    if (!hTable || !obj)
    {
        return -1;
    }
    return hTable->hash (obj);
}

void*
DSHTableHead (DSHashTable* hTable, s32 index)
{
    if (index < 0 || index >= hTable->tableSize)
    {
        return NULL;
    }
    return DSNextListObj (&hTable->table[index], NULL);
}
```


