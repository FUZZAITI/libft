/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinhei <pepinhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:40:54 by pepinhei          #+#    #+#             */
/*   Updated: 2025/07/22 10:37:45 by pepinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcat(char	*dst, const char	*src, size_t	size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst >= size)
		return (size + len_src);
	while (len_dst + 1 < size && src[i])
	{
		dst[len_dst] = src[i];
		i++;
		len_dst++;
	}
	len_src -= i;
	dst[len_dst] = '\0';
	return (len_dst + len_src);
}
