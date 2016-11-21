/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 09:46:33 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/17 15:29:28 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_replace(char **av, char c)
{
	int		i;
	int		j;

	i = 0;
	while (av[i] != NULL)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if (av[i][j] == '#')
				av[i][j] = c;
			j++;
		}
		i++;
	}
}

void	ft_replacett(char ***av)
{
	int		i;
	char	*tab;

	i = 0;
	while (i < 26)
	{
		tab[i] = i + 'A';
		i++;
	}
	i = 0;
	while (av[i] != NULL)
	{
		ft_replace(av[i], tab[i]);
		i++;
	}
}

int		ft_libre(int x, int y, char **av)
{
	if (av[x][y] == '.')
		return (1);
	return (0);
}

int		ft_libref(int *x, int *y, char **av)
{
	int		i;
	int		cnt;

	i = 0;
	cnt = 0;
	while (i < 4)
	{
		cnt += ft_libre(x[i], y[i], av);
		i++;
	}
	if (cnt == 4)
		return (1);
	return (0);
}

char	*ft_lire(char *av)
{
	int		i;
	int		fd;
	char	buff;
	char	*res;

	i = 0;
	res = malloc(546);
	fd = open(av, O_RDONLY);
	while (read(fd, &buff, 1))
	{
		res[i] = buff;
		i++;
	}
	res[i] = '\0';
	return (res);
}
