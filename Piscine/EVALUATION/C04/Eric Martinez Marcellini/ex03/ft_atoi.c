/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:15:06 by ermarti2          #+#    #+#             */
/*   Updated: 2023/08/28 12:11:50 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int result;
	int sign;
	int i;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}

#include <stdio.h>

int main() {
    char *test_strings[] = {
        "12345",       // Positive number
        "-678",        // Negative number
        "0",           // Zero
        "  987",       // Leading spaces
        "+42",         // Leading plus sign
        "  -123abc",   // Ignore non-numeric characters after digits
        "123abc",      // Stop at non-numeric characters
        "-2147483648", // Minimum signed int value
        "2147483647",  // Maximum signed int value
        "9999999999",  // Larger than maximum signed int value
        "-9999999999", // Smaller than minimum signed int value
    };

    int num_tests = sizeof(test_strings) / sizeof(test_strings[0]);

    for (int i = 0; i < num_tests; i++) {
        int result = ft_atoi(test_strings[i]);
        printf("String: \"%s\", Converted: %d\n", test_strings[i], result);
    }

    return 0;
}
