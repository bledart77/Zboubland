/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 15:35:14 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/24 13:50:08 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_test1(char *av) // teste le nombre d'argument
{
	if (nbtab(av) == 0 || nbtab(av) > 26)
		return (0);
	return (1);
}

int		ft_test2(char *av) // teste si les pieces sont bien des carres de 4x4 avec un \n entre chaque
{
	int		i;
	int		j;
	int		nb;

	i = 0;
	nb = nbtab(av);
	while (i < nb)
	{
		j = 1;
		while (j <= 4)
		{
			if (av[i * 21 + 4 * j + (j - 1)] != '\n')
				return (0);
			j++;
		}
		if (i != nb -1)
		{
			if (av[20 * (i + 1) + i] != '\n')
				return (0);
		}
		i++;
	}
	return (1);
}

int		ft_test3(char *av) // teste si il y a bien 4 # par pieces
{
	int		i;
	int		cnt;
	int		j;

	i = 0;
	while (i < nbtab(av))
	{
		j = 0;
		cnt = 0;
		while (j < 21)
		{
			if (av[21 * i + j] == '#')
				cnt++;
			j++;
		}
		if (cnt != 4)
			return (0);
		i++;
	}
	return (1);
}

int		ft_test42(char *av) // verifie si le tetris est conforme (on rentre piece par piece)
{
	int		res;

	res = 0;
	if (*av == '#')
	{
		if (av - 1)
		{
		if (*av - 1 == '#')
			res++;
		}
		if (av - 1)
		{
			if (*av - 1 == '#')
				res++;
		}
	}
	return (res);
}

int		ft_test41(char *av) // verifie si le tetris est conforme (on rentre piece par piece)
{
	int		res;

	res = 0;
	if (*av == '#')
	{
		if (*av + 5)
		{
			printf("%s\n", av);
			if (*av + 5 == '#')
				res++;
		}
		if (*av - 5)
		{
			if (*av - 5 == '#')
				res++;
		}
	}
	return (res);
}
