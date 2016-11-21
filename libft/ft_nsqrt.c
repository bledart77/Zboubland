/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nsqrt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 08:35:15 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/21 08:41:42 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nsqrt(int nb, int n)
{
	int		i;
	int		j;
	int		tmp;
	int		tmp2;

	i = 0;
	tmp = 0;
	while (i < nb)
	{
		tmp = i;
		j = 1;
		tmp2 = i;
		while (j < n)
		{
			tmp *= tmp;
			j++;
		}
		if (tmp == nb)
			return (tmp2);
		i++;
	}
	return (0);
}
