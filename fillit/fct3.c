/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 22:08:06 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/12/07 05:39:02 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_cut(t_coord *pos)
{
	pos->x = 0;
	pos->y = pos->y + 1;
}

int		ft_test(t_coord *pos, t_etri *piece, int nb)
{
	int		n1;
	int		n2;
	int		n3;

	n1 = (pos->x - piece->v1.x) + (nb + 1) * (pos->y - piece->v1.y);
	n2 = (pos->x - piece->v2.x) + (nb + 1) * (pos->y - piece->v2.y);
	n3 = (pos->x - piece->v3.x) + (nb + 1) * (pos->y - piece->v3.y);
	if (0 <= n1 && 0 <= n2 && 0 <= n3 && nb * nb > n1 && nb * nb > n2 &&
			nb * nb > n3)
		return (0);
	return (1);
}
