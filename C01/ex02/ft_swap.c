/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:21:55 by mawada            #+#    #+#             */
/*   Updated: 2023/08/28 10:22:51 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
#include <stdio.h>

void ft_swap(int *a, int *b);

int main() {
    int num1 = 5;
    int num2 = 10;

    printf("Vor dem Tausch: num1 = %d, num2 = %d\n", num1, num2);

    ft_swap(&num1, &num2);

    printf("Nach dem Tausch: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
*/
