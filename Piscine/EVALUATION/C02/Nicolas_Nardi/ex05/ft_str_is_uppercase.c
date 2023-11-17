/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnardi <nnardi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:13:31 by nnardi            #+#    #+#             */
/*   Updated: 2023/09/03 19:24:51 by nnardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			a++;
		}
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char b[] = "hello";
	printf("%d\n", ft_str_is_uppercase(b));
	char c[] = "HELLO";
	printf("%d\n", ft_str_is_uppercase(c));
	char d[] = "\0";
	printf("%d\n", ft_str_is_uppercase(d));
}*/
