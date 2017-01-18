/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 11:01:55 by mcolas-d          #+#    #+#             */
/*   Updated: 2017/01/16 13:51:16 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int ac, char **av)
{
	ac = 0;
	char	*line;
	int		fd;
	int		i;

	i = 1;
	fd = open(av[1], O_RDONLY);
	while ((i = get_next_line(fd, &line)) > 0)
	{
		printf("%s   %d\n", line, i);
		if (i > 50)
			break ;
	}
	i = get_next_line(fd, &line);
	printf("%s  %d\n", line, i);
	//printf("%d\n", ft_strcmp(line, "ucdsjnkds"));
	close(fd);
	return (1);
}
