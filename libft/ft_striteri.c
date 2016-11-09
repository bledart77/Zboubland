/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 09:45:32 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/07 14:16:47 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *as, void (*f)(unsigned int, char *))
{
	unsigned int		i;

	i = 0;
	if (as != NULL && f != NULL)
		while (*as)
		{
			(*f)(i, as);
			i++;
			as++;
		}
}
