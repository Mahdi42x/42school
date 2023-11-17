/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelgadi <jdelgadi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:55:11 by jdelgadi          #+#    #+#             */
/*   Updated: 2023/09/06 14:30:54 by jdelgadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 | str[i] > 122)
		{
			return (0);
		}
		else if (90 < str[i] && str[i] < 97)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_str_is_alpha("[][][][][][][]"));
	printf("%d", ft_str_is_alpha("seventeen"));
	printf("%d", ft_str_is_alpha("47dh29dhc8"));
	printf("%d", ft_str_is_alpha("b0ib0ib0ib0ib0ib0ib0i"));
	printf("%d", ft_str_is_alpha(""));
	return (0);
}
