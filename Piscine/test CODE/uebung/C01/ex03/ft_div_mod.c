/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:40:19 by mawada            #+#    #+#             */
/*   Updated: 2023/08/30 12:07:33 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>
int main(void)
{
	int z1 = 33;
	int z2 = 2;
	int result, remainder;

	printf("%d, %d, %d, %d\n", z1, z2, result, remainder);
	ft_div_mod(z1, z2, &result, &remainder);
	printf("%d, %d, %d, %d\n", z1, z2, result, remainder);


    int dividend = 33;
    int divisor = 2;
    int division_result, modulus_result;

    ft_div_mod(dividend, divisor, &division_result, &modulus_result);

    printf("Ergebnis der Division: %d\n", division_result);
    printf("Ergebnis des Modulus: %d\n", modulus_result);

}

