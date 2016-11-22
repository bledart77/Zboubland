/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 11:25:28 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/21 11:29:48 by mcolas-d         ###   ########.fr       */
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


