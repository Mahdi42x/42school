/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 02:16:25 by yjinnouc          #+#    #+#             */
/*   Updated: 2023/09/06 18:26:58 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	len = max - min;
	if (len <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int *) * (len));
	if (range == NULL)
		return (-1);
	else 
	{
		i = 0;
		while (i < len)
		{
			(*range)[i] = (min + i);
			i++;
		}
		return (len);
	}
}
/* 
#include <stdio.h> //for printf
// #include <unistd.h> //for write
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void){
    
    int min, max;
    int len;
    int *range;
    int i;

    min = 10;
    max = 100;
    printf("min:%i, max:%i\n", min, max);
    printf("--process--\n");
    len = ft_ultimate_range(&range, min, max);
    printf("%i\n",len);
    printf("pointer:%p\n", range);

    i = 0;
    while (i < 100)
    {
    printf("%d ",range[i]);
    i++;
    }
    printf("\n");

    min = 10;
    max = 5;
    printf("min:%i, max:%i\n", min, max);
    printf("--process--\n");
    len = ft_ultimate_range(&range, min, max);
    printf("%i\n",len);
    printf("pointer:%p\n", range);

    return (0);    
};
 */