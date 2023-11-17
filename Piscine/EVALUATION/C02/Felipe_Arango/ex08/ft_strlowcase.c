/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farango <farango@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:51:16 by farango           #+#    #+#             */
/*   Updated: 2023/09/04 19:51:19 by farango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str [i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	test[] = "PROBANDOPROBANDO";

	printf("This is the test %s\n", test);
	ft_strlowcase(test);
	printf("This is the result %s\n", test);
}*/
