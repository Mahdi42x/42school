/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarzt <jarzt@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:56:39 by jarzt             #+#    #+#             */
/*   Updated: 2023/09/04 13:56:40 by jarzt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);
/*
int	main (void)
{
	char	str01[] = "THATISWILD";
	char	str02[] = "woahzzz";
	char	str03[] = "";
	char	str04[] = "q094y (@)*&^";

	printf("check str01: %i\n", ft_str_is_uppercase(str01));
	printf("check str02: %i\n", ft_str_is_uppercase(str02));
	printf("check str03: %i\n", ft_str_is_uppercase(str03));
	printf("check str04: %i\n", ft_str_is_uppercase(str04));

	return (0);
}*/

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	has_num;

	i = 0;
	has_num = 0;
	if (str[i] == '\0')
		has_num = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			has_num = 1;
		else
			return (0);
		i++;
	}
	return (has_num);
}
