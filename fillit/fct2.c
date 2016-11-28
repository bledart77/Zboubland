/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 11:25:28 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/28 11:59:44 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		nbtab(char *av)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (av[i + 1])
	{
		if (av[i] == '\n' && av[i + 1] == '\n')
			res++;
		i++;
	}
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
