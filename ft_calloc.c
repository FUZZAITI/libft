/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinhei <pepinhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:39:25 by pepinhei          #+#    #+#             */
/*   Updated: 2025/07/22 12:49:25 by pepinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *ft_calloc(size_t num, size_t size)
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
