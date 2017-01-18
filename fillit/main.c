/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 14:08:32 by mcolas-d          #+#    #+#             */
/*   Updated: 2017/01/16 10:22:25 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	char	*res;
	t_etri	*pieces;

	if (ac != 2)
	{
		write(1, "usage: ./fillit list_tetriminos\n", 33);
		return (1);
	}
	res = ft_read(av[1]);
	if (ft_finaltest(res) == 0 || ac != 2)
	{
		write(1, "error\n", 6);
		return (0);
	}
	pieces = tetri_construct(res, 'A');
	ft_resolve(pieces, ft_minsquare(res));
	return (0);
}
