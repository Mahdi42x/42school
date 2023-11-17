/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafolabi <tafolabi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:26:41 by tafolabi          #+#    #+#             */
/*   Updated: 2023/09/04 13:29:45 by tafolabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strncmp(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i > n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*int	main(void)
{
	char	src[] = "I love You!";
	char	dest[16];
	
	ft_strncmp(dest, src, 6);
	printf("Source: %s\n", src);
	printf("destination: %s\n", dest);
		
	return (0);

}*/
