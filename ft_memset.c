/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinhei <pepinhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:40:37 by pepinhei          #+#    #+#             */
/*   Updated: 2025/07/22 13:06:48 by pepinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(char *b, int c, size_t len)
{
	size_t	cont;
	unsigned char *ptr = (unsigned char *)b;

	cont = 0;
	while (cont < len)
	{
		ptr[cont] = (unsigned char)c;
		cont++;
	}
	return (b);
}
