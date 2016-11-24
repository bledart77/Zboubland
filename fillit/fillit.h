/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 09:47:48 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/22 15:33:54 by glictevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

void	ft_replace(char **av, char c);
void	ft_replacett(char ***av);
int		ft_libre(int x, int y, char **av);
int		ft_libref(int *x, int *y, char **av);
char	*ft_lire(char *av);
int		nbtab(char *av);
int		ft_strlen(char *str);

typedef struct		s_tetri
{
	int				*v1;
	int				*v2;
	int				*v3;
	struct s_tetri	*next;
}					t_etri;

#endif
