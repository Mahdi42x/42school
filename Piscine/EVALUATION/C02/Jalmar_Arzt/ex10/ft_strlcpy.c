/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarzt <jarzt@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:46:48 by jarzt             #+#    #+#             */
/*   Updated: 2023/09/05 17:03:24 by jarzt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				strln(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	dest[] = "I like turtles and penguins.";
	char	src[] = "Okay. Makes sense.";
	int	ln;

	ln = ft_strlcpy(dest, src, 25);
	printf("dest: %s\nsrc: %s\nreturn: %i\n", dest, src, ln);

}*/

int	strln(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i_d;
	unsigned int	i_s;

	i_d = 0;
	i_s = 0;
	if (size < 1)
		return (0);
	while (dest[i_d] != '\0')
	{
		if (src[i_s] == '\0')
			dest[i_d] = '\0';
		else if (i_s < size)
		{
			dest[i_d] = src[i_s];
			i_s++;
		}
		else if (i_s >= size)
		{
			src[i_s] = '\0';
			dest[i_d] = '\0';
		}
		i_d++;
	}
	return (i_s);
}
