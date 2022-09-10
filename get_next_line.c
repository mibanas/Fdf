/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <msanabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 21:05:02 by msanabi           #+#    #+#             */
/*   Updated: 2019/08/18 16:16:12 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int	nxt_line(char **txt, char **line)
{
	size_t		i;
	char		*ptrchr;

	i = 0;
	if ((ptrchr = ft_strchr(*txt, '\n')))
	{
		i = ft_strlen(ptrchr);
		*line = ft_strsub(*txt, 0, ft_strlen(*txt) - i);
		*txt = ptrchr + 1;
	}
	else
	{
		*line = *txt;
		*txt = NULL;
		if (*line[0] == '\0')
			return (0);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char			*txt[4864];
	int					rds;
	char				buf[BUFF_SIZE + 1];

	if (fd < 0 || !line || read(fd, buf, 0) < 0)
		return (-1);
	if (!txt[fd])
		txt[fd] = ft_strnew(BUFF_SIZE + 1);
	while ((rds = read(fd, buf, BUFF_SIZE)))
	{
		buf[rds] = '\0';
		txt[fd] = ft_strjoin(txt[fd], buf);
		if (ft_strchr(txt[fd], '\n'))
			break ;
		free(txt[fd]);
	}
	return (nxt_line(&txt[fd], line));
}
