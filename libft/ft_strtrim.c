/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 11:40:58 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/07 09:53:31 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_trimlen(char *w)
{
	int		space;
	int		len;
	int		i;

	i = 0;
	space = 0;
	len = ft_strlen(w);
	while ((w[i] == ' ' || w[i] == ',' || w[i] == '\t' || w[i] == '\n') && w[i])
	{
		space++;
		i++;
	}
	if (w[i] != '\0')
	{
		i = len - 1;
		while ((w[i] == ' ' || w[i] == ',' || w[i] == '\t'
				|| w[i] == '\n') && w[i])
		{
			i--;
			space++;
		}
	}
	return (len - space);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*w;
	char	*res;

	j = 0;
	w = (char*)s;
	i = 0;
	if (!(res = (char*)malloc(sizeof(res) * ft_trimlen(w) + 1)))
		return (NULL);
	while ((w[i] == ' ' || w[i] == ',' || w[i] == '\t' || w[i] == '\n') && s[i])
		i++;
	while (j < ft_trimlen(w))
	{
		res[j] = w[i];
		j++;
		i++;
	}
	return (res);
}
