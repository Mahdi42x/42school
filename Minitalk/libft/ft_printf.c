/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:28:13 by mawada            #+#    #+#             */
/*   Updated: 2024/01/17 17:26:00 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_format(char sign, va_list args)
{
	int	count;

	count = 0;
	if (sign == 'c')
		count += print_char(va_arg(args, int));
	else if (sign == 's')
		count += print_str(va_arg(args, char *));
	else if (sign == 'd' || sign == 'i')
		count += print_digit((long)va_arg(args, int), 10, 0);
	else if (sign == 'x')
		count += print_digit((long)va_arg(args, unsigned int), 16, 0);
	else if (sign == 'X')
		count += print_digit((long)va_arg(args, unsigned int), 16, 1);
	else if (sign == 'u')
		count += print_unsigned(va_arg(args, unsigned int));
	else if (sign == 'p')
		count += print_pointer(args);
	else
		count += write(1, &sign, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	va_start(args, format);
	count = 0;
	if (!format)
		return (-1);
	while (*format != '\0')
	{
		if (format[0] == '%')
			count += print_format(*(++format), args);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(args);
	return (count);
}

/*int main(void)
{
    ft_printf("Test 1: Char - %c\n", 'A');
    printf("Test 1: Char - %c\n", 'A');
    ft_printf("Test 2: String - %s\n", "Hello, World!");
    printf("Test 2: String - %s\n", "Hello, World!");
    ft_printf("Test 3: Pointer - %p\n", (void *)1234);
    printf("Test 3: Pointer - %p\n", (void *)1234);
    ft_printf("Test 4: Integer - %d\n", 42);
    printf("Test 4: Integer - %d\n", 42);
    ft_printf("Test 5: Integer - %i\n", -42);
    printf("Test 5: Integer - %i\n", -42);
    ft_printf("Test 6: Unsigned - %u\n", 12345);
    printf("Test 6: Unsigned - %u\n", 12345);
    ft_printf("Test 7: Hex - %x\n", 255);
    printf("Test 7: Hex - %x\n", 255);
    ft_printf("Test 8: Hex - %X\n", 255);
    printf("Test 8: Hex - %X\n", 255);
    ft_printf("Test 9: Prozentzeichen - %%\n");
    printf("Test 9: Prozentzeichen - %%\n");

    return (0);
}*/
