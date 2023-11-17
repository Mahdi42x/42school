/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 02:16:25 by yjinnouc          #+#    #+#             */
/*   Updated: 2023/09/06 19:03:59 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

int	ft_catlen(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += ft_strlen(sep);
		i++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;

	if (size <= 0)
	{
		tab = (char *)malloc(sizeof(strs));
		return (tab);
	}
	else
	{
		tab = (char *)malloc(sizeof(char *) * (ft_catlen(size, strs, sep) + 1));
		i = 0;
		while (i < size)
		{
			tab = ft_strcat(tab, strs[i]);
			if (i < size - 1)
				tab = ft_strcat(tab, sep);
			i++;
		}
		return (tab);
	}
}

#include <stdio.h> //for printf
#include <unistd.h> //for write
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(void){
    
    char *tab;
    int size, i;
    // char **strs
    char *sep;
    char *strs[3];

    size = 3;
    // *strs[] = {"this", "is", "text"}
    strs[0] = "this";
    strs[1] = "is";
    strs[2] = "text";
    sep = "What!";

    printf("size :%i\n", size);
    printf("strs :");
    i = 0;
    while (i < size)
    {
    printf("%s ", strs[i]);
    i++;
    }
    printf("\n");
    printf("sep  :%s\n", sep);
    
    printf("--process--\n");
    tab = ft_strjoin(size, strs, sep);
    printf("result :%s\n", tab);

    return (0);    
};

