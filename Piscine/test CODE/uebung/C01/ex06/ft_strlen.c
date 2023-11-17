/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:56:30 by mawada            #+#    #+#             */
/*   Updated: 2023/08/30 14:30:32 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int length = 0;

	while(str[length] != '\0')
	{
		length++;
	}
	return (length);
}

#include <stdio.h>
int	main(void)
{
	int l1 = ft_strlen("gkgksgerfwegwtrghwtghtks");
	printf("%d\n", l1);
}
