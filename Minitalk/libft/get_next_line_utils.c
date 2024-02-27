/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:34:52 by mawada            #+#    #+#             */
/*   Updated: 2023/12/05 11:49:59 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	gft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*gft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	strlen;
	size_t	size;
	size_t	i;
	char	*ptr;

	strlen = ft_strlen(s);
	i = 0;
	if (start >= strlen || s[0] == 0)
		size = 0;
	else 
		size = strlen - start;
	if (len >= size)
		ptr = (char *)malloc((size + 1) * sizeof(char));
	else
		ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < size && i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}

char	*gft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[j++] = s2[i];
		i++;
	}
	str[j] = 0;
	return (str);
}

char	*gft_strchr(const char *s, int c)
{
	int			i;
	const char	*str;

	i = 0;
	while (s[i] != (char)c && s[i])
	{
		i++;
	}
	if (s[i] == 0 && (char)c != 0)
		str = NULL;
	else
		str = &s[i];
	return ((char *)str);
}
