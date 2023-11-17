/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafolabi <tafolabi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:45:08 by tafolabi          #+#    #+#             */
/*   Updated: 2023/09/05 19:45:44 by tafolabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '32' && str[i] <= '126'))
		{
			return (0);
		}
		i++;
	}
	if (str[1] == '\0')
		return (1);
	return (1);
}

/*int	main(void)
{
	char str[] = "Apple";
	int	result;

	result = ft_str_is_printable(str);
	printf("%d", result);
	return (0);
}*/
