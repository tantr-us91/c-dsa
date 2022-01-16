#ifndef DSA_ARRAY_LIST_H
#define DSA_ARRAY_LIST_H

#include <stdbool.h>

struct ArrayList
{
    void *array;
    size_t size;  
};

/*
array_list_init() - expects a size as a parameter. 
The parameter will be set to ArrayList.size as the array size */
struct ArrayList array_list_init(size_t size);

// Array List operation functions
bool array_list_add(struct ArrayList list, void *data, size_t data_size);

#endif