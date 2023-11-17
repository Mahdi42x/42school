/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabelo- <mrabelo-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:54:06 by mrabelo-          #+#    #+#             */
/*   Updated: 2023/08/26 19:04:34 by mrabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int*div, int*mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int a = 10;
	int b = 2;
	int d;
	int m;

	ft_div_mod(a, b, &d, &m);
	printf("div %d\n", d);
	printf("mod %d\n", m);
	return (0);
}*/
