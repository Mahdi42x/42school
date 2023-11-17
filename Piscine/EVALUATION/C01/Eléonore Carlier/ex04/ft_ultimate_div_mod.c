/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarlier <ecarlier@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:22:20 by ecarlier          #+#    #+#             */
/*   Updated: 2023/08/25 12:29:45 by ecarlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int b*);

/*int	main(void)
{
	ft_ultimate_div_mod(int *a=9, int *b=2);
}*/

void	ft_ultimate_div_mod(int *a, int b*)
{
	int	value_a;
	int	value_b;

	value_a = *a;
	value_b = *b;
	*a = a / b;
	*b = a % b;
}
