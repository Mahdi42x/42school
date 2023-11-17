/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajiboye <bajiboye@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:51:12 by bajiboye          #+#    #+#             */
/*   Updated: 2023/08/28 10:09:23 by bajiboye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	*ptr_temp;
	int	temp;

	counter = (size - 1) / 2;
	ptr_temp = tab + (size - 1);
	while (counter >= 0)
	{
		temp = *ptr_temp;
		*ptr_temp = *tab;
		*tab = temp;
		tab++;
		ptr_temp--;
		counter--;
	}
}
