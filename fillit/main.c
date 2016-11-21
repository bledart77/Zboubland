/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 14:08:32 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/17 15:33:56 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	char	*res;
	char	***ff;

	res = ft_lire(av[1]);
	ff = ctab(res);
	printf("%d\n", ft_strlen(av));
	ft_remplir(ff, res);
	printf("%s\n", ff[0][0]);
	return (0);
}
