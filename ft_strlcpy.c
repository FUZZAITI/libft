/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinhei <pepinhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:41:01 by pepinhei          #+#    #+#             */
/*   Updated: 2025/07/22 12:49:14 by pepinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dest, const char	*src, size_t	size)
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