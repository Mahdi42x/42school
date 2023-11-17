/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafolabi <tafolabi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:02:50 by tafolabi          #+#    #+#             */
/*   Updated: 2023/09/06 16:07:15 by tafolabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
 int main(void)
{
 	char src[] = "123456789";
 	char dest[8];

 	unsigned int copied = ft_strlcpy(dest, src, sizeof(dest));

 	printf("Copied %u characters: %s\n", copied, dest);

 	return 0;
}
