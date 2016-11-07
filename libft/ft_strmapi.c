/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 09:48:32 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/07 09:50:43 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	int					length;
	char				*res;

	length = ft_strlen((char*)s);
	if (!(res = (char*)malloc(sizeof(res) * length)))
		return (NULL);
	while (i < (unsigned int)length)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
