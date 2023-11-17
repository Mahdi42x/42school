/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 19:38:42 by mawada            #+#    #+#             */
/*   Updated: 2023/11/16 19:38:47 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	int		i;
	t_list	*el;

	i = 0;
	if (lst[0] == NULL)
		lst[0] = new;
	else
	{
		el = lst[0];
		while (el -> next != NULL)
		{
			el = el -> next;
		}
		el -> next = new;
	}
}
