/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 08:26:51 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/07 13:08:57 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*res;

	i = 0;
	res = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!res)
		return (NULL);
	while (i < ft_strlen(src))
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
