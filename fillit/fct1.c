/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 09:46:33 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/12/07 05:37:47 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_read(char *av)
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

void	ft_complete(char *str, int nb)
{
	int		i;
	int		j;

	i = 0;
	while (i < nb)
	{
		j = 0;
		while (j < nb)
		{
			str[j + i * (nb + 1)] = '.';
			j++;
		}
		str[j + i * (nb + 1)] = '\n';
		i++;
	}
	str[i * nb + nb] = '\0';
}
