/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:35:38 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/07 09:46:27 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	int		negative;
	int		i;
	int		n2;

	n2 = n;
	i = 0;
	negative = 0;
	if (n < 0)
		negative = 1;
	while (n2 > 10)
	{
		n2 /= 10;
		i++;
	}
	if (!(res = (char*)malloc(sizeof(res) * i + 1)))
		return (NULL);
	while (i--)
	{
		res[i] = n % 10 + '0';
		n /= 10;
	}
	res[i] = '\0';
	return (res);
}
