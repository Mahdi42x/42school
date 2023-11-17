/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabdulae <pabdulae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 01:52:08 by pabdulae          #+#    #+#             */
/*   Updated: 2023/08/25 05:16:59 by pabdulae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* 	printf("%d", *div);
	printf("%d", *mod);
 */

/* int main(void)
{
	int a = 0;
	int b = 0;
	ft_div_mod(13, 5, &a, &b);
} */