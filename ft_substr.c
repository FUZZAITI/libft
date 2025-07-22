/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinhei <pepinhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:42:33 by pepinhei          #+#    #+#             */
/*   Updated: 2025/07/22 11:27:33 by pepinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_substr(const char *str, size_t start, size_t len)
{
	size_t		i;
	size_t		tam;
	char		*sub;

	i = 0;
	tam = 0;
	while (str[tam] != '\0')
	{
		tam++;
	}
	if (start >= tam)
		return (strdup(""));
	if (start + len > tam)
		len = tam - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = str[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
