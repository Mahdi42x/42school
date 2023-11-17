/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 20:08:29 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/18 20:08:31 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	ft_list_swap(t_dict *liste)
{
	int		nb;
	int		suf;
	char	*literal;

	nb = liste->nb;
	suf = liste->suf;
	literal = liste->literal;
	liste->nb = liste->next->nb;
	liste->suf = liste->next->suf;
	liste->literal = liste->next->literal;
	liste->next->nb = nb;
	liste->next->suf = suf;
	liste->next->literal = literal;
}

void	ft_list_sort(t_dict **begin_list)
{
	t_dict	*a;
	t_dict	*b;

	a = *begin_list;
	while (a != NULL)
	{
		b = *begin_list;
		while (b->next != NULL)
		{
			if (b->nb < b->next->nb)
				ft_list_swap(b);
			b = b->next;
		}
		a = a->next;
	}
}
