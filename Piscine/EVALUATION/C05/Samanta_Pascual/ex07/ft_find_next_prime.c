/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spascual <spascual@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/2 12:19:30 by spascual          #+#    #+#             */
/*   Updated: 2023/09/3 12:19:39 by spascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

/*
int main()
{
    printf("Next prime: %d\n", ft_find_next_prime(65));
}
*/

int	ft_is_prime(int nb)
{
	int	x;

	x = nb / 2;
	if (nb == 1 || nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	while (x != 1)
	{
		if ((nb % x) == 0)
		{
			return (0);
		}
		else 
			x--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

/*
<stdio.h>

int ft_find_next_prime(int nb);

int main ()
{
	printf("Next prime: %d\n", ft_find_next_prime(5));
}

int ft_find_next_prime(int nb)
{
	while (ft_find_next_prime(nb) != 1)
	{
		int	x;

		nb++;
		x = nb / 2;
		if (nb == 1 || nb == 2 || nb == 3 || nb == 5 || nb == 7)
			return (1);
		while (x != 1)
		{
			if ((nb % x) == 0)
			{
				return (0);
			}
			else 
				x--;
		}
	}
	return (nb);
}
*/
