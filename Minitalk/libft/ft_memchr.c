/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:56:14 by mawada            #+#    #+#             */
/*   Updated: 2023/11/16 16:56:20 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;
	const char	*res;

	i = 0;
	str = s;
	while (i < n && (unsigned char)str[i] != (unsigned char)c)
	{
		i++;
	}
	if (i == n)
		res = NULL;
	else
		res = &str[i];
	return ((void *)res);
}
