/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:06:45 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/09 14:32:40 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		truc(char c, int fd)
{
	write(fd, &c, 1);
}

void			ft_putstr_fd(const char *str, int fd)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		truc(str[i], fd);
		i++;
	}
}
