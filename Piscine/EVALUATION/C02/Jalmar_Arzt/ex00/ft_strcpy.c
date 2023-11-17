/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarzt <jarzt@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:54:04 by jarzt             #+#    #+#             */
/*   Updated: 2023/08/31 12:06:38 by jarzt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		strln(char *str);
char	*ft_strcpy(char *dest, char *src);
/*
int	main(void)
{
	char	strD[] = "fifty thousand penguins";
	char	strS[] = "one one remains";
	char	*p_strD;

	printf("pre-function str01: %s\n", strD);
	
	p_strD = ft_strcpy(strD, strS);
	
	printf("post-function str01: %s\n", p_strD);

	return(0);
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i_d;
	int	i_s;
	int	destln;

	i_d = 0;
	i_s = 0;
	destln = strln(dest);
	if (destln < strln(src))
		return ("Error");
	while (i_d < destln)
	{
		if (src[i_s] == '\0')
			dest[i_d] = '\0';
		else
		{
			dest[i_d] = src[i_s];
			i_s++;
		}
		i_d++;
	}
	return (dest);
}
