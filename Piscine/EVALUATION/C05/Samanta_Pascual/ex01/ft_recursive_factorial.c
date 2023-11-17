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

int	ft_recursive_factorial(int nb);
int	is_number(int nb);

/*
int main()
{
    int result = ft_recursive_factorial(4);
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

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (is_number(nb))
	{
		if (nb == 0)
		{
			return (1);
		}
		else
		{
			return (nb * ft_recursive_factorial(nb - 1));
		}
	}
	else
	{
		return (0);
	}
}
