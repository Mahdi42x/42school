/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:00:51 by tiacovel          #+#    #+#             */
/*   Updated: 2023/09/05 11:42:57 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (i < nb)
	{
		res = res * (nb - i);
		i++;
	}
	return (res);
}

#include <stdio.h>

int main(void)
{
	int numb;

	numb = 10;
	printf("Factorial of %d: %d\n", numb, ft_iterative_factorial(numb));
	return (0);
}
