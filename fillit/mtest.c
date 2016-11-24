/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtest.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 15:36:59 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/24 12:33:08 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_test1(char *str);
int		ft_test2(char *str);
int		ft_test3(char *str);
int		ft_test4(char *str);
int		ft_test5(char *str);
int		ft_test6(char *str);

int		main(int ac, char **av)
{
	char	*res;

	ac = 2;
	res = ft_lire(av[1]);
	printf("%d\n%d\n%d\n%d\n%d\n", ft_test1(res), ft_test2(res), ft_test3(res), ft_test4(res), ft_test5(res));
	return (0);
}
