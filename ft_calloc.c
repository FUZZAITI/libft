#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t num, size_t size)
{
    void *ptr;
    size_t total = num * size;
    int i = 0;

    ptr = malloc(total);
    if (!ptr)
        return NULL;
    while (i < total){
        ((unsigned char *)ptr)[i] = 0;
        i ++;
    }

    return ptr;
}