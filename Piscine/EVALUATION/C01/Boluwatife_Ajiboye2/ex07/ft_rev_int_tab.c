/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajiboye <bajiboye@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:51:12 by bajiboye          #+#    #+#             */
/*   Updated: 2023/08/28 13:46:44 by bajiboye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		ft_swap(&tab[i], &tab[size - i - 1]);
		i++;
	}
}
/*
int	main(void)
{
	int	num[4] = {1, 9, 12, 18};
	//int	*ptr;
	int	size = 4;

	//ptr = num;
	ft_rev_int_tab(num, size);

	for (int i = 0; i < size; i++)
	{
		printf("%d-", num[i]);
	}
}
*/
