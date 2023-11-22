/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:57:56 by mawada            #+#    #+#             */
/*   Updated: 2023/11/16 16:58:00 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == 0)
		return ((char *)&big[0]);
	while (i < len && big[i])
	{
		while (big[i + j] == little[j] && little[j] && i + j < len)
		{
			j++;
		}
		if (little[j] == 0)
			return ((char *)&big[i]);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
