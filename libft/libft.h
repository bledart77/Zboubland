/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 08:51:06 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/07 09:54:01 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strdup(char *src);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
int		ft_atoi(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, unsigned int n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
int		ft_strlen(char *str);
void	*ft_memmalloc(size_t taille);
void	ft_memdel(void **ap);
void	ft_strclr(char *as);
void	ft_strdel(char **as);
int		ft_strequ(const char *s1, const char *s2);
void	ft_striter(char *as, void (*f)(char *));
void	ft_striteri(char *as, void (*f)(unsigned, char *));
char	*ft_strmap(const char *s, char (*f)(char));
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int		ft_strnequ(const char *s1, const char *s2, size_t taille);
char	*ft_strnew(size_t taille);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strsub(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	*ft_itoa(int n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
#endif
