/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinhei <pepinhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:40:54 by pepinhei          #+#    #+#             */
/*   Updated: 2025/07/22 18:26:55 by pepinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		x;

	i = 0;
	x = 0;
	while (dst[i] != '\0')
		i++;
	while (src[x] != '\0')
		x++;
	if (size > x)
	{	
		while (src[x] != '\0')
		{
			if (i < size - 1)
				dst[i] = src[x];
			i++;
			x++;
		}
		return (i);
	}
	return (i + x);
}
