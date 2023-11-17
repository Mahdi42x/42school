/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnardi <nnardi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:09:27 by nnardi            #+#    #+#             */
/*   Updated: 2023/09/05 17:45:52 by nnardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	if (str[a] == '\0')
		return (1);
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			a++;
		else if (str[a] >= 'A' && str[a] <= 'Z')
			a++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char b[] = "hello";
	printf("%d\n", ft_str_is_alpha("GGGG9GG"));
	char c[] = "\0";
	printf("%d\n", ft_str_is_alpha("aaAAAa"));
	char d[] = "666";
	printf("%d\n", ft_str_is_alpha(""));
	
}*/
