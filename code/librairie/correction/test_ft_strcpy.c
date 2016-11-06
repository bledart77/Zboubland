/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 10:06:25 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/04 10:28:55 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_header.h"

int		test_ft_strcpy(void)
{
	char	*tab1, *tab2, *tab3, tab11[7], tab22[16], tab[1];
	tab1 = "wygdus";
	tab2 = "gyujwd@#^&*(*&^";
	tab3 = "";
	if (ft_strcmp(ft_strcpy(tab11, tab1), strcpy(tab11, tab1)) == 0 && ft_strcmp(ft_strcpy(tab22, tab2), strcpy(tab22, tab2)) == 0 && ft_strcmp(ft_strcpy(tab, tab3), strcpy(tab, tab3)) == 0)
		return (0);
	return (1);
}
