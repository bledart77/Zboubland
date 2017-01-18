/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 11:00:56 by mcolas-d          #+#    #+#             */
/*   Updated: 2017/01/18 11:32:52 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 5
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "libft/includes/libft.h"
# include <stdio.h>

int		get_next_line(const int fd, char **line);
#endif
