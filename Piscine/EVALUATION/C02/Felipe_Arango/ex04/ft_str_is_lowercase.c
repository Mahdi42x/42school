/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farango <farango@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:49:42 by farango           #+#    #+#             */
/*   Updated: 2023/09/04 17:49:46 by farango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char	test[] = "rawr";
	int	result = ft_str_is_lowercase(test);

	ft_str_is_lowercase(test);
	if (result == 0)
	{
		printf("This test is not correct %s\n", test);
	}
	if (result == 1)
	{
		printf("This test is correct %s\n", test);
	}
		printf("%d\n", ft_str_is_lowercase("husd"));
	printf("%d\n", ft_str_is_lowercase("husd"));
	printf("%d\n", ft_str_is_lowercase("hus"));
	printf("%d\n", ft_str_is_lowercase("jsi"));
}
