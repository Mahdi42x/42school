/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelgadi <jdelgadi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:39:33 by jdelgadi          #+#    #+#             */
/*   Updated: 2023/09/06 14:35:47 by jdelgadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 | str[i] > 90)
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
	printf("%d", ft_str_is_uppercase("lscodcmal"));
	printf("%d", ft_str_is_uppercase("17"));
	printf("%d", ft_str_is_uppercase("BEEEEEEGPP"));
	printf("%d", ft_str_is_uppercase("b0ib0ib0ib0ib0ib0ib0i"));
	printf("%d", ft_str_is_uppercase(""));
	return (0);
}*/