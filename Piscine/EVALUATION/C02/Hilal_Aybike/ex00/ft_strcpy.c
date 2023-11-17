/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikuru <hikuru@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:59:46 by hikuru            #+#    #+#             */
/*   Updated: 2023/09/06 15:51:06 by hikuru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Reproduce the behavior of the function strcpy (man strcpy).//

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	source[] = "Hello Everybody!";
	char	destination[30];

	ft_strcpy(destination, source);
	printf("src: “%s”\ndst: “%s”\n", source, destination);
	return (0);
}*/
