/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 11:25:28 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/17 15:34:07 by mcolas-d         ###   ########.fr       */
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

char	***ctab(char *av)
{
	int		i;
	int		nb;
	char	***res;
	int		j;

	i = 0;
	nb = nbtab(av);
	res = (char***)malloc(nb);
	while (i < nb)
	{
		j = 0;
		res[i] = (char**)malloc(4);
		while (j < 4)
		{
			res[i][j] = (char*)malloc(5);
			j++;
		}
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

void	ft_remplir(char ***vide, char *av)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			k = 0;
			while (k < 4)
			{
				printf("%d\n", ft_strlen(av));
				printf("%d\n", av[i * 4 + j * 4 + k]);
				vide[i][j][k] = av[i * 4 + j * 4 + k];
				k++;
			}
			j++;
		}
		i++;
	}
}
