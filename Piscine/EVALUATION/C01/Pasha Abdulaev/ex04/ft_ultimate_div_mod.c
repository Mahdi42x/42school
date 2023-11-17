/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabdulae <pabdulae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 04:22:47 by pabdulae          #+#    #+#             */
/*   Updated: 2023/08/25 05:16:50 by pabdulae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/* printf("%d", *a);
printf("%d", *b);
int main(void)
{
	int a = 15;
	int b = 6;
	ft_ultimate_div_mod(&a, &b);
} */