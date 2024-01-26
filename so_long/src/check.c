/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:57:11 by mawada            #+#    #+#             */
/*   Updated: 2024/01/24 18:45:46 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_memory_allocation(void *ptr)
{
	if (ptr == NULL)
	{
		ft_printf("Error\nMemory allocation failed\n");
		exit(EXIT_FAILURE);
	}
}

int	check_memory_allocation_return1(void *ptr)
{
	if (!ptr)
	{
		ft_printf("Error: Memory allocation failed\n");
		return (1);
	}
	return (0);
}

void	*check_memory_allocation_return_null(void *ptr)
{
	if (!ptr)
	{
		ft_printf("Error: Memory allocation failed\n");
		return (NULL);
	}
	return (ptr);
}

int	filechecker(int ptr, char *argv)
{
	if (ptr == -1)
	{
		ft_printf("Error: Unable to open file %s\n", argv[1]);
		return (1);
	}
	return (0);
}
