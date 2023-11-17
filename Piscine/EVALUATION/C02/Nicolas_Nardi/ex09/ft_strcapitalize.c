/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnardi <nnardi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:50:54 by nnardi            #+#    #+#             */
/*   Updated: 2023/09/07 12:25:51 by nnardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] = str[a] + 32;
		}
		a++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	b;

	ft_lowercase(str);
	a = 0;
	b = 1;
	while (str[a] != '\0')
	{
		if (str[a] <= 'z' && str[a] >= 'a')
		{
			if (b == 1)
				str[a] = str[a] - 32;
			b = 0;
		}
		else if (str[a] <= '9' && str[a] >= '0')
			b = 0;
		else
			b = 1;
		a++;
	}
	return (str);
}
int	main(void)
{
	char a[] = "salut, coMMEnt tu vas ? 42mots quarante-deux; cinquante+et+un JOJsajkOJKOKsa JSOASJ cjsjaisja";
	printf("Original: %s\n", a);
	ft_strcapitalize(a);
	printf("Capitalized: %s\n", a);
	return (0);
}
