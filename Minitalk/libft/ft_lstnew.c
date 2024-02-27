/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 19:37:12 by mawada            #+#    #+#             */
/*   Updated: 2023/11/16 19:37:16 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*l1;

	l1 = (t_list *)malloc(sizeof(t_list));
	if (!l1)
		return (NULL);
	l1 -> content = content;
	l1 -> next = NULL;
	return (l1);
}
