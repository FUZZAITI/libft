char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t n;
    size_t h;

    if (needle[0] == '\0')
        return ((char *)haystack);
    if (len == 0)
        return (NULL);
    h = 0;
    while (haystack[h] != '\0' && h < len)
    {
        n = 0;  
        if (haystack[h] == needle[n])
        {
            while (haystack[h + n] == needle[n] && (h + n) < len)
            {
                if (needle[n + 1] == '\0')
                    return ((char *)haystack + h);
                n++;
            }
        }
        h++;
    }
    return (NULL);
}
