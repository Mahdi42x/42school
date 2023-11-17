/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:48:28 by mawada            #+#    #+#             */
/*   Updated: 2023/09/04 14:09:02 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' && i < nb)
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

int main()
{
    char dest[100] = "Hello, ";
    char src[] = "world!";
    unsigned int nb = 3; // Maximale Anzahl von Zeichen aus src

    ft_strncat(dest, src, nb);
    printf("Concatenated string: %s\n", dest);
    return (0);
}*/
