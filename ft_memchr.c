/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinhei <pepinhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:40:11 by pepinhei          #+#    #+#             */
/*   Updated: 2025/07/22 11:01:25 by pepinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	const unsigned char *p = (const unsigned char *)ptr;
	size_t	i;

	i = 0;
	while (i < num)
	{
		if (p[i] == (unsigned char)value)
			return ((void *)(p + i));
		i++;
	}
	return (0);
}
