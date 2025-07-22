/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinhei <pepinhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:40:48 by pepinhei          #+#    #+#             */
/*   Updated: 2025/07/22 09:40:49 by pepinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char *ft_strdup(const  char *s)
{
  char* dest;
  size_t i = 0;
  
  while (s[i] != '\0')
  {
    i++;
  }
  dest = (char *)malloc(i * sizeof(char)+1);
  i = 0;
  while(s[i] != '\0')
  {
    dest[i] = s[i];
    i++;
  }
  
  dest[i] = '\0';
  
  return dest;
}