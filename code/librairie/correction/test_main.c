/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 08:30:29 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/04 15:58:30 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_header.h"

int		main()
{
	if (test_ft_strlen() == 0)
		printf("ft_strlen bonne\n");
	else
		printf("ft_strlen fausse\n");
	if (test_ft_strcmp() == 0)
		printf("ft_strcmp bonne\n");
	else
		printf("ft_strcmp fausse");
	if (test_ft_strncmp() == 0)
		printf("ft_strncmp bonne\n");
	else
		printf("ft_strncmp fausse\n");
	if (test_ft_strdup() == 0)
		printf("ft_strdup bonne\n");
	else
		printf("ft_strdup fausse\n");
	if (test_ft_strcpy() == 0)
		printf("ft_strcpy bonne\n");
	else
		printf("ft_strcpy fausse\n");
	if (test_ft_strncpy() == 0)
		printf("ft_strncpy bonne\n");
	else
		printf("ft_strncpy fausse\n");
	if (test_ft_strcat() == 0)
		printf("ft_strcat bonne\n");
	else
		printf("ft_strcat fausse");
	if (test_ft_strncat() == 0)
		printf("ft_strncat bonne\n");
	else
		printf("ftstrncat fausse\n");
	if (test_ft_atoi() == 0)
		printf("ft_atoi bonne\n");
	else
		printf("ft_atoi fausse\n");
	if (test_ft_strstr() == 0)
		printf("ft_strstr bonne\n");
	else
		printf("ft_strstr fausse\n");
	if (test_ft_memset() == 0)
		printf("ft_memset bonne\n");
	else
		printf("ft_memset fausse\n");

	return (0);
}

