/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 17:48:46 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/07 09:48:42 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		truc(char c)
{
	write(1, &c, 1);
}

void			ft_putnbr(int nb)
{
	unsigned int	n;
	char			res;

	n = nb;
	if (nb < 0)
	{
		write(1, (char*)'-', 1);
		n = -nb;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		truc(n + '0');
}
