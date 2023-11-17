/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farango <farango@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:16:10 by farango           #+#    #+#             */
/*   Updated: 2023/09/04 18:16:11 by farango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	test[] = "RAWR";
	int	result = ft_str_is_uppercase(test);

	ft_str_is_uppercase(test);
	if (result == 0)
	{
		printf("This test is not correct %s\n", test);
	}
	if (result == 1)
	{
		printf("This test is correct %s\n", test);
	}
}*/
