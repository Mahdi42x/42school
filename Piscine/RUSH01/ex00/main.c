/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 00:25:35 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/11 22:56:38 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		**args(int argc, char **argv, int *nargs);
void	gen(int **locked, int size);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int		**bord;
	int		size;

	bord = args(argc, argv, &size);
	if (bord != NULL)
	{
		gen(bord, size);
	}
	else
		ft_putstr("Error\n");
}
