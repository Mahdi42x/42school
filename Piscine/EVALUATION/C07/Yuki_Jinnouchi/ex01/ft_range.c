/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 02:16:25 by yjinnouc          #+#    #+#             */
/*   Updated: 2023/09/06 18:25:43 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*array;

	len = max - min;
	if (len <= 0)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (len));
	i = 0;
	while (i < len)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

#include <stdio.h> //for printf
// #include <unistd.h> //for write
#include <stdlib.h>

int *ft_range(int min, int max);

int main(void){
    
    int min, max;
    int *point;
    int i;

    min = 10;
    max = 100;
    point = ft_range(min, max);
    printf("min:%i, max:%i\n", min, max);
    printf("--process--\n");
    i = 0;
    while (i < 100)
    {
    printf("%d ",point[i]);
    i++;
    }
    printf("\n");

    min = 10;
    max = 2;
    point = ft_range(min, max);
    printf("min:%i, max:%i\n", min, max);
    printf("--process--\n");
    printf("%d",point[i]);

    return (0);    
};
