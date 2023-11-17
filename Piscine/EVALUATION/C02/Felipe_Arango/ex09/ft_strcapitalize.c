/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farango <farango@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:59:19 by farango           #+#    #+#             */
/*   Updated: 2023/09/04 19:59:20 by farango          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z' || str[i] >= '0' && str[i] <= '9')
		{
			if (check)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str [i] - 32;
				}
				check = 0;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str [i] + 32;
			}
			i++;
		}
		else
		{
			i++;
			check = 1;
		}
	}
	return (str);
}

int	main(void)
{
	char	test[] = "cHan CoN lksEG 089bf g87GHF 1=c9887";

	printf("This is the test %s\n", test);
	ft_strlowcase(test);
	printf("This is the result %s\n", test);
}
