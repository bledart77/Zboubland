/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:35:38 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/09 13:58:21 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t get_str_len(int n)
{
	size_t		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char			*res;
	size_t			len;
	unsigned int	n2;

	len = get_str_len(n);
	n2 = n;
	if (n < 0)
	{
		n2 = -n;
		len++;
	}
	if (!(res = ft_strnew(len)))
		return (NULL);
	res[--len] = n2 % 10 + '0';
	while (n2 /= 10)
		res[--len] = n2 % 10 + '0';
	if (n < 0)
		res[0] = '-';
	return (res);
}
