/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikuru <hikuru@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:40:31 by hikuru            #+#    #+#             */
/*   Updated: 2023/09/06 16:56:27 by hikuru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str [count] <= 'z')
		{
			count++;
		}
		else 
		{
			return (0);
		}
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "test";

	printf("%d", ft_str_is_lowercase(str));
	return (0);
}*/
