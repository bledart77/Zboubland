/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 15:54:13 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/17 16:02:57 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nsqrt(int nb, int n)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	tmp = 0;
	while (i < nb)
	{
		tmp = i;
		j = 2;
		while (j < n)
		{
			tmp *= tmp;
			j++;
		}
		if (tmp == nb)
			return (tmp);
		i++;
	}
	return (0);
}

int main()
{
	printf("%d\n", ft_nsqrt(9, 2));
	return (0);
}
