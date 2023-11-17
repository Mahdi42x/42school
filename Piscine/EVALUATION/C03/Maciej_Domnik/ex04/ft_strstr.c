/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdomnik <mdomnik@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:19:03 by mdomnik           #+#    #+#             */
/*   Updated: 2023/09/04 21:19:14 by mdomnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

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

/*
int main (void)
{
   char str[500] = "According to all known laws of aviation";
   char to_find[10] = "";
   char *ret;

   ret = ft_strstr(str, to_find);

   printf("The substring is: %s\n", ret);
   
   return(0);	
}
*/
