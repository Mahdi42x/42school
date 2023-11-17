/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:53:46 by mawada            #+#    #+#             */
/*   Updated: 2023/08/28 10:54:03 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
#include <stdio.h>

int main() {
    int num1 = 20;
    int num2 = 3;

    printf("Vor dem Tausch: num1 = %d, num2 = %d\n", num1, num2);

    ft_ultimate_div_mod(&num1, &num2);

    printf("Nach dem Tausch: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
*/
