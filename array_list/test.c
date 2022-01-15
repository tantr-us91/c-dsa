#include <stdio.h>
#include <stdlib.h>
#include "array_list.h"

int main()
{
    int x;
    void *px;
    

    if (__builtin_types_compatible_p(typeof (x), int))
    {
        px = (int*) malloc(4*sizeof(x));
    }
    
    if (__builtin_types_compatible_p(typeof (px), int*))
        printf("px is int*\n");
    else
        printf("px is void*\n");
    return 0;
}