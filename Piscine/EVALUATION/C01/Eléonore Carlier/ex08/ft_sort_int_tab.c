/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarlier <ecarlier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:08:36 by ecarlier          #+#    #+#             */
/*   Updated: 2023/08/26 19:08:42 by ecarlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

/*int	main(void)
{
	
	int array[5] = {4, 2, 5, 1, 3 };
//display the array before the function	
	printf("array before function ; ");
	int loop;
	for(loop = 0; loop < 5; loop++)
		printf("%d", array[loop]);
      	printf("\n");
	ft_sort_int_tab(array, 5);
	return (0);
}
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j; 
	int	temp;

	i = size -1;
	while (i >= 0)
	{
		j = 0;
		while (j < i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i--;
	}
}
