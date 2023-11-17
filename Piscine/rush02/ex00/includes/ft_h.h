/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 23:01:07 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/18 23:12:44 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H

# define __BUFF 8

# include <fcntl.h>
# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <errno.h>
# include <string.h>
# include <libgen.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_dict
{
	int				nb;
	int				suf;
	char			*literal;
	struct s_dict	*next;
}				t_dict;

char			**ft_split(char *str, char *charset);
char			*ft_strdup(char *src);
t_dict			*ft_list_push_strs(int size, char **strs);
t_dict			*ft_create_elem(int n, int suf, char *literal);
int				ft_list_push_front(t_dict **liste, int n, int suf, char *lit);
int				ft_file_read(char *filepath, t_dict **begin);
int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				parse_dict(t_dict **begin, char *str);
int				ft_strlen(char *str);
int				check_number(char *nbr, t_dict *begin_list);
void			ft_list_sort(t_dict **begin_list);
void			ft_list_clear(t_dict **begin_with);
void			check_and(int nb, int i, char *nbr);
int				check_nb(int nb, t_dict *begin_list);
void			send_to_print(int nbr, t_dict *begin_list, int i, char *nbrc);
void			print_suff(int i, char *nbr, int j, t_dict *begin_list);
int				check_length(char *nbr);
int				check_suff(int j, t_dict *begin_list);

#endif
