/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_next_level.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 08:47:22 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/21 10:27:06 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_tailleres(int nb, int len)
{
	int		res;

	res = 0;
	while (nb >= len)
	{
		res++;
		nb /= len;
	}
	return (res);
}

char			*ft_itoa_base_next_level(int nb, char *base)
{
	int		len;
	char	*res;
	int		tmp;
	int		i;

	i = 0;
	tmp = nb;
	len = ft_strlen(base);
	res = (char*)malloc(ft_tailleres(nb, len) + 1);
	while (tmp >= len)
	{
		res[i] = base[tmp % len];
		tmp /= len;
		i++;
	}
	res[i] = base[tmp];
	res = ft_strrev(res);
	res[i + 1] = '\0';
	return (res);
}
