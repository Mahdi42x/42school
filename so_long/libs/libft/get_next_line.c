/* ************************************************************************** */
/*                                                                        */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:33:38 by mawada            #+#    #+#             */
/*   Updated: 2023/11/28 18:07:42 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill_linesbuffer(int fd, char *rest, char *buffer);
static char	*fixline(char *line);

char	*get_next_line(int fd)
{
	static char	*rest;
	char		*line;
	char		*buffer;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(rest);
		free(buffer);
		rest = NULL;
		buffer = NULL;
		return (NULL);
	}
	line = fill_linesbuffer(fd, rest, buffer);
	free(buffer);
	buffer = NULL;
	if (!line)
		return (NULL);
	rest = fixline(line);
	return (line);
}

static char	*fixline(char *line_buffer)
{
	char	*rest;
	ssize_t	i;

	i = 0;
	while (line_buffer[i] != '\n' && line_buffer[i] != '\0')
		i++;
	if (line_buffer[i] == 0)
		return (NULL);
	rest = ft_substr(line_buffer, i + 1, ft_strlen(line_buffer) - i);
	if (*rest == 0)
	{
		free(rest);
		rest = NULL;
	}
	line_buffer[i + 1] = 0;
	return (rest);
}

static char	*fill_linesbuffer(int fd, char *rest, char *buffer)
{
	ssize_t	readstatus;
	char	*tmp;

	readstatus = 1;
	while (readstatus > 0)
	{
		readstatus = read(fd, buffer, BUFFER_SIZE);
		if (readstatus == -1)
			return (NULL);
		else if (readstatus == 0)
			break ;
		buffer[readstatus] = '\0';
		if (!rest)
		{
			rest = (char *)malloc(1);
			rest[0] = '\0';
		}
		tmp = rest;
		rest = ft_strjoin(tmp, buffer);
		free(tmp);
		tmp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (rest);
}
