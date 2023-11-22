/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:58:16 by mawada            #+#    #+#             */
/*   Updated: 2023/11/16 15:58:45 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static int	ft_get_size(long int n)
{
	int	size;

	size = 1;
	if (n < 0)
	{
		n *= -1;
		size++;
	}
	while (n > 9)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static void	ft_set_str(char *ptr, long int num, int i, int size)
{
	if (num < 0)
	{
		ptr[0] = '-';
		num *= -1;
	}
	if (num > 9)
	{
		ft_set_str(ptr, (num / 10), i + 1, size);
		ptr [size - 1 - i] = (char)((num % 10) + 48);
	}
	if (num < 10)
		ptr[size - 1 - i] = (char)(num + 48);
}

char	*ft_itoa(int n)
{
	int			size;
	long int	num;
	char		*ptr;
	int			i;

	i = 0;
	num = n;
	size = ft_get_size(num);
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_set_str(ptr, num, i, size);
	ptr[size] = 0;
	return (ptr);
}
