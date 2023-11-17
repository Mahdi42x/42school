/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:34:02 by mawada            #+#    #+#             */
/*   Updated: 2023/08/31 17:57:39 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*char is_alpha(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

char *ft_strcapitalize(char *str)
{
    int i = 0;
    int new_word = 1; // Eine Variable, um den Beginn eines neuen Wortes zu verfolgen.

    while (str[i])
    {
        if (is_alpha(str[i]))
        {
            if (new_word)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                    str[i] -= 32;
                }
                new_word = 0; // Setzen Sie die Variable zurück.
            }
            else
            {
                if (str[i] >= 'A' && str[i] <= 'Z')
                {
                    str[i] += 32;
                }
            }
        }
        else
        {
            new_word = 1; // Setzen Sie die Variable zurück, wenn es kein Buchstabe ist.
        }
        i++;
    }

    return (str);
}

}
/*
#include <stdio.h>
int main(void)
{
	char input[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Original: %s\n", input);
	char *capitalized = ft_strcapitalize(input);
        printf("Capitalized: %s\n", capitalized);
	return 0;
}
*/
