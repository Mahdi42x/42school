/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:04:44 by mawada            #+#    #+#             */
/*   Updated: 2023/11/15 16:35:35 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;	
	size_t			i;

	i = 0;
	ps1 = (unsigned char *) s1;
	ps2 = (unsigned char *) s2;
	while (i < n)
	{
		if (ps1[i] == ps2[i])
		{
			i++;
		}
		else
		{
			return (ps1[i] - ps2[i]);
		}
	}
	return (0);
}
