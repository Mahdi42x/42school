/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelgadi <jdelgadi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:13:30 by jdelgadi          #+#    #+#             */
/*   Updated: 2023/09/11 11:02:16 by jdelgadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int     main(void)
{
        printf("%d", ft_str_is_numeric("[][][][][][][]"));
        printf("%d", ft_str_is_numeric("472096321"));
        printf("%d", ft_str_is_numeric("47dh29dhc8"));
        printf("%d", ft_str_is_numeric("b0ib0ib0ib0ib0ib0ib0i"));
        printf("%d", ft_str_is_numeric(""));
        return (0);
}*/
