/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:54:54 by mawada            #+#    #+#             */
/*   Updated: 2023/08/31 11:03:22 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
    char testString1[] = "HelloWorld";
    char testString2[] = "12345";
    char testString3[] = "AlphaBeta123";

    if (ft_str_is_numeric(testString1))
        printf("'%s' besteht nur aus Zahlen.\n", testString1);
    else
        printf("'%s' enthält nicht nur Zahlen.\n", testString1);

    if (ft_str_is_numeric(testString2))
        printf("'%s' besteht nur aus Zahlenn.\n", testString2);
    else
        printf("'%s' enthält nicht nur Zahlen.\n", testString2);

    if (ft_str_is_numeric(testString3))
        printf("'%s' besteht nur aus Zahlen.\n", testString3);
    else
        printf("'%s' enthält nicht nur Zahlen.\n", testString3);

    return 0;
}
*/
