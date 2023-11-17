/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:10:07 by mawada            #+#    #+#             */
/*   Updated: 2023/09/05 09:23:32 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main()
{
    char s1[] = "Hello, World!";
    char s2[] = "Hello, Universe!";
    unsigned int n = 8; // Anzahl der Zeichen, die verglichen werden sollen

    int result = ft_strncmp(s1, s2, n);

    if (result < 0)
    {
        printf("s1 is greater than s2\n");
    }
    else if (result > 0)
    {
        printf("s2 is greater than s1\n");
    }
    else
    {
        printf("s1 und s2 sind gleich in den ersten %u Zeichen\n", n);
    }

    return 0;
}
#include <stdio.h>
int main (void)
{
  char str1[] = "abcd", str2[] = "aBcd";
  int result;
  unsigned int n = 10;

  result = ft_strncmp(str1, str2, n);
  printf("strncmp(str1, str2) = %d\n", result);

  return 0;
}*/
