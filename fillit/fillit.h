/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 09:47:48 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/12/20 05:50:03 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

char				*ft_read(char *av);
void				ft_complete(char *str, int nb);
int					nbtab(char *av);
int					ft_strlen(char *str);
int					ft_sqrtv2(int nb);
int					ft_minsquare(char *av);
void				ft_putstr(char *str);
int					ft_test1(char *av);
int					ft_test2(char *av);
int					ft_test3(char *av);
int					ft_test41(char *av, int i);
int					ft_test42(char *av, int i);
int					ft_test5(char *av);
int					ft_finaltest(char *av);
int					ft_test6(char *av);
int					ft_nei(char *av, int i);
int					ft_test7(char *av);
int					ft_test8(char *av);

typedef struct		s_coord
{
	int				x;
	int				y;
}					t_coord;

typedef struct		s_tetri
{
	char			c;
	t_coord			v1;
	t_coord			v2;
	t_coord			v3;
	struct s_tetri	*next;
}					t_etri;

void				ft_resolve(t_etri *piece, int nb);
int					ft_complete_square(int nb, t_etri *piece, char *res);
int					ft_available(t_etri *piece, t_coord *pos, char *res,
		int nb);
void				ft_setup(t_etri *piece, t_coord *pos, char *res, int nb);
void				ft_erase(t_etri *piece, t_coord *pos, char *res, int nb);
void				tetri_add(t_etri **lst_tetri, t_etri *new_tetri);
int					found_newline(char *str, t_coord *pos);
void				found_sharp(int *nb_case_found, t_etri *tetri,
					t_coord *first_case, t_coord *pos);
char				*loop_on_str(char *str, t_coord *first_case, t_etri *tetri);
t_etri				*tetri_construct(char *str, char c);
void				ft_cut(t_coord *pos);

#endif
