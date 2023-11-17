/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavicka <bsavicka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:11:04 by bsavicka          #+#    #+#             */
/*   Updated: 2023/08/31 15:11:05 by bsavicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= ' ') && (str[i] <= '~'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
char test1[] = "return1;";
char test2[] = "Retur\n0;";
char test3[] = {'\0'};

printf("%i\n", ft_str_is_printable(test1));
printf("%i\n", ft_str_is_printable(test2));
printf("%i\n", ft_str_is_printable(test3));
}*/
