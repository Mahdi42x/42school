/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikuru <hikuru@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 22:55:35 by hikuru            #+#    #+#             */
/*   Updated: 2023/09/05 23:28:20 by hikuru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int count;

	count = 0;
	if (str[count] == '\0')
	{
		return (1);
	}
	else
	{
		while (str[count] != '\0')
		{
			if (str[count] >= '0' && str[count] <= '9')
			{
				count++;
			}
			else
			{
				return (0);
			}
		}
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_str_is_numeric("Tamam123")); //0
	printf("%d\n", ft_str_is_numeric("123")); //1
	printf("%d\n", ft_str_is_numeric("")); //1
}*/
