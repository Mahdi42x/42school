/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnardi <nnardi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:31:28 by nnardi            #+#    #+#             */
/*   Updated: 2023/09/05 17:19:38 by nnardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 32 && str[a] <= 126)
		{
			a++;
		}
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char b[]= "abcdefghijklmnopqrstuvxwzy";
	printf("%d\n", ft_str_is_printable(b));
	char c[]= "\x1f";
	printf("%d\n", ft_str_is_printable(c));
	char d[]= "\0";
	printf("%d\n", ft_str_is_printable(d));
}*/
