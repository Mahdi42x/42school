/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnardi <nnardi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:06:02 by nnardi            #+#    #+#             */
/*   Updated: 2023/09/03 21:20:49 by nnardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		while (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
/*
int	main(void)
{
	char    b[] = "AAAAaskdjbflkjasdjfb";
	printf("%s\n", ft_strupcase(b));
	char    c[] = "abc";
	printf("%s\n", ft_strupcase(c));
	return (0);
}*/	
