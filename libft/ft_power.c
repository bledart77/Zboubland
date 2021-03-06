/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 15:42:51 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/17 15:49:12 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_power(int nb, int pow)
{
	int		res;
	int		i;

	if (pow == 0)
		return (1);
	res = nb;
	i = 0;
	while (pow)
	{
		res *= nb;
		pow--;
	}
	return (res);
}
