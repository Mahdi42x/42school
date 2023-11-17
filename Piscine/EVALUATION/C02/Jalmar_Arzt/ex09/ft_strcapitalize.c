/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarzt <jarzt@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:54:54 by jarzt             #+#    #+#             */
/*   Updated: 2023/09/05 11:54:56 by jarzt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		b_num(char c);
int		b_ucase(char c);
int		b_lcase(char c);
char	*ft_strcapitalize(char *str);

#include <stdio.h>

int	main(int argc, char *argv[])
{
	printf("Input: %s\n", ft_strcapitalize(argv[1]));
	return (argc);
}

int	b_num(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int	b_ucase(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

int	b_lcase(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	b_new_word;

	i = 0;
	b_new_word = 1;
	while (str[i] != '\0')
	{
		if (b_new_word == 1 && b_lcase(str[i]) == 1)
		{
			str[i] -= 32;
			b_new_word = 0;
		}
		else if (b_new_word == 1 && 
			(b_ucase(str[i]) == 1 || b_num(str[i]) == 1))
			b_new_word = 0;
		else if (b_ucase(str[i]) == 1)
			str[i] += 32;
		if (b_num(str[i]) == 0 && b_lcase(str[i]) == 0
			&& b_ucase(str[i]) == 0)
			b_new_word = 1;
		i++;
	}
	return (str);
}
