/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:27:36 by mawada            #+#    #+#             */
/*   Updated: 2023/08/31 13:29:02 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	printf("%d\n", ft_str_is_uppercase("JJSOJO"));
	printf("%d\n", ft_str_is_uppercase("husd8"));
	printf("%d\n", ft_str_is_uppercase("husdUU"));
	printf("%d\n", ft_str_is_uppercase("jsi"));
	return 0;
}
*/
