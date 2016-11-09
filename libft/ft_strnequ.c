/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 08:49:03 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/07 14:46:08 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t taille)
{
	if (!s1 || !s2)
		return (0);
	return (ft_strncmp((char*)s1, (char*)s2, taille) ? 0 : 1);
}
