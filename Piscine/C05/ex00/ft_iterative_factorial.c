/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:32:44 by mawada            #+#    #+#             */
/*   Updated: 2023/09/11 09:47:39 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	result = 1;
	i = 1;
	while (nb >= i)
	{
		result *= i;
		i++;
	}
	return (result);
}
/*#include <stdio.h>
int main() {
    int num = 10;
    int factorial = ft_iterative_factorial(num);

    if (factorial == 0) {
        printf("Invalid input. Factorial is not
       	defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is: %d\n", num, factorial);
    }

    return 0;
}*/
