/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farango <farango@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:37:10 by farango           #+#    #+#             */
/*   Updated: 2023/09/04 11:37:18 by farango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char	test[] = "";
	int	result = ft_str_is_alpha(test);

	ft_str_is_alpha(test);
	if (result == 0)
		printf("This test doesn't contain an alphabetical char %s\n", test);
	if (result == 1)
		printf("This test is correct %s\n", test);
}
