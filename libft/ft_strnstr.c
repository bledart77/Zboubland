/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 09:27:19 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/07 09:52:22 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (*s2 == '\0')
		return ((char*)s1);
	while (*s1 && n)
	{
		if (*s1 == s2[i])
			i++;
		else
			i = 0;
		if (s2[i] == '\0')
			return ((char*)(s1 - i + 1));
		s1++;
		n--;
	}
	return (NULL);
}
