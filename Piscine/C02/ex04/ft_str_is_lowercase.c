/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:20:46 by mawada            #+#    #+#             */
/*   Updated: 2023/08/31 13:25:40 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	printf("%d\n", ft_str_is_lowercase("husd"));
	printf("%d\n", ft_str_is_lowercase("husd8"));
	printf("%d\n", ft_str_is_lowercase("husdUU"));
	printf("%d\n", ft_str_is_lowercase("jsi"));
}
*/
