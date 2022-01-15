#include <stdlib.h>
#include "array_list.h"

// initialize Array List
struct ArrayList array_list_init(size_t size)
{
    struct ArrayList al;
    al.size = size;
    return al;
}