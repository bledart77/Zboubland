/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:07:40 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/07 09:49:29 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		truc(char c, int fd)
{
	write(fd, &c, 1);
}

void			ft_putnbr_fd(int nb, int fd)
{
	unsigned int	n;
	char			res;

	n = nb;
	if (nb < 0)
	{
		write(fd, (char*)'-', 1);
		n = -nb;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		truc(n + '0', fd);
}
