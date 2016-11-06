/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 10:28:01 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/04 11:03:46 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_header.h"

int		test_ft_strncpy(void)
{
	char	*tab1, tab11[16];
	tab1 = "htkrlugpogfh$%^";
	if (ft_strcmp(ft_strncpy(tab11, tab1, 5), strncpy(tab11, tab1, 5)) == 0 && ft_strcmp(ft_strncpy(tab11, tab1, 12), strncpy(tab11, tab1, 12)) == 0 && ft_strcmp(ft_strncpy(tab11, tab1, 16), strncpy(tab11, tab1, 16)) == 0 && ft_strcmp(ft_strncpy(tab11, tab1, 0), strncpy(tab11, tab1, 0)) == 0)
		return (0);
	return (1);
}
