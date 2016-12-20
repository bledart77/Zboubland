/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 11:25:28 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/12/20 03:47:49 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		nbtab(char *av)
{
	int		i;
	int		res;

	i = 0;
	res = 1;
	while (av[i + 1])
	{
		if (av[i] == '\n' && av[i + 1] == '\n')
			res++;
		i++;
	}
	if (res > 1)
		res = res - 1;
	return (res);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_sqrtv2(int nb)
{
	int		i;

	i = 1;
	while (i * i <= nb)
		i++;
	return (i);
}

int		ft_minsquare(char *av)
{
	int		n;
	int		res;

	n = nbtab(av);
	if (n == 1)
		return (2);
	res = n * 4;
	res = ft_sqrtv2(res);
	return (res);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
