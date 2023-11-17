/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajiboye <bajiboye@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:31:34 by bajiboye          #+#    #+#             */
/*   Updated: 2023/08/28 10:09:52 by bajiboye         ###   ########.fr       */
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
	int	counter;
	int	counter2;
	int	*ptr_temp;
	int	temp;

	counter = 0;
	while (counter < size - 1)
	{
		counter2 = 0;
		while (counter2 < size - counter - 1)
		{
			if (*(tab + counter2) > *(tab + counter2 + 1))
			{
				ft_swap(tab + counter2, tab + counter2 + 1);
			}
			counter2++;
		}
		counter++;
	}
}

/*
int	main(void)
{
	int	arr[6] = {1, 9, 21, 14, 18, 22};
	int	size;
	
	size = 6;
	for(int i = 0; i < size; i++)
	{
		printf("%d-", arr[i]);
	}
	printf("\n");
	ft_sort_int_tab(&arr[0], size);
	for(int i = 0; i < size; i++)
	{
		printf("%d-", arr[i]);
	}
}
*/
