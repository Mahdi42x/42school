/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 20:08:19 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/18 20:08:21 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

char	*addchar(char *str, char *buf)
{
	int		i;
	char	*new;

	i = 0;
	while (str[i])
		i++;
	if ((new = malloc(sizeof(char) * (i + 2))) == NULL)
		return (NULL);
	i = -1;
	while (str[++i])
		new[i] = str[i];
	new[i] = buf[0];
	new[i + 1] = '\0';
	free(str);
	return (new);
}

int		gest_buf(int file, t_dict **begin)
{
	int		size;
	char	*str;
	char	buf[1];

	str = malloc(sizeof(char));
	str[0] = '\0';
	while ((size = read(file, buf, 1)) != 0)
		if (buf[0] != '\n')
		{
			if ((str = addchar(str, buf)) == NULL)
				return (0);
		}
		else
		{
			if (parse_dict(begin, str) == 1)
			{
				free(str);
				str = malloc(sizeof(char));
				str[0] = '\0';
			}
			else if (ft_strlen(str) != 0)
				return (0);
		}
	ft_list_sort(begin);
	return (1);
}

int		ft_file_read(char *filepath, t_dict **begin)
{
	int			file;

	file = open(filepath, O_RDWR);
	if (file != -1)
	{
		if (gest_buf(file, begin) == 0)
			return (-1);
		return (1);
	}
	else
		return (0);
}
