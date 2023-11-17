/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farango <farango@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:23:59 by farango           #+#    #+#             */
/*   Updated: 2023/09/04 18:24:00 by farango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
	char	test[] = "fhd/.';W\nR";
	int	result = ft_str_is_printable(test);

	ft_str_is_printable(test);
	if (result == 0)
	{
		printf("This test is not correct %s\n", test);
	}
	if (result == 1)
	{
		printf("This test is correct %s\n", test);
	}
}*/
