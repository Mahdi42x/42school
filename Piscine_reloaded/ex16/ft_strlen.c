/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:13:50 by mawada            #+#    #+#             */
/*   Updated: 2023/11/07 13:17:18 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}
/*
#include <stdio.h>

int	ft_strlen(char *str);
int main (void)
{
	printf("%i", ft_strlen("854dsjfksdlk"));
}*/
