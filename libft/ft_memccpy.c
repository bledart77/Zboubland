/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 10:16:20 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/09 15:46:24 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*s1;
	unsigned char		*s2;
	unsigned char		c1;

	c1 = c;
	i = 0;
	s1 = (unsigned char*)dest;
	s2 = (unsigned char*)src;
	if (n == 0)
		return (NULL);
	if (s1 == s2)
		return (s1);
	while (i < n)
	{
		s1[i] = s2[i];
		if (s1[i] == c1)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
