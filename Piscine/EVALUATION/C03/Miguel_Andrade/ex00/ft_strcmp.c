/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguandr <miguandr@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 22:00:03 by miguandr          #+#    #+#             */
/*   Updated: 2023/09/03 22:43:04 by miguandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		s1++;
		s2++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	str1[] = "holaaaaa";
	char	str2[] = "hola";

	ft_strcmp(str1, str2);
	int result = ft_strcmp(str1, str2);
	printf("%d\n", result);
	return (0);
}*/
