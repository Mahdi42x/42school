/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:54:08 by mawada            #+#    #+#             */
/*   Updated: 2023/09/01 12:17:57 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main() {
    char str1[] = "Hello";
    char str2[] = "World";

    int result = ft_strcmp(str1, str2);

    if (result == 0) {
        printf("same.\n");
    } else if (result < 0) {
        printf("first is grater.\n");
    } else {
        printf("second is greater.\n");
    }

    return 0;
}
*/
/*
#include <stdio.h>

int main(void)
{
  char str1[] = "aBcde", str2[] = "abcde";
  int result;

  result = ft_strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);

  return 0;
}*/
