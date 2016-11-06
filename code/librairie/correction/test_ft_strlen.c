/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 08:22:35 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/04 08:58:36 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_header.h"

int		test_ft_strlen(void)
{
	char	*tab1 = "123456";
	char	*tab2 = "hgjldgfebtfu";
	char	*tab3 = "";
	if (ft_strlen(tab1) == 6 && ft_strlen(tab2) == 12 && ft_strlen(tab3) == 0)
		return (0);
	return (1);
}
