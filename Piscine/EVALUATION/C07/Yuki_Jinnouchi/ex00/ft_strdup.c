/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 02:16:25 by yjinnouc          #+#    #+#             */
/*   Updated: 2023/09/06 18:22:06 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		n;
	char	*ptr;

	n = 0;
	ptr = str;
	while (*ptr != 0)
	{
		ptr++;
		n++;
	}
	return (n);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dest;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof (char) * (len + 1));
	if (dest != NULL)
	{
		i = 0;
		while (i < len + 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
/* 
#include <stdio.h> //for printf
// #include <unistd.h> //for write
#include <stdlib.h>

char *ft_strdup(char *src);

int main(void){
    
    char *src  = "something";
    char *dest = "test";

    printf("src  adress is %p\n", (void*)src);
    printf("src string  is %s\n", src);
    printf("dest adress is %p\n", (void*)dest);
    printf("dest string is %s\n", dest);
    printf("--process--\n");
    dest = ft_strdup(src);
    printf("src  adress is %p\n", (void*)src);
    printf("src string  is %s\n", src);
    printf("dest adress is %p\n", (void*)dest);
    printf("dest string is %s\n", dest);

    return (0);    
}; */