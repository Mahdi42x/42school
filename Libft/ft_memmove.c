/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:43:28 by mawada            #+#    #+#             */
/*   Updated: 2023/11/16 16:50:27 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dst;
	const char	*sors;
	size_t		i;

	dst = dest;
	sors = src;
	i = -1;
	if (dst == 0 && sors == 0)
		return (NULL);
	if (dst < sors || sors + n < dst)
	{
		while (++i < n)
		{
			dst[i] = sors[i];
		}
	}
	else
	{
		while (n > 0)
		{
			dst[n - 1] = sors[n - 1];
			n--;
		}
	}
	return (dest);
}
