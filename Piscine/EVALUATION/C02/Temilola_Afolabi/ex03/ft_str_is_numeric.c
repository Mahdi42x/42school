/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafolabi <tafolabi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:36:09 by tafolabi          #+#    #+#             */
/*   Updated: 2023/09/05 19:36:12 by tafolabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9')) 
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
	char str[] = "12345";
	int	result;

	result = ft_str_is_numeric(str);
	printf("%d", result);
	return (0);
}*/
