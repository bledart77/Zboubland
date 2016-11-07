/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 11:30:01 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/07 09:49:55 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		l1;
	int		l2;
	char	*res;
	int		i;

	i = 0;
	l1 = ft_strlen((char*)s1);
	l2 = ft_strlen((char*)s2);
	if (!(res = (char*)malloc(sizeof(res) * (l1 + l2) + 1)))
		return (NULL);
	while (i < l1)
	{
		res[i] = (char)s1[i];
		i++;
	}
	while (i < l2)
	{
		res[i] = (char)s2[i - l1];
		i++;
	}
	res[i] = '\0';
	return (res);
}
