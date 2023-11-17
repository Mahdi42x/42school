/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabelo- <mrabelo-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:11:06 by mrabelo-          #+#    #+#             */
/*   Updated: 2023/08/26 19:35:02 by mrabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int*a, int*b)
{
	int	n_a;
	int	n_b;

	n_a = *a;
	n_b = *b;
	*a = n_a / n_b;
	*b = n_a % n_b;
}

/*int	main(void)
{
	int a = 10;
	int b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("div %d\n", a);
	printf("mod %d\n", b);
	return (0);
}*/
