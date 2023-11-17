/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdomnik <mdomnik@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:15:04 by mdomnik           #+#    #+#             */
/*   Updated: 2023/08/28 14:47:34 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main(void){
    int tab[5];
    int size;
    int i;

    size = 5;
    tab[0] = 1;
    tab[1] = 2;
    tab[2] = 3;
    tab[3] = 4;
    tab[4] = 5;

    i = 0;
    while(i < size){
        printf("%d\n", tab[i]);
        i++;
    }
    
    ft_rev_int_tab(tab , size);

    i = 0;
    while(i < size){
        printf("%d\n", tab[i]);
        i++;
    }
} 

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < (size / 2))
	{
		b = tab[a];
		tab[a] = tab[size - 1 - a];
		tab[size -1 - a] = b;
		a++;
	}
}
