/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:18:46 by messid            #+#    #+#             */
/*   Updated: 2023/09/09 13:22:43 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);
int	is_space(char *str);

int	ft_atoi(char *str)
{
	int	sign;
	int	count;
	int	value;

	sign = 1;
	count = is_space(str);
	value = 0;
	while (str[count] == 43 || str[count] == 45)
	{
		if (str[count] == 45)
			sign = sign * (-1);
		count++;
	}
	while (str[count] >= 48 && str[count] <= 57)
	{
		value *= 10;
		value += (str[count] - 48);
		count++;
	}
	value = value * sign;
	return (value);
}

int	is_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main (void)
{
	char *str;

	str = "     \t-----++---+-3241asd3124";

	printf("%d", ft_atoi(str));
	
}
*/
