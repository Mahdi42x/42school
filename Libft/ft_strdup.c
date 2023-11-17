/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:12:16 by mawada            #+#    #+#             */
/*   Updated: 2023/11/16 17:12:19 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*ptr;

	len = 0;
	i = 0;
	while (s[len])
		len++;
	len++;
	ptr = (char *)malloc(len * sizeof(char));
	if (ptr)
	{
		while (i < len)
		{
			ptr[i] = s[i];
			i++;
		}
		return (ptr);
	}
	else
		return (NULL);
}
