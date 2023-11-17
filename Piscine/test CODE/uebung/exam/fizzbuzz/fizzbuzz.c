/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:45:17 by mawada            #+#    #+#             */
/*   Updated: 2023/09/14 09:20:51 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	aus(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}

void	fizzbuzz()
{
	int	j;
	char r[99];
	int	i;

	j = 1;
	while (j <= 100)
	{
		if (j % 5 == 0 && j % 3 == 0)
		{
			aus("fizzbuzz");
			write(1, "\n", 1);
		}
		else if (j % 5 == 0)
		{
			aus("buzz");
                        write(1, "\n", 1);
		}
		else if (j % 3 == 0)
		{
			aus("fizz");
                        write(1, "\n", 1);
		}
		else 
		{
			i = 0;
			if (j > 9)
			r[i++] = j / 10 + '0';
			r[i++] = j % 10 + '0';
			r[i] = '\0';
			aus(r);
           	 	aus("\n");
		}
		j++;
	}
}
int	main()
{
	fizzbuzz();
	return (0);
}

