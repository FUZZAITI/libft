/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinhei <pepinhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:42:16 by pepinhei          #+#    #+#             */
/*   Updated: 2025/07/22 11:14:47 by pepinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> 

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char		*p = (const unsigned char *)s1;
	const unsigned char		*o = (const unsigned char *)s2;
	size_t		i;

	i = 0;
	while (i < n && (p[i] != '\0' || o[i] != '\0'))
	{
		if (p[i] != o[i])
			return (p[i] - o[i]);
		i++;
	}
	return (0);
}
