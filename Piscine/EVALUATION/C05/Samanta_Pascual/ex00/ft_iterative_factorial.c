/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spascual <spascual@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:19:30 by spascual          #+#    #+#             */
/*   Updated: 2023/08/27 12:19:39 by spascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
/*
int ft_iterative_factorial(int nb);
int is_number(int nb);

int main()
{
    int result = ft_iterative_factorial(4);
    printf("Factorial: %d\n", result);
    return 0;
}
*/
int	is_number(int nb)
{
	if (nb >= 0 && nb <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (is_number(nb))
	{
		while (nb > 0)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
	else
	{
		return (0);
	}
}
