#include <stdlib.h>
#include "array_list.h"

/* 
array_list_init() expects a size as a parameter. 
The parameter will be set to ArrayList.size as the array size */
struct ArrayList array_list_init(size_t size)
{
    struct ArrayList al;
    al.size = size;
    return al;
}

bool array_list_add(struct ArrayList list, void *data, size_t data_size)
{
    
}