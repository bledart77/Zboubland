/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 11:36:27 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/28 10:39:29 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_test4(char *av)
{
	int		i;
	int		res;

	res = 0;
	i = 0;
	while (av[i])
	{
		if (av[i] == '#')
			res += ft_test41(av, i) + ft_test42(av, i);
		i++;
	}
	if (res % 6 == 0)
		return (1);
	return (0);
}

int		ft_test5(char *av)
{
	while(*av)
	{
		if (*av != '#'&& *av != '\n' && *av != '.')
			return (0);
		av++;
	}
	return (1);
}

int		ft_finaltest(char *av)
{
	if (ft_test4(av) == 1 && ft_test5(av) == 1 && ft_test1(av) == 1 \
		&& ft_test2(av) == 1 && ft_test3(av) == 1)
		return (1);
	return (0);
}
