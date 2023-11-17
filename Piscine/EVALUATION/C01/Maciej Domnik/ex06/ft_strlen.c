/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdomnik <mdomnik@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:57:18 by mdomnik           #+#    #+#             */
/*   Updated: 2023/08/28 13:39:55 by mdomnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

/*
int main(void){
    char *str;
    int n;

    n = 0;
    printf("%d\n", n);

    str = "this is string";
    
    n = ft_strlen(str);
    printf("String Length is %d\n", n);
} */

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (*str != '\0')
	{
		a++;
		str++;
	}
	return (a);
}
