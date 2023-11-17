/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:06:39 by ermarti2          #+#    #+#             */
/*   Updated: 2023/08/24 12:43:06 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main ()
{	
	int len1 = ft_strlen("hello");
	int len2 = ft_strlen("1234567890");
	
	printf("Length of 'hello': %d\n", len1);
	printf("Length of '1234567890': %d\n", len2);
	
	return (0);
}
*/
