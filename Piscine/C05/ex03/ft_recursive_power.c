/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:53:43 by mawada            #+#    #+#             */
/*   Updated: 2023/09/11 09:57:02 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		result = nb * ft_recursive_power(nb, power - 1);
		return (result);
	}
}
/*#include <stdio.h>
int main ()
{
    int result = ft_recursive_power(7, 3);
    printf("Power: %d\n", result);
    return 0;
}*/
