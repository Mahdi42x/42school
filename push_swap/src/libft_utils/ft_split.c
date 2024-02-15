/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:08:25 by mawada            #+#    #+#             */
/*   Updated: 2024/02/15 15:05:00 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	init_va(size_t *i, int *j, int *x)
{
	*i = 0;
	*j = 0;
	*x = -1;
}

static void	*f_fr(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static char	*fill_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}

static int	word_count(const char *str, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (*str)
	{
		if (*str != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (*str == c)
			x = 0;
		str++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**n;
	size_t	i;
	int		j;
	int		x;

	init_va(&i, &j, &x);
	n = ft_calloc((word_count(s, c) + 1), sizeof(char *));
	if (!n)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && x < 0)
			x = i;
		else if ((s[i] == c || i == ft_strlen(s)) && x >= 0)
		{
			n[j] = fill_word(s, x, i);
			if (!(n[j]))
				return (f_fr(n, j));
			x = -1;
			j++;
		}
		i++;
	}
	return (n);
}
