/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:31:51 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/04 15:49:36 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_header.h"

int		test_ft_memset(void)
{
	char	tab1[10] = "1234567890";
	char	tab2[5] = "hgjfd";
	char	tab3[2] = "^&";

	if (ft_strcmp(ft_memset(tab1, 't', 5), memset(tab1, 't', 5)) == 0 && ft_strcmp(ft_memset(tab2, 'r', 4), memset(tab2, 'r', 4)) == 0 && ft_strcmp(ft_memset(tab3, 'b', 0), memset(tab3, 'b', 0)) == 0)
		return (0);
	return (1);
}
