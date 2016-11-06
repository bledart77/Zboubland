/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:19:16 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/04 11:40:57 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_header.h"

int		test_ft_strcat(void)
{
	int		i = 0;
	char	*tab1, *tab2, *tab3, *tab11, *tab22, *tab33;
	tab11 = (char*)malloc(sizeof(tab11) * 30);
	tab22 = (char*)malloc(sizeof(tab22) * 30);
	tab33 = (char*)malloc(sizeof(tab33) * 30);
	while (i < 5)
	{
		tab11[i] = 't';
		tab22[i] = 'y';
		tab33[i] = 'u';
		i++;
	}
	tab11[i] = '\0';
	tab22[i] = '\0';
	tab33[i] = '\0';
	tab1 = "wevgeuhid";
	tab2 = "tfwdvgbsoiugi";
	tab3 = "ewcvbs!@#$%^&(*&^%";
	if (ft_strcmp(ft_strcat(tab11, tab1), strcat(tab11, tab1)) == 0 && ft_strcmp(ft_strcat(tab33, tab3), strcat(tab33, tab3)) == 0 && ft_strcmp(ft_strcat(tab22, tab3), strcat(tab22, tab3)) == 0)
		return (0);
	else
		return (1);
}
