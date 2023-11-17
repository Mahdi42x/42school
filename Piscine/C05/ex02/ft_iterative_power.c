/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:30:46 by mawada            #+#    #+#             */
/*   Updated: 2023/09/11 09:53:33 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	else
	{
		while (power > 0)
		{
			result = result * nb;
			power--;
		}
		return (result);
	}
}
/*#include <stdio.h>
int main ()
{
    int result = ft_iterative_power(7, 3);
    printf("Power: %d\n", result);
    return 0;
}*/
