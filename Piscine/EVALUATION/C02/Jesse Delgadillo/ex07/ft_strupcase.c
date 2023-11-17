/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelgadi <jdelgadi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:39:33 by jdelgadi          #+#    #+#             */
/*   Updated: 2023/09/11 11:05:40 by jdelgadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "caskdjci";
	char	str2[] = "15462";
	char	str3[] = "JYvhFaztJJHttDREFDffy27j";
	char	str4[] = "Will You Be My Friend?";

	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
	printf("%s\n", ft_strupcase(str3));
	printf("%s\n", ft_strupcase(str4));
	return (0);
}*/
