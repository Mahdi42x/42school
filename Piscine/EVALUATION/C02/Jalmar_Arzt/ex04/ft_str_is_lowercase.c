/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarzt <jarzt@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:51:32 by jarzt             #+#    #+#             */
/*   Updated: 2023/09/04 13:51:33 by jarzt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);
/*
int	main (void)
{
	char	str01[] = "pEEp";
	char	str02[] = "woahzzz";
	char	str03[] = "";
	char	str04[] = "q094y (@)*&^";

	printf("check str01: %i\n", ft_str_is_lowercase(str01));
	printf("check str02: %i\n", ft_str_is_lowercase(str02));
	printf("check str03: %i\n", ft_str_is_lowercase(str03));
	printf("check str04: %i\n", ft_str_is_lowercase(str04));

	return (0);
}*/

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	has_num;

	i = 0;
	has_num = 0;
	if (str[i] == '\0')
		has_num = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			has_num = 1;
		else
			return (0);
		i++;
	}
	return (has_num);
}
