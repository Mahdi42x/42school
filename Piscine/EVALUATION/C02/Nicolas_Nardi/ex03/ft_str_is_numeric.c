/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnardi <nnardi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:22:29 by nnardi            #+#    #+#             */
/*   Updated: 2023/09/03 18:52:53 by nnardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] <= '9' && str[a] >= '0')
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
	char b[]= "hello";
	printf("%d\n", ft_str_is_numeric(b));
	char c[]= "564568";
	printf("%d\n", ft_str_is_numeric(c));
	char d[]= "\0";
	printf("%d\n", ft_str_is_numeric(d));
	
}*/
