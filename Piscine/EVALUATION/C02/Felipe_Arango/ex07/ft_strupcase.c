/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farango <farango@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:49:32 by farango           #+#    #+#             */
/*   Updated: 2023/09/04 18:49:34 by farango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str [i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	test[] = "probandoprobando";

	printf("This is the test %s\n", test);
	ft_strupcase(test);
	printf("This is the result %s\n", test);
}*/
