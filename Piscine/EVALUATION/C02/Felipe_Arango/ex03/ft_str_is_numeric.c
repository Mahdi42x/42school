/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farango <farango@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:04:29 by farango           #+#    #+#             */
/*   Updated: 2023/09/04 14:04:31 by farango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	test[] = "3254";
	int	result = ft_str_is_numeric(test);

	ft_str_is_numeric(test);
	if (result == 0)
		printf("This test doesn't contain only digits %s\n", test);
	if (result == 1)
		printf("This test is correct %s\n", test);
}*/
