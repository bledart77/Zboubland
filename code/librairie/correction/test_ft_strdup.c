/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 09:40:37 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/04 09:54:45 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_header.h"

int		test_ft_strdup(void)
{
	char	*tab1, *tab2, *tab3;
	tab1 = "45";
	tab2 = "egyudiuvfe4658@#%^&*()^%$#";
	tab3 ="uehidein			ioeiccei";
	if (ft_strcmp(ft_strdup(tab1), tab1) == 0 && ft_strcmp(ft_strdup(tab2), tab2) == 0 && ft_strcmp(ft_strdup(tab3), tab3) == 0)
		return (0);
	return (1);
}
