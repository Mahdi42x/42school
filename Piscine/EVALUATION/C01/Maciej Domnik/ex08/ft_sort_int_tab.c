/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdomnik <mdomnik@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:42:35 by mdomnik           #+#    #+#             */
/*   Updated: 2023/08/28 13:36:47 by mdomnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);
void	swap_values(int *sa, int *sb);


int main(void){
    int tab[10];
    int size;
    int i;

    size = 10;
    tab[0] = 14231;
    tab[1] = 24262;
    tab[2] = 36373;
    tab[3] = 674323;
    tab[4] = 5624321;
    tab[5] = 84378;
    tab[6] = 3431;
    tab[7] = 123467;
    tab[8] = 2773472;
    tab[9] = 66;
    // tab[10] = 120;

    i = 0;
    while(i < size){
        printf("%d\n", tab[i]);
        i++;
    }
    
    printf("\n");
    printf("Sort start\n");
    ft_sort_int_tab(tab , size);

    i = 0;
    while(i < size){
        printf("%d\n", tab[i]);
        i++;
    }
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < size - 1)
	{
		k = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[k])
			{
				k = j;
			}
			j++;
		}
		swap_values(&tab[k], &tab[i]);
		i++;
	}
}

void	swap_values(int *sa, int *sb)
{
	int	temp;

	temp = *sa;
	*sa = *sb;
	*sb = temp;
}
