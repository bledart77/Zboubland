/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 09:08:53 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/04 11:19:04 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_header.h"

int		test_ft_strncmp(void)
{
	char	*tab1, *tab2, *tab3, *tab4, *tab5, *tab6;
	tab1 = "vdssfsdghjk";
	tab2 = "eftwyu";
	tab3 = "vdgcdhjsbytfcbssduyckj8494#%^";
	tab4 = "";
	tab5 = "";
	tab6 = "ghghdj";
	if (ft_strncmp(tab1, tab2, 5) == strncmp(tab1, tab2, 5) && ft_strncmp(tab1, tab3, 8) == strncmp(tab1, tab3, 8) && ft_strncmp(tab1, tab1, 2) ==  strncmp(tab1, tab1, 2) && ft_strncmp(tab1, tab4, 5) == strncmp(tab1,tab4, 5) && ft_strncmp(tab1, tab6, 2) == strncmp(tab1, tab6, 2) && ft_strncmp(tab2 , tab3, 8) == strncmp(tab2, tab3, 8) && ft_strncmp(tab4, tab5, 2) == strncmp(tab4, tab5, 2))
		return (0);
	return (1);
}
