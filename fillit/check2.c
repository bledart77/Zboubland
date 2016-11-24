/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 11:36:27 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/24 14:00:17 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_test41(char *av, int i);
int		ft_test42(char *av, int i);

int		ft_test4(char *av)
{
	int		i;

	i = 0;
	while (av[i])
	{
		if (av[i] == '#')
		{
			//printf("%d\n", ft_test41(av) + ft_test42(av));
			if (ft_test41(av, i) + ft_test42(av, i) > 2)
			;
		}
		i++;
	}
	return (1);
}

int		ft_test5(char *av)			//verifie si il n'y a pas autre chose que des # des \n ou des . dans les pieces
{
	while(*av)
	{
		if (*av != '#'&& *av != '\n' && *av != '.')
			return (0);
		av++;
	}
	return (1);
}
