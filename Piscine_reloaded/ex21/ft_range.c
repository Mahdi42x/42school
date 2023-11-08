/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:15:50 by mawada            #+#    #+#             */
/*   Updated: 2023/11/08 16:32:32 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int	i;
	int	*dest;

	i = 0;
	dest = (int *)malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (0);
	if (dest)
	{
		while (min < max)
		{
			dest[i] = min;
			min++;
			i++;
		}

	}
	return (dest);
}

#include <stdio.h>

int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}
