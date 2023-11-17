/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:58:09 by mawada            #+#    #+#             */
/*   Updated: 2023/09/06 13:51:05 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

	a = 0;
	b = 0;
	c = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
		b++;
	if (size <= a)
		b = b + size;
	else
		b = b + a;
	while ((src[c] != '\0') && (a + 1) < size) 
	{
		dest[a] = src[c];
		a++;
		c++;
	}
	dest[a] = '\0';
	return (b); 
}
/*
#include <stdio.h>
int main()
{
    char dest[20] = "Hello";
    char src[] = "World!";
    unsigned int size = 20;

    unsigned int result = ft_strlcat(dest, src, size);

    printf("Zusammengeführte Zeichenkette: %s\n", dest);
    printf("Gesamtlänge: %u\n", result);
    return 0;
}*/
