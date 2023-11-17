/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:01:27 by kaan              #+#    #+#             */
/*   Updated: 2023/09/05 10:36:22 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		j = j + (s1[i] - s2[i]);
		if (j != 0)
		{
			return (j);
		}
		i++;
	}
	return (0);
}
/*int	main()
{
	char c1[] = "apples";
	char c2[] = "apple";
	int i = ft_strncmp(c1, c2, 6);

	printf("%d", i);
}*/
