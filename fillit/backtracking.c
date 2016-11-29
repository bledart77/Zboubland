/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 12:50:14 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/28 12:50:25 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_resolve(t_etri *piece, int nb)
{
	char	*res;

	res = NULL;
	while (res == NULL)
	{
		res = (char*)malloc(nb * nb + 1);
		ft_complete_square(nb, piece, res);
		nb++;
		if (res == NULL)
			free(res);
	}
	ft_putstr(res);
	return (1);
}

int		ft_complete_square(int nb, t_etri *piece, char *res)
{
	int		i;

	i = 0;
	if (piece == NULL)
		return (0);
	while (i < nb * nb)
	{
		if (ft_available(piece, i, res) == 0)
		{
			ft_setup(piece, i, res);
			if (ft_complete_square(nb, piece->next, res) == 0)
				return (0);
			ft_erase(piece, i, res);
		}
		i++;
	}
	return (1);
}

int		ft_available(t_etri *piece, int i, char *res)
{
	int		k;

	k = 0;
	if (res[piece->v1[0] + 5 * piece->v1[1]] == '.')
		k++;
	if (res[i] == '.')
		k++;
	if (res[piece->v2[0] + 5 * piece->v2[1]] == '.')
		k++;
	if (res[piece->v3[0] + 5 * piece->v3[1]] == '.')
		k++;
	if (k == 4)
		return (0);
	return (1);
}

void	ft_setup(t_etri *piece, int i, char *res)
{
	res[i] = piece->c;
	res[piece->v1[0] + 5 * piece->v1[1]] = piece->c;
	res[piece->v2[0] + 5 * piece->v2[1]] = piece->c;
	res[piece->v3[0] + 5 * piece->v3[1]] = piece->c;
}

void	ft_erase(t_etri *piece, int i, char *res)
{
	res[i] = '.';
	res[piece->v1[0] + 5 * piece->v1[1]] = '.';
	res[piece->v2[0] + 5 * piece->v2[1]] = '.';
	res[piece->v3[0] + 5 * piece->v3[1]] = '.';
}
