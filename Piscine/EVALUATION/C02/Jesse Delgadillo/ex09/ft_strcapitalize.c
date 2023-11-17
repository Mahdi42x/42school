/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelgadi <jdelgadi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:39:33 by jdelgadi          #+#    #+#             */
/*   Updated: 2023/09/12 12:33:05 by jdelgadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_alphanum(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) && \
				(i == 0 || ft_alphanum(str[i - 1]) == 0))
		{
			str[i] = str[i] - 32;
		}
		else if (str[i] >= 65 && str[i] <= 90 && \
				(i != 0 && ft_alphanum(str[i - 1]) == 1))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	str2[] = "LET ME -BEEEEEEE";
	char	str3[] = "wOuLd yOu LiKe a dOnUt>?";
	char	str4[] = "will +you be my friend?";

	printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", ft_strcapitalize(str2));
	printf("%s\n", ft_strcapitalize(str3));
	printf("%s\n", ft_strcapitalize(str4));
	return (0);
}
