/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavicka <bsavicka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:07:31 by bsavicka          #+#    #+#             */
/*   Updated: 2023/08/31 15:07:32 by bsavicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
char test1[] = "RETURNONE";
char test2[] = "Return0;";
char test3[] = {'\0'};

printf("%i\n", ft_str_is_uppercase(test1));
printf("%i\n", ft_str_is_uppercase(test2));
printf("%i\n", ft_str_is_uppercase(test3));
}*/
