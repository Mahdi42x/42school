/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:47:24 by mawada            #+#    #+#             */
/*   Updated: 2023/08/26 11:09:35 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
	if (n < 0)
	{
		write (1, "N", 1);
	}
	else 
	{
		write (1, "P", 1);
	}
}

int	main(void)
{
	ft_is_negative(22);
	ft_is_negative(-22);

}
