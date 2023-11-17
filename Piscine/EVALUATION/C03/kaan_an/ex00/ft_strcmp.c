/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:58:27 by kaan              #+#    #+#             */
/*   Updated: 2023/09/04 22:35:15 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		j = j + (s1[i] - s2[i]);
		if (j != 0)
		{
			return (j);
		}
		i++;
	}
	return (j);
}
/*int	main()
{
	char c1[] = "meohmeow";
	char c2[] = "meogteow";

	int i = ft_strcmp(c1, c2);
	printf("%d", i);
}*/
