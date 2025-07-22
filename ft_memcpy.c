/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinhei <pepinhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:40:24 by pepinhei          #+#    #+#             */
/*   Updated: 2025/07/22 14:28:19 by pepinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				cur;
	unsigned char		*d2;
	unsigned char		*s2;

	if (dst == NULL && src == NULL)
		return (NULL);
	cur = 0;
	d2 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	while (cur < n)
	{
		d2[cur] = s2[cur];
		cur++;
	}
	return (dst);
}
