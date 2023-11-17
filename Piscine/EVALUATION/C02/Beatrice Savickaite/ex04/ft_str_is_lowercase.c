/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavicka <bsavicka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:55:51 by bsavicka          #+#    #+#             */
/*   Updated: 2023/08/31 14:55:55 by bsavicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
char test1[] = "returnone";
char test2[] = "Return0;";
char test3[] = {'\0'};

printf("%i\n", ft_str_is_lowercase(test1));
printf("%i\n", ft_str_is_lowercase(test2));
printf("%i\n", ft_str_is_lowercase(test3));
}*/
