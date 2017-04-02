/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 17:01:53 by vi-hong           #+#    #+#             */
/*   Updated: 2017/04/02 18:16:49 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 64
# include <sys/types.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"

int		get_next_line(const int fd, char **line);
#endif
