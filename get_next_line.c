/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 09:56:28 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/07/24 11:09:27 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*ft_readline(char **str, char **line, int fd)
{
	char	*hold;
	int		i;

	i = 0;
	while (str[fd][i] != '\0' && str[fd][i] != '\n')
		i++;
	if (str[fd][i] == '\n')
	{
		*line = ft_strsub(str[fd], 0, i);
		hold = ft_strdup(str[fd] + i + 1);
		free(str[fd]);
		str[fd] = hold;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	else if (str[fd][i] == '\0')
	{
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (*line);
}

int				get_next_line(const int fd, char **line)
{
	static char	*s[2147483647];
	char		buffer[BUFF_SIZE + 1];
	char		*temporary;
	int			retrn;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((retrn = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[retrn] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strnew(0);
		temporary = ft_strjoin(s[fd], buffer);
		free(s[fd]);
		s[fd] = temporary;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	if (retrn < 0)
		return (-1);
	else if ((retrn == 0 && s[fd] == NULL) || s[fd][0] == '\0')
		return (0);
	*line = ft_readline(s, line, fd);
	return (1);
}
