/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarzt <jarzt@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:39:11 by jarzt             #+#    #+#             */
/*   Updated: 2023/09/04 13:49:37 by jarzt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);
/*
int	main (void)
{
	char	str01[] = "whoooa";
	char	str02[] = "01873659816";
	char	str03[] = "";

	printf("check str01: %i\n", ft_str_is_numeric(str01));
	printf("check str02: %i\n", ft_str_is_numeric(str02));
	printf("check str03: %i\n", ft_str_is_numeric(str03));

	return (0);
}*/

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_only_num;

	i = 0;
	is_only_num = 0;
	if (str[i] == '\0')
		is_only_num = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			is_only_num = 1;
		else
			return (0);
		i++;
	}
	return (is_only_num);
}
