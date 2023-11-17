/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarzt <jarzt@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:55:49 by jarzt             #+#    #+#             */
/*   Updated: 2023/09/04 18:15:21 by jarzt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	strln(char *str);
int	ft_str_is_printable(char *str);
/*
int	main (void)
{
	char	str01[] = "356um";
	char	str02[1];
	char	str03[1];
	char	str04[] = "";
	
	str02[0] = 127;
	str03[0] = 23;

	printf("check str01: %d\n", ft_str_is_printable(str01));
	printf("check str02: %d\n", ft_str_is_printable(str02));
	printf("check str03: %d\n", ft_str_is_printable(str03));	
	printf("check str04: %d\n", ft_str_is_printable(str04));
	return (0);
}*/

int	strln(char *str)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_printable;

	i = 0;
	is_printable = 0;
	if (str[i] == '\0' && strln(str) == 0)
		is_printable = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			is_printable = 1;
		else
			return (0);
		i++;
	}
	return (is_printable);
}
