/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdomnik <mdomnik@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:53:52 by mdomnik           #+#    #+#             */
/*   Updated: 2023/08/28 13:44:36 by mdomnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);


int main(void){
    int a;
    int b;
    int div;
    int mod;

    a = 42;
    b = 8;
    div = 0;
    mod = 0;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", div);
    printf("%d\n", mod);

    ft_div_mod(a, b, &div, &mod);

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", div);
    printf("%d\n", mod);

    return (0);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
