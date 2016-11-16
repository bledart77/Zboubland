/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 08:58:51 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/09 15:49:03 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		tmp;

	i = 0;
	while (src[i])
		i++;
	tmp = i;
	i = 0;
	while (dest[i] && i < size)
		i++;
	tmp += (i < size) ? i : size;
	if (((int)size - ft_strlen(dest) - 1) > 0)
		ft_strncat(dest, (char*)src, size - ft_strlen(dest) - 1);
	return (tmp);
}
