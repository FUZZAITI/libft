#include <stdio.h>

size_t ft_strlen(char *str)
{
  size_t cont = 0;
  
  while (str[cont] != '\0')
  {
    cont++;  
  }
  return cont;
}