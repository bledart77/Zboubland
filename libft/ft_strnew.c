/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 09:50:23 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/16 12:20:58 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t taille)
{
	char	*res;
	int		i;

	i = 0;
	if (!(res = (char*)malloc(taille + 1)))
		return (NULL);
	ft_memset(res, (int)'\0', taille + 1);
	return (res);
}
