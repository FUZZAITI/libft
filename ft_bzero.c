/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinhei <pepinhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:39:03 by pepinhei          #+#    #+#             */
/*   Updated: 2025/07/22 10:37:37 by pepinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
