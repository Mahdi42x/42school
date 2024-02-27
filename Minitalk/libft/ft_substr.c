/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:59:53 by mawada            #+#    #+#             */
/*   Updated: 2023/11/16 16:00:05 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
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
