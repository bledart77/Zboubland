/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 10:32:17 by mcolas-d          #+#    #+#             */
/*   Updated: 2017/01/26 11:36:59 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strduplf(char *str)
{
	int		len;
	int		i;
	char	*res;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	len = i;
	i = 0;
	res = (char*)malloc(sizeof(res) * len + 1);
	while (i < len)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_strchrr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char*)(s + i + 1));
		i++;
	}
	if (s[i] == c)
		return ((char*)(s + i + 1));
	return (NULL);
}

char	*ft_read(int fd, char *buffer, int *ret)
{
	char	tmp[BUFF_SIZE + 1];
	char	*tmp2;

	tmp2 = buffer;
	*ret = read(fd, tmp, BUFF_SIZE);
	tmp[*ret] = '\0';
	buffer = ft_strjoin(buffer, tmp);
	ft_strdel(&tmp2);
	return (buffer);
}

int		ft_ext(char **str, char **line, char **buffer, int n)
{
	if (n == 0)
	{
		*str = ft_strchr(*buffer, '\n');
		*line = ft_strduplf(*buffer);
		ft_memmove(*buffer, *str + 1, ft_strlen(*str + 1) + 1);
	}
	else
	{
		*str = ft_strchr(*buffer, '\0');
		*line = ft_strduplf(*buffer);
		*buffer = "";
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static	char	*buffer = "";
	int				ret;
	char			*str;

	str = ft_strchr(buffer, '\n');
	ret = 1;
	if (!line || fd < 0)
		return (-1);
	if (buffer == NULL)
	{
		*line = NULL;
		return (0);
	}
	if (buffer[0] == '\0')
		buffer = ft_strnew(1);
	while (ft_strchr(buffer, '\n') == NULL && ret > 0)
		buffer = ft_read(fd, buffer, &ret);
	if (ft_strchr(buffer, '\n') != NULL)
		return (ft_ext(&str, line, &buffer, 0));
	if (ret >= 0 && ft_strlen(buffer) > 0)
		return (ft_ext(&str, line, &buffer, 1));
	*line = NULL;
	return (ret);
}
