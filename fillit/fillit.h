/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 09:47:48 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/28 11:47:20 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

// fct1
void	ft_replace(char **av, char c); // surement de la merde
void	ft_replacett(char ***av); // surement de la merde aussi
int		ft_libre(int x, int y, char **av); // pas sur 
int		ft_libref(int *x, int *y, char **av); // pas sur
char	*ft_read(char *av); // lit le fichier et le renvoie sous forme de char* 
// fct2
int		nbtab(char *av); // renvoie le nombre de pieces
int		ft_strlen(char *str);
int		ft_sqrtv2(int nb); // renvoi la racine sup 
int		ft_minsquare(char *av); // renvoie la taille minimale du carre
void	ft_putstr(char *str);
// check1
int		ft_test1(char *av); // verifie le nb d'argument
int		ft_test2(char *av); // verifie si les carre sont 4x4 et separe par /n
int		ft_test3(char *av); // verifie si il y a bien 4 # /piece
int		ft_test41(char *av, int i); // compte voisin droite gauche
int		ft_test42(char *av, int i); // compte voisin haut bas
// check2
int		ft_test4(char *av); // verifie si la somme des voisins est un multiple de 6
int		ft_test5(char *av); // verifie si il n'y a pas d'autre caractere
int		ft_finaltest(char *av); // compile tous les tests

typedef struct		s_tetri // liste chainee de nos pieces
{
	char			c;
	int				*v1; // [x,y] x = horizontale
	int				*v2;
	int				*v3;
	struct s_tetri	*next;
}					t_etri;

// backtracking
int		ft_resolve(t_etri *piece, int nb); // nb = minsquare
int		ft_complete_square(int nb, t_etri *piece, char *res); // essaye de completer un carre de taille nb
int		ft_available(t_etri *piece, int i, char *res); // verifie si on peut mettre la piece sur i
void	ft_setup(t_etri *piece, int i, char *res); // met la piece sur i
void	ft_erase(t_etri *piece, int i, char *res); // efface la piece de i

#endif
