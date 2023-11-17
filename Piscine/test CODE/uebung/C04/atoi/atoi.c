 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 08:43:23 by mawada            #+#    #+#             */
/*   Updated: 2023/09/08 09:31:22 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	ft_putchar(nb + 48);
}
int ft_atoi(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while (*str == 32 || *str >= 8 && *str <= 13)
			str++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
		r = -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		i = i * 10;
		i += *str - 48;
		str++;
	}
	return (i * r);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		char *arr = "-5234";
		ft_putnbr(ft_atoi(arr));
	}
	return (0);
}
/*int		main(void)
{
	char a[] = "    \n\n\v\f\r\t -5234AAAgreghrsth";// -5234
	printf("%d\n", ft_atoi(a));
}*/
