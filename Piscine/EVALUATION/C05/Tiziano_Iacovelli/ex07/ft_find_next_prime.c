/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:26:30 by tiacovel          #+#    #+#             */
/*   Updated: 2023/09/05 11:44:11 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (!ft_is_prime(nb))
	{
		while (nb < 2147483647 && !ft_is_prime(nb))
			nb++;
	}
	return (nb);
}

#include <stdio.h>

int main(void)
{
	int number;

	number = 205;
	printf("Next prime number after %d is: %d\n", number, 
			ft_find_next_prime(number));
	return (0);
}
