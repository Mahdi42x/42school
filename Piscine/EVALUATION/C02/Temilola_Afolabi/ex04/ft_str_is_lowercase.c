/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafolabi <tafolabi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:34:03 by tafolabi          #+#    #+#             */
/*   Updated: 2023/09/05 19:34:09 by tafolabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	if (str[1] == '\0')
		return (1);
	return (1);
}
/*
int	main(void)
{
	char str[] = "apple";
	int	result;

	result = ft_str_is_lowercase(str);
	printf("%d", result);
	return (0);
}*/
