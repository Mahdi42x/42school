/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:51:18 by kaan              #+#    #+#             */
/*   Updated: 2023/09/04 22:28:52 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	available_space;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	available_space = size - i - 1;
	while (src[j] != '\0' && j < available_space)
	{
		dest[i + j] = src[j];
		j++;
	}
	while (dest[i + j] != '\0')
	{
		dest[i + j] = '\0';
		i++;
	}
	return (i + j);
}
/*int main()
{
	char destination[7] = "Hello";
	char source[] = "Kang";
	
	int i = ft_strlcat(destination, source, 7);
	printf("%s\n", destination);
	printf("%d", i);
}*/
