/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 12:50:14 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/12/20 05:47:52 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_resolve(t_etri *piece, int nb)
{
	char	*res;
	int		n;

	n = 1;
	res = NULL;
	while (n == 1)
	{
		if (!(res = (char*)malloc(nb * nb + 1)) || n == 2)
			return ;
		ft_complete(res, nb);
		n = ft_complete_square(nb, piece, res);
		nb++;
		if (n == 1)
			free(res);
	}
	ft_putstr(res);
}

int		ft_complete_square(int nb, t_etri *piece, char *res)
{
	int		i;
	t_coord *pos;

	pos = (t_coord*)malloc(sizeof(t_coord));
	pos->x = 0;
	pos->y = 0;
	i = 0;
	if (piece == NULL)
		return (0);
	while (i < nb * nb)
	{
		if (ft_available(piece, pos, res, nb) == 0 && res[i] == '.')
		{
			ft_setup(piece, pos, res, nb);
			if (ft_complete_square(nb, piece->next, res) == 0)
				return (0);
			ft_erase(piece, pos, res, nb);
		}
		pos->x = pos->x + 1;
		if (pos->x == nb + 1)
			ft_cut(pos);
		i++;
	}
	free(pos);
	return (1);
}

int		ft_available(t_etri *piece, t_coord *pos, char *res, int nb)
{
	int		k;

	k = 0;
	if (res[(pos->x - piece->v1.x) + (nb + 1) * (pos->y - piece->v1.y)] == '.')
		k++;
	if (res[(pos->x - piece->v2.x) + (nb + 1) * (pos->y - piece->v2.y)] == '.')
		k++;
	if (res[(pos->x - piece->v3.x) + (nb + 1) * (pos->y - piece->v3.y)] == '.')
		k++;
	if (k == 3)
		return (0);
	return (1);
}

void	ft_setup(t_etri *piece, t_coord *pos, char *res, int nb)
{
	res[pos->x + (nb + 1) * pos->y] = piece->c;
	res[(pos->x - piece->v1.x) + (nb + 1) * (pos->y - piece->v1.y)] = piece->c;
	res[(pos->x - piece->v2.x) + (nb + 1) * (pos->y - piece->v2.y)] = piece->c;
	res[(pos->x - piece->v3.x) + (nb + 1) * (pos->y - piece->v3.y)] = piece->c;
}

void	ft_erase(t_etri *piece, t_coord *pos, char *res, int nb)
{
	res[pos->x + (nb + 1) * pos->y] = '.';
	res[(pos->x - piece->v1.x) + (nb + 1) * (pos->y - piece->v1.y)] = '.';
	res[(pos->x - piece->v2.x) + (nb + 1) * (pos->y - piece->v2.y)] = '.';
	res[(pos->x - piece->v3.x) + (nb + 1) * (pos->y - piece->v3.y)] = '.';
}
