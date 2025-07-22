/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinhei <pepinhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:40:54 by pepinhei          #+#    #+#             */
/*   Updated: 2025/07/22 12:49:04 by pepinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	size)
{
	size_t	cont;

	char str[] = "olamun";
	cont = 0;
	while (str[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}
