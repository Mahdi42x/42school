/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikuru <hikuru@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:28:27 by hikuru            #+#    #+#             */
/*   Updated: 2023/09/05 17:29:44 by hikuru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dest [count] = src [count];
		count++;
	}
	while (count < n)
	{
		dest [count] = '\0';
		count++;
	}
	return (dest);
}

/*int	main(void)
{
	char	source[] = "Hey Y'all!";
	char	destination[20];
	unsigned int	length;

	length = 5;
	printf("src1: “%s”\ndst1: “%s”\n", source, destination);
	ft_strncpy(destination, source, length);
	printf("src2: “%s”\ndst2: “%s”, n = %d", source, destination, length);
	return (0);
}*/


