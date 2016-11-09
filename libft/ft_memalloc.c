/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 09:42:10 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/07 14:02:43 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t taille)
{
	void	*res;

	if (!(res = (void*)malloc(sizeof(res) * taille)))
		return (NULL);
	ft_bzero(res, taille);
	return (res);
}
