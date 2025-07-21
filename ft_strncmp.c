#include <stddef.h> 

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    const unsigned char *p = (const unsigned char *)s1;
    const unsigned char *o = (const unsigned char *)s2;

    size_t i = 0;

    while (i < n && (p[i] != '\0' || o[i] != '\0'))
    {
        if (p[i] != o[i])
            return (p[i] - o[i]);  
        i++;
    }
    return 0;
}
