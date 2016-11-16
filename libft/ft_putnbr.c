/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 17:48:46 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/16 11:00:33 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr(int nb)
{
	char				c;
	unsigned int		weight;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	weight = 1;
	while ((unsigned int)nb / 10 / weight != 0)
		weight *= 10;
	while (weight != 0)
	{
		c = (char)(((unsigned int)nb / weight) % 10) + '0';
		write(1, &c, 1);
		weight /= 10;
	}
}
