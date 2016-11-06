/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 09:08:53 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/04 09:19:31 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_header.h"

int		test_ft_strcmp(void)
{
	char	*tab1, *tab2, *tab3, *tab4, *tab5, *tab6;
	tab1 = "vdssfsdghjk";
	tab2 = "eftwyu";
	tab3 = "vdgcdhjsbytfcbssduyckj8494#%^";
	tab4 = "";
	tab5 = "";
	tab6 = "ghghdj";
	if (ft_strcmp(tab1, tab2) == strcmp(tab1, tab2) && ft_strcmp(tab1, tab3) == strcmp(tab1, tab3) && ft_strcmp(tab1, tab1) ==  strcmp(tab1, tab1) && ft_strcmp(tab1, tab4) == strcmp(tab1,tab4) && ft_strcmp(tab1, tab6) == strcmp(tab1, tab6) && ft_strcmp(tab2 , tab3) == strcmp(tab2, tab3) && ft_strcmp(tab4, tab5) == strcmp(tab4, tab5))
		return (0);
	return (1);
}
