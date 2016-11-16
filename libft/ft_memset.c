/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:00:41 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/16 12:19:05 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char		*p;

	p = (unsigned char*)s;
	if (n == 0)
		return (s);
	while (n--)
	{
		*p = c;
		if (n)
			p++;
	}
	return (s);
}
