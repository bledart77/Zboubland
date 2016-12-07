/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 11:36:27 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/12/07 05:35:46 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_test5(char *av)
{
	while (*av)
	{
		if (*av != '#' && *av != '\n' && *av != '.')
			return (0);
		av++;
	}
	return (1);
}

int		ft_finaltest(char *av)
{
	if (ft_test6(av) == 1 && ft_test5(av) == 1 && ft_test1(av) == 1 \
		&& ft_test2(av) == 1 && ft_test3(av) == 1)
		return (1);
	return (0);
}

int		ft_test6(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#')
			if (!(ft_nei(str, i)))
				return (0);
		i++;
	}
	return (1);
}

int		ft_nei(char *str, int i)
{
	if (ft_test41(str, i) + ft_test42(str, i) > 0)
		return (1);
	return (0);
}
