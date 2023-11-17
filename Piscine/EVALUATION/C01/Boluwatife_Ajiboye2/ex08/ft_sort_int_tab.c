/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajiboye <bajiboye@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:31:34 by bajiboye          #+#    #+#             */
/*   Updated: 2023/08/28 14:01:54 by bajiboye         ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	arr[10] = {1, 51, 21, 18, 31, 9, 21, 14, 18, 22};
	int	size;
	
	size = 10;
	for(int i = 0; i < size; i++)
	{
		printf("%d-", arr[i]);
	}
	printf("\n");
	ft_sort_int_tab(arr, size);
	for(int i = 0; i < size; i++)
	{
		printf("%d-", arr[i]);
	}
}
*/
