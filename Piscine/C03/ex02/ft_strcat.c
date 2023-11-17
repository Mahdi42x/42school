/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:43:20 by mawada            #+#    #+#             */
/*   Updated: 2023/09/04 13:08:37 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' )
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
    char dest[100] = "Hello, ";
    char src[] = "world!";
	
    printf("before: %s\n", src);
    ft_strcat(dest, src);
    printf("Concatenated string: %s\n", dest);
}*/
