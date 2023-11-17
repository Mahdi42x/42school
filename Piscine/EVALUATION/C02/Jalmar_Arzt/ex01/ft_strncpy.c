/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarzt <jarzt@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:00:07 by jarzt             #+#    #+#             */
/*   Updated: 2023/09/04 13:21:31 by jarzt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		strln(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
/*
int	main(void)
{
	char	strD[] = "yeah kinda empty rn";
	char	strS[] = "a short string";
	char	*p_strD;

	printf("pre-function strD: %s\n", strD);

	p_strD = ft_strncpy(strD, strS, 7);

	printf("post-function strD: %s\n", p_strD);

	return (0);
}*/

int	strln(char *str)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i_d;
	unsigned int	i_s;

	i_d = 0;
	i_s = 0;
	if (strln(dest) < strln(src))
		return ("Error");
	while (dest[i_d] != '\0')
	{
		if (src[i_s] == '\0')
			dest[i_d] = '\0';
		else if (i_s < n)
		{
			dest[i_d] = src[i_s];
			i_s++;
		}
		else if (i_s >= n)
		{
			src[i_s] = '\0';
			dest[i_d] = '\0';
		}
		i_d++;
	}
	return (dest);
}
