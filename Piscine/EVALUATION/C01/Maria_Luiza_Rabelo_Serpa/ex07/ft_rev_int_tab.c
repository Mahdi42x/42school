/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabelo- <mrabelo-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:43:28 by mrabelo-          #+#    #+#             */
/*   Updated: 2023/08/28 12:25:48 by mrabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int*tab, int size)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		t = tab[i];
		tab[i] = tab[j];
		tab[j] = t;
		i++;
		j--;
	}
}

/*int	main(void)
{
	int	i;
	int	tab[5] = {1,2,3,4,5};
	
	printf("Before");
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", tab[i]);
	}
	
	printf("After");
	ft_rev_int_tab(tab, 5);
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", tab[i]);
	}
	
	return (0);
}*/
