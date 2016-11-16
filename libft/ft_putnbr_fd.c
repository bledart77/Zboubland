/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:07:40 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/16 10:53:25 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_fd(int nb, int fd)
{
	char			c;
	unsigned int	weight;

	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	weight = 1;
	while ((unsigned int)nb / 10 / weight != 0)
		weight *= 10;
	while (weight != 0)
	{
		c = (char)(((unsigned int)nb / weight) % 10) + '0';
		write(fd, &c, 1);
		weight /= 10;
	}
}
