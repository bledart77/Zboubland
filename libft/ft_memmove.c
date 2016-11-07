/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 10:21:50 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/06 10:27:38 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*s1;
	char		*s2;
	char		*tmp;

	i = 0;
	s1 = (char*)dest;
	s2 = (char*)src;
	while (i < n)
	{
		tmp[i] = s2[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		s1[i] = tmp[i];
		i++;
	}
	return (dest);
}
