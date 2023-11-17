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
/*
int ft_fibonacci(int index);

int main()
{
    int result = ft_fibonacci(2);
    printf("Fibonacci number: %d\n", result);
    return 0;
}
*/
int	ft_fibonacci(int index)
{
	if (index == 1)
		return (0);
	else if (index == 2 || index == 3)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include <stdio.h>

int ft_fibonacci(int index);

int main()
{
    int result = ft_fibonacci(4);
    printf("Fibonacci number: %d\n", result);
    return 0;
}

int ft_fibonacci(int index)
{
	if (index == 1)
		return 0;
	else if (index == 2 || index == 3)
		return 1;

    int fib_prev = 1; // Valor anterior en la serie de Fibonacci
    int fib_current = 1; // Valor actual en la serie de Fibonacci

    for (int i = 4; i <= index; i++)
    {
        int fib_next = fib_prev + fib_current;
        fib_prev = fib_current;
        fib_current = fib_next;
    }

    return fib_current;
}*/
