/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:49:34 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/11/09 15:08:34 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_get_nb_words(char *str, char c)
{
	int cnt;
	int i;
	int nb_words;

	nb_words = 0;
	cnt = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (cnt > 0 && str[i] == c)
		{
			cnt = 0;
			nb_words++;
		}
		else if (cnt == 0 && str[i] != c)
			cnt++;
		else if (cnt >= 0 && str[i] != c)
			cnt++;
	}
	return (nb_words + 1);
}

static void		ft_aw(char **str, int *i_str_result, char *pointer, int *cnt)
{
	*cnt = 0;
	str[*i_str_result] = (char*)malloc(sizeof(char) * (*cnt) + 1);
	str[*i_str_result] = pointer;
	*i_str_result += 1;
}

static void		ft_bws(char *str, char **str_result, int *i_str_result, char c)
{
	int		cnt;
	int		i;
	char	*pointer;

	i = -1;
	cnt = 0;
	while (str[++i] != '\0')
	{
		if (cnt > 0 && str[i] == c)
		{
			str[i] = '\0';
			ft_aw(str_result, i_str_result, pointer, &cnt);
		}
		else if (cnt == 0 && str[i] != c)
		{
			pointer = &str[i];
			cnt++;
		}
		else if (cnt >= 0 && str[i] != c)
			cnt++;
	}
	if (str[i] == '\0' && cnt > 0)
		ft_aw(str_result, i_str_result, pointer, &cnt);
}

char			**ft_strsplit(char *str, char c)
{
	char	*str_cpy;
	char	**str_result;
	int		nb_words;
	int		i_str_result;

	str_cpy = ft_strdup(str);
	i_str_result = 0;
	nb_words = ft_get_nb_words(str, c);
	if (!(str_result = (char**)malloc(sizeof(char*) * (nb_words) + 1)))
		return (NULL);
	ft_bws(str_cpy, str_result, &i_str_result, c);
	str_result[i_str_result] = NULL;
	return (str_result);
}
