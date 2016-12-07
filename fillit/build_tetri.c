/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_tetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 16:14:51 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/12/07 02:04:26 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	tetri_add(t_etri **lst_tetri, t_etri *new_tetri)
{
	new_tetri->next = *lst_tetri;
	*lst_tetri = new_tetri;
}

int		found_newline(char *str, t_coord *pos)
{
	if (*str == '\0' || (pos->x == 0 && pos->y == 0))
		return (0);
	if (pos->y == 3)
	{
		pos->x = 0;
		pos->y = 0;
	}
	else
	{
		pos->x = 0;
		pos->y = pos->y + 1;
	}
	return (1);
}

void	found_sharp(int *nb_case_found, t_etri *tetri,
		t_coord *first_case, t_coord *pos)
{
	if (*nb_case_found == 0)
	{
		first_case->x = pos->x;
		first_case->y = pos->y;
	}
	else
	{
		if (*nb_case_found == 1)
		{
			tetri->v1.x = first_case->x - pos->x;
			tetri->v1.y = first_case->y - pos->y;
		}
		else if (*nb_case_found == 2)
		{
			tetri->v2.x = first_case->x - pos->x;
			tetri->v2.y = first_case->y - pos->y;
		}
		else if (*nb_case_found == 3)
		{
			tetri->v3.x = first_case->x - pos->x;
			tetri->v3.y = first_case->y - pos->y;
		}
	}
	pos->x = pos->x + 1;
	*nb_case_found = *nb_case_found + 1;
}

char	*loop_on_str(char *str, t_coord *first_case, t_etri *tetri)
{
	t_coord	*pos;
	int		nb_case_found;

	pos = (t_coord *)malloc(sizeof(t_coord));
	pos->x = 0;
	pos->y = 0;
	nb_case_found = 0;
	while (*str)
	{
		if (*str == '\n')
		{
			if (found_newline(str, pos) == 0)
				break ;
		}
		else if (*str == '#')
			found_sharp(&nb_case_found, tetri, first_case, pos);
		else
			pos->x = pos->x + 1;
		str++;
	}
	return (str);
}

t_etri	*tetri_construct(char *str, char c)
{
	t_coord	*first_case;
	t_coord	*pos;
	t_etri	*tetri;
	t_etri	*lst_tetri;

	tetri = (t_etri *)malloc(sizeof(t_etri));
	first_case = (t_coord *)malloc(sizeof(t_coord));
	pos = (t_coord *)malloc(sizeof(t_coord));
	pos->x = 0;
	pos->y = 0;
	tetri->c = c;
	if (*str)
		str = loop_on_str(str, first_case, tetri);
	free(pos);
	free(first_case);
	if (*str == '\0')
		return (tetri);
	lst_tetri = tetri_construct(&(*++str), ++c);
	tetri_add(&lst_tetri, tetri);
	return (lst_tetri);
}
