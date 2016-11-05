#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list t_list;
struct s_list
{
	t_list		*next;
	void		*data;
};

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *str);
char	*ft_strcat(char *s1, char *s2);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
char	*ft_strncpy(char *s1, char *s2, int n);
char	*ft_strstr(char *str, char *to_find);

#endif
