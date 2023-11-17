/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:24:09 by mawada            #+#    #+#             */
/*   Updated: 2023/08/29 11:30:58 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

#include <stdio.h>
int main()
{
	int len1 = ft_strlen("helloworldfhiowerhfioewiofw");
	int len2 = ft_strlen("lalalala");
	printf("%d\n", len1);
	printf("%d\n", len2);
}

