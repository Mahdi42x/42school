/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavicka <bsavicka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:36:17 by bsavicka          #+#    #+#             */
/*   Updated: 2023/08/31 14:37:04 by bsavicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)cd
{
char test1[] = "1";
char test2[] = "0;";
char test3[] = {'\0'};

printf("%i\n", ft_str_is_numeric(test1));
printf("%i\n", ft_str_is_numeric(test2));
printf("%i\n", ft_str_is_numeric(test3));
return (0);
}*/
