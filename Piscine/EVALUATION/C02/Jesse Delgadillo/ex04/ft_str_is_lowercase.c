/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelgadi <jdelgadi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:39:33 by jdelgadi          #+#    #+#             */
/*   Updated: 2023/09/06 14:34:11 by jdelgadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 | str[i] > 122)
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
	printf("%d", ft_str_is_lowercase("seventeen"));
	printf("%d", ft_str_is_lowercase("17"));
	printf("%d", ft_str_is_lowercase("47dh29dhc8"));
	printf("%d", ft_str_is_lowercase("b0ib0ib0ib0ib0ib0ib0i"));
	printf("%d", ft_str_is_lowercase(""));
	return (0);
}*/