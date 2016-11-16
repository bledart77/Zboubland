/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 13:05:24 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/16 12:21:11 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int tab[3];

	tab[0] = 0;
	tab[1] = 0;
	tab[2] = 0;
	if (to_find[tab[0]] == 0)
		return ((char*)str);
	while (str[tab[0]])
	{
		if (str[tab[0]] == to_find[0])
		{
			while (to_find[tab[1]])
			{
				if (str[tab[0] + tab[1]] == to_find[tab[1]])
					tab[2]++;
				tab[1]++;
			}
			if (tab[2] == tab[1] && tab[2] != 0)
				return ((char*)&str[tab[0]]);
			tab[2] = 0;
		}
		tab[1] = 0;
		tab[0]++;
	}
	return (0);
}
