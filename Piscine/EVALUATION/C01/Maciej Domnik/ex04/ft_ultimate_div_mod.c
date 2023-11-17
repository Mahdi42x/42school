/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdomnik <mdomnik@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:49:26 by mdomnik           #+#    #+#             */
/*   Updated: 2023/08/28 13:43:26 by mdomnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

/*
int main(void){
    int a;
    int b;

    a = 42;
    b = 8;

    printf("%d\n", a);
    printf("%d\n", b);

    ft_ultimate_div_mod(&a, &b);

    printf("%d\n", a);
    printf("%d\n", b);

    return (0);
}*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
}
