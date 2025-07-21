#include <unistd.h>

void *ft_bzero(void *s, size_t n)
{
  size_t cont = 0;
  unsigned char *ptr = (unsigned char *)s;
  
  while(cont < n)
  {
    ptr[cont] = (unsigned char)'\0';
    cont++;
  }
  return s;  
}