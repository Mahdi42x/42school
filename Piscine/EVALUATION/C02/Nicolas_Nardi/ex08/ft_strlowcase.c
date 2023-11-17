/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnardi <nnardi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:13:41 by nnardi            #+#    #+#             */
/*   Updated: 2023/09/03 21:19:49 by nnardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		while (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] = str[a] + 32;
		}
		a++;
	}
	return (str);
}

/*int	main(void)
{
	char    b[] = "AAAAaskdjbflkjasdjfb";
	printf("%s\n", ft_strlowcase(b));
	char    c[] = "ABC";
	printf("%s\n", ft_strlowcase(c));
	return (0);
}*/
