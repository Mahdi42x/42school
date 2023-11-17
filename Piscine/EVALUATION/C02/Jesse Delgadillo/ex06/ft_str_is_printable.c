/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelgadi <jdelgadi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:39:33 by jdelgadi          #+#    #+#             */
/*   Updated: 2023/09/06 14:37:09 by jdelgadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_str_is_printable("seventeen"));
	printf("%d", ft_str_is_printable("17\n"));
	printf("%d", ft_str_is_printable("47dh\r29dhc8"));
	printf("%d", ft_str_is_printable("b0ib0ib0ib\t0ib0ib0ib0i"));
	printf("%d", ft_str_is_printable(""));
	return (0);
}*/
