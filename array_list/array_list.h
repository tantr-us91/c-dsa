#ifndef DSA_ARRAY_LIST_H
#define DSA_ARRAY_LIST_H

struct ArrayList
{
    void *list;
    size_t size;  
};

struct ArrayList array_list_init(size_t size);

#endif