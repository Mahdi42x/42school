/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:10:15 by mawada            #+#    #+#             */
/*   Updated: 2023/09/07 10:25:16 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	char	*str2;
	int		i;

	str2 = str;
	if (*to_find == '\0')
		return (str);
	while (*str2)
	{
		i = 0;
		if (*str2 == to_find[0])
		{
			while ((str2[i] == to_find[i]) && (to_find[i] != '\0'))
			{
				i++;
			}
			if (to_find[i] == '\0')
			{
				return (str2);
			}
		}
		str2++;
	}
	return (0);
}
/*char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == to_find[j] && str[i] && to_find[j])
		{
			i++;
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i - j]);
		}
		i++;
	}
	return (0);
}*/
/*char	*ft_strstr(char *str, char *to_find)
{
	char	*string;
	char	*find;

	string = str;
	find = to_find;
	while (*str != '\0')
	{
		while (*string && *find && *string == *find)
		{
			string++;
			find++;
		}
		if (!*find)
		{
			return (str);
		}
		str++;
	}
	return (0);
}*/
/*
#include <stdio.h>

int main() 
{
    char str[] = "thats my Text about Sauerkraut";
    char to_find[] = "n";

    char *result = ft_strstr(str, to_find) +1;

    if (result != (NULL))
    {
        printf("'%s' was found in '%s'. In Position %ld.\n", 
	to_find, str, result - str);
	}
	else
	{
        printf("'%s' was not found in '%s'.\n", to_find, str);
	}
    return 0;
}*/
/*
#include <stdio.h>
int main (void)
{
   char str[500] = "I hate this task so much";
   char to_find[10] = "taske";
   char *ret;

   ret = ft_strstr(str, to_find);

   printf("The substring is: %s\n", ret);

   return(0);
}*/
