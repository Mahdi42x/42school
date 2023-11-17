/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:30:05 by kaan              #+#    #+#             */
/*   Updated: 2023/09/04 22:31:05 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	while (dest[i + j] != '\0')
	{
		dest[i + j] = '\0';
		i++;
	}
	return (dest);
}
/*int main()
{
	char c1[20] = "Hello";
	char c2[] = "\tKang!";

	ft_strncat(c1, c2, 2);
	printf("%s", c1);
}*/
