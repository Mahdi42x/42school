/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 08:49:05 by mawada            #+#    #+#             */
/*   Updated: 2023/09/15 09:11:04 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	strlength(char	*str)
	{
		int	i;

		i = 0;
		while (str[i] != '\0')
		{
			i++;
		}
		return(i);
	}

void	ft_strrev(char	*str)
{
	char	i;
	char	len;
	char	tmp;

	i = 0;
	len = strlength(str) -1;
	while(len > i)
	{

	tmp = str[i];
	str[i] = str[len];
	str[len] = tmp;
	i++;
	len--;
	}
}

int main()
{
    char str[] = "Hello, World!";
    write(1, "Original string: ", 17);
    write(1, str, strlength(str));
    write(1, "\n", 1);

    ft_strrev(str);

    write(1, "Reversed string: ", 17);
    write(1, str, strlength(str));
    write(1, "\n", 1);

    return 0;
}
