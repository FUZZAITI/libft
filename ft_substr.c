#include <stdlib.h>
#include <string.h>

char *ft_substr(const char *str, size_t start, size_t len) 
{
    size_t i = 0;
    size_t tam = 0;
    
    while (str[tam] != '\0')
    {
      tam++;
    }

    if (start >= tam)
        return strdup("");

    if (start + len > tam)
        len = tam - start;

    char *sub = malloc(len + 1);
    if (!sub)
        return NULL;

    while (i < len)
    {
        sub[i] = str[start + i];
        i++;
    }
    sub[i] = '\0';

    return sub;
}