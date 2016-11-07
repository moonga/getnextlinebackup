/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 15:37:55 by rhabib            #+#    #+#             */
/*   Updated: 2016/10/12 16:05:33 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 64

# include <unistd.h>
# include <stdlib.h>
# include "get_next_line.h"
# include "libft/libft.h"

int		get_next_line(int const fd, char **line);

#endif
