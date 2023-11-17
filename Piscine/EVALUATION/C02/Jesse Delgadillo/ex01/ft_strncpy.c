/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelgadi <jdelgadi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:46:45 by jdelgadi          #+#    #+#             */
/*   Updated: 2023/09/06 14:29:17 by jdelgadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>

int 	main(void)
{
	char	dest[50];
	unsigned int	n = 30;

	ft_strncpy(dest, "I'm a sleeeeeeeeepy boi", n);
	printf("%s\n", dest);
	return (0);
}*/
