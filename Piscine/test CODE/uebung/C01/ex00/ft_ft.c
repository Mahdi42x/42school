/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:45:32 by mawada            #+#    #+#             */
/*   Updated: 2023/08/30 10:49:52 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ft(int *nbr)
{
	*nbr = 42;
}
 
#include <stdio.h>

int main(void)
{
	int number = 0;
	int *ptr = &number;

	printf("%d\n", number);
	ft_ft(ptr);
	printf("%d\n", number);
}
