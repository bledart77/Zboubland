/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 08:58:51 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/07 09:04:51 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		fin;

	i = 0;
	while (dest[i] && i < size)
		i++;
	fin = i;
	while (src[i - fin] && i < size)
	{
		dest[i] = src[i - fin];
		i++;
	}
	if (fin < size)
		dest[i] = '\0';
	return (fin + ft_strlen((char*)src));
}
