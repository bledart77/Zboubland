/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:33:12 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/04 15:28:08 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_header.h"

int		test_ft_strstr(void)
{
	char	*tab1, *tab2, *tab3, *tab4;
	tab1 = "uifegbajdjvhdjckchiudgejhdasycgvhbse fyewgbe845156bvdfk";
	tab2 = "gfyeuachbiyehvnesavosyudcghbsjancbsyuj8451754";
	tab3 = "jhda";
	tab4 = "vosy";
	if (ft_strcmp(ft_strstr(tab1, tab3), strstr(tab1, tab3)) == 0 && (ft_strstr(tab1, tab4) == NULL && strstr(tab1,tab4) == NULL) && (ft_strstr(tab2, tab3) == NULL && strstr(tab2, tab3) == NULL) && ft_strcmp(ft_strstr(tab2, tab4), strstr(tab2, tab4)) == 0)
		return (0);
	return (1);
}
