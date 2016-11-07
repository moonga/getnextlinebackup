/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 16:13:45 by rhabib            #+#    #+#             */
/*   Updated: 2016/10/20 16:43:13 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		checkresult(char **line, char *buff_save)
{
	char	*nl;

	nl = ft_strchr(buff_save, '\n');
	if (nl)
	{
		*nl = '\0';
		*line = ft_strdup(buff_save);
		ft_memmove(buff_save, &nl[1], ft_strlen(&nl[1]) + 1);
		return (1);
	}
	if (ft_strlen(buff_save) > 0)
	{
		*line = ft_strdup(buff_save);
		*buff_save = '\0';
		return (1);
	}
	return (0);
}

int		get_next_line(int const fd, char **line)
{
	static char	*buff_save = NULL;
	char		buffer[BUFF_SIZE + 1];
	char		*line_temp;
	int			ret;

	if (line == NULL || fd < 0 || BUFF_SIZE <= 0)
		return (-1);
	if (buff_save == NULL)
		buff_save = ft_strnew(0);
	while (!ft_strchr(buff_save, '\n'))
	{
		ret = read(fd, buffer, BUFF_SIZE);
		if (ret == -1)
			return (-1);
		if (ret == 0)
			break ;
		buffer[ret] = '\0';
		line_temp = ft_strjoin(buff_save, buffer);
		free(buff_save);
		buff_save = line_temp;
	}
	return (checkresult(line, buff_save));
}
