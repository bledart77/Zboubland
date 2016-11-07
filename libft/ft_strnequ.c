/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 08:49:03 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/07 08:49:14 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t taille)
{
	size_t		i;

	i = 0;
	while (s1[i] && s2[i] && i < taille)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (!s1[i] || !s2[i])
		return (0);
	return (1);
}
