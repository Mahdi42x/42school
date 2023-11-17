/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:46:27 by mawada            #+#    #+#             */
/*   Updated: 2023/08/28 10:50:01 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
 
int main() {
    int dividend = 20;
    int divisor = 3;
    int division_result, modulus_result;

    ft_div_mod(dividend, divisor, &division_result, &modulus_result);

    printf("Ergebnis der Division: %d\n", division_result);
    printf("Ergebnis des Modulus: %d\n", modulus_result);

    return 0;
}
*/
