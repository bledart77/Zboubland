/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 11:14:29 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/07 09:52:50 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	unsigned int		i;
	char				*res;

	i = i;
	if (!(res = (char*)malloc(sizeof(res) * len)))
		return (NULL);
	while ((size_t)i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	return (res);
}
