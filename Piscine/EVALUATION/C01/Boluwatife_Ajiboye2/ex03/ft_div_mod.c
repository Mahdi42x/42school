/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajiboye <bajiboye@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:47:34 by bajiboye          #+#    #+#             */
/*   Updated: 2023/08/28 11:55:57 by bajiboye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	division;
	int	modular;

	if (b != 0)
	{
		division = a / b;
		modular = a % b;
		*div = division;
		*mod = modular;
	}
}

int	main(void)
{
	int a = 10;
	int b = 5;
	int *ptr = &a;
	int *second_ptr = &b;
	
	ft_div_mod(10, 5, ptr, second_ptr);
	printf("%d, %d", *ptr, *second_ptr);
	
}
