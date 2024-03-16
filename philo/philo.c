/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:17:37 by mawada            #+#    #+#             */
/*   Updated: 2024/03/16 17:27:17 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	//int		ret;

	if (argc != 5 && argc != 6)
		return (write_error("Wrong amount of arguments"));
	printf("%s\n", argv[2]);
}
