/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:41:45 by ermarti2          #+#    #+#             */
/*   Updated: 2023/08/24 12:42:57 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	write (1, str, length);
}
/*
int	main ()
{
	ft_putstr("hello");
	write(1, "\n", 1);
	ft_putstr("wassup");
	return(0);
}
*/
