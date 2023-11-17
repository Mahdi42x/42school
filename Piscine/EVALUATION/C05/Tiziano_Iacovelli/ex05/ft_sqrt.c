/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:00:51 by tiacovel          #+#    #+#             */
/*   Updated: 2023/09/05 11:43:42 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	index;
	long	nbr;

	nbr = nb;
	if (nbr <= 0)
		return (0);
	if (nbr == 1)
		return (1);
	index = 2;
	if (nbr >= 2)
	{
		while (index * index <= nbr)
		{
			if (index * index == nbr)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
	int number;

	number = 82;
	printf("Sqrt of %d: %d\n", number, ft_sqrt(number));
	return (0);
}
