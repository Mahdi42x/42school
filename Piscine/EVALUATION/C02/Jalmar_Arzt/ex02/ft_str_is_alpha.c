/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarzt <jarzt@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:30:16 by jarzt             #+#    #+#             */
/*   Updated: 2023/08/31 15:01:37 by jarzt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);
/*
int	main (void)
{
	char	str01[] = "pEEp";
	char	str02[] = "2224";
	char	str03[] = "";

	printf("check str01: %i\n", ft_str_is_alpha(str01));
	printf("check str02: %i\n", ft_str_is_alpha(str02));
	printf("check str03: %i\n", ft_str_is_alpha(str03));

	return (0);
}*/

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	has_num;

	i = 0;
	has_num = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			has_num = 1;
		else if (str[i] > 96 && str[i] < 123)
			has_num = 1;
		else
			return (0);
		i++;
	}
	if (str[i] == '\0')
		has_num = 1;
	return (has_num);
}
