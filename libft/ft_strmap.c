/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 09:46:12 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/16 12:20:39 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	int		length;
	char	*res;

	i = 0;
	if (!s || !f)
		return (NULL);
	length = ft_strlen((char*)s);
	if (!(res = (char*)malloc(length + 1)))
		return (NULL);
	while (i < length)
	{
		res[i] = (*f)(s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
