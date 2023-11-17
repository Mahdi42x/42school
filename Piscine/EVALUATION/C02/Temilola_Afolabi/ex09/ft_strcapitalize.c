/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafolabi <tafolabi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:46:25 by tafolabi          #+#    #+#             */
/*   Updated: 2023/09/06 15:59:56 by tafolabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int	i; 

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i++;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 47) 
			|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			if ((str[i] >= 32 && str[i] <= 47) 
				&& str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
 int main(void)
 {
 	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
 	ft_strcapitalize(str);
 	printf("%s\n", str);
 	return 0;
 }
