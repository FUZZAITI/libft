#include <unistd.h>

void    *ft_memset(char *b, int c, size_t len)
{ 
  size_t cont = 0;
  unsigned char *ptr = (unsigned char *)b;
  
  while(cont < len)
  {
    ptr[cont] = (unsigned char)c;
    cont++;
  }
  return b;
}