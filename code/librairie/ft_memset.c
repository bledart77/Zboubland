/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:00:41 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/04 15:58:37 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char		*p;
	size_t				i;

	i = 0;
	p = (unsigned char*)s;
	while (i < n && p[i])
	{
		p[i] = c;
		i++;
	}
	return (s);
}
