/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 11:00:56 by mcolas-d          #+#    #+#             */
/*   Updated: 2016/12/02 11:58:26 by mcolas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#define BUFF_SIZE 32
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int		get_next_line(const int, char **line);
#endif
