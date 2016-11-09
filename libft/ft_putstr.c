/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 10:24:07 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/09 14:32:22 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		truc(char c)
{
	write(1, &c, 1);
}

void			ft_putstr(const char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		truc(str[i]);
		i++;
	}
}
