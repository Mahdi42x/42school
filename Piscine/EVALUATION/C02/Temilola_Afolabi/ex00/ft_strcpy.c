/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafolabi <tafolabi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:48:25 by tafolabi          #+#    #+#             */
/*   Updated: 2023/08/30 15:51:24 by tafolabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest); 
}
// int	main(void)
// {
// 	char src[] = "This is the string to be copied!";
// 	char dest[40];
// 	char	*result;

// 	result = ft_strcpy(dest, src);
// 	printf("Source: %s\n", src);
// 	printf("Destination: %s\n", dest);
// 	// write(1, &result, 1);
// 	return (0);
// }
