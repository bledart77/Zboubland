/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 10:16:20 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/07 09:45:59 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char		*s1;
	char		*s2;

	i = 0;
	s1 = (char*)dest;
	s2 = (char*)src;
	while (i < n || s2[i] != c)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dest);
}
