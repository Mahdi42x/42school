/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:10:08 by mawada            #+#    #+#             */
/*   Updated: 2023/11/16 17:10:13 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	else
	{
		while (i < nmemb * size)
		{
			ptr[i] = 0;
			i++;
		}
		return ((void *)ptr);
	}
}
