/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:59:38 by mawada            #+#    #+#             */
/*   Updated: 2023/08/29 11:22:03 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>  

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
/*
int main(void)
{
	ft_putstr("und ich hab jeden Charakter einzeln ausgegeben :/");
	}
*/	
