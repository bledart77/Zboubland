/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 09:08:15 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/07 13:04:46 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen((char*)s) + 1;
	while (i--)
	{
		if (s[i] == c)
			return ((char*)(s + i));
	}
	if (s[i] == c)
		return ((char*)(s + i));
	return (NULL);
}
