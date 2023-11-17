/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarlier <ecarlier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:30:56 by ecarlier          #+#    #+#             */
/*   Updated: 2023/08/26 16:31:03 by ecarlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//takeout stdio 
//#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size);

/*int main() {

	int array[5] = {1, 2, 3, 4, 5 };
//display the array before the function	
	printf("array before function ; ");
	int loop;
	for(loop = 0; loop < 5; loop++)
		printf("%d", array[loop]);
      
	ft_rev_int_tab(array, 5);
	return 0;
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;
	int	i;

	end = size -1;
	start = 0;
	i = 0;
	while (i <= size / 2)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		i++;
		start++;
		end--;
	}
}
