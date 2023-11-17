/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyaromch <iyaromch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:51:13 by iyaromch          #+#    #+#             */
/*   Updated: 2023/08/26 18:04:46 by iyaromch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)

{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		put_char('N');
	else
		put_char('P');
}
