/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:26:53 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/04 13:33:03 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_header.h"

int		test_ft_atoi(void)
{
	char	*tab1, *tab2, *tab3, *tab4;
	tab1 = "-456hvbdj45";
	tab2 = "+123cydsvhbjsionujhk";
	tab3 = "-vsdiug45465jb";
	tab4 = "yhjbibkhjkm";
	if (ft_atoi(tab1) == atoi(tab1) && ft_atoi(tab2) == atoi(tab2) && ft_atoi(tab3) == atoi(tab3) && ft_atoi(tab4) == atoi(tab4))
		return (0);
	return (1);
}
