/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:49:56 by mawada            #+#    #+#             */
/*   Updated: 2023/08/30 17:19:45 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
int main() {
    char src[] = "Hello, world!";
    char dest[100];

    ft_strcpy(dest, src);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

  return 0;
}
