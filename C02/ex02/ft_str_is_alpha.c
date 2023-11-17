/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:51:40 by mawada            #+#    #+#             */
/*   Updated: 2023/09/05 08:51:17 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || 
			(str[i] >= 'A' && str[i] <= 'Z'))
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
    char testString2[] = "SSS";
    char testString3[] = "AlphaBeta123";

    if (ft_str_is_alpha(testString1))
        printf("'%s' besteht nur aus Buchstaben.\n", testString1);
    else
        printf("'%s' enthält nicht nur Buchstaben.\n", testString1);

    if (ft_str_is_alpha(testString2))
        printf("'%s' besteht nur aus Buchstaben.\n", testString2);
    else
        printf("'%s' enthält nicht nur Buchstaben.\n", testString2);

    if (ft_str_is_alpha(testString3))
        printf("'%s' besteht nur aus Buchstaben.\n", testString3);
    else
        printf("'%s' enthält nicht nur Buchstaben.\n", testString3);
        
    return 0;
}*/
