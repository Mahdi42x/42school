/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavicka <bsavicka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:42:08 by bsavicka          #+#    #+#             */
/*   Updated: 2023/08/31 13:46:00 by bsavicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
char test1[] = "returnone";
char test2[] = "return0";
char test3[] = {'\0'};

printf("%i\n", ft_str_is_alpha(test1));
printf("%i\n", ft_str_is_alpha(test2));
printf("%i\n", ft_str_is_alpha(test3));
}*/
