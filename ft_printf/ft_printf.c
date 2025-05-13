/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd <skatredd@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:10:19 by skatredd          #+#    #+#             */
/*   Updated: 2025/04/24 11:34:44 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_format(const char format, va_list args)
{
	int	ret;

	if (format == 'c')
		ret = ft_putchar(va_arg(args, int));
	else if (format == 's')
		ret = ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		ret = ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		ret = ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		ret = ft_puthex((unsigned int)va_arg(args, unsigned int), format);
	else if (format == 'p')
		ret = ft_putptr(va_arg(args, void *));
	else if (format == '%')
		ret = ft_putchar('%');
	else
		return (0);
	if (ret == -1)
		return (-1);
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;
	int		ret;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			ret = ft_handle_format(format[++i], args);
		}
		else
		{
			ret = ft_putchar(format[i]);
		}
		if (ret == -1)
			return (-1);
		count += ret;
		i++;
	}
	va_end(args);
	return (count);
}

// #include "ft_printf.h"
// #include <stdio.h>

// int	main(void)
// {
// 	ft_printf("ft_printf: alpha: %c, num: %c\n", 'c', '2');
// 	printf("printf: alpha: %c, num: %c\n", 'c', '2');
// 	printf("\n \n");
// 	ft_printf("ft_printf: Min: %d, Max: %d\n", -2147483648, 2147483647);
// 	printf("printf: Min: %ld, Max: %d\n", -2147483648, 2147483647);
// 	printf("\n \n");
// 	ft_printf("ft_printf: NULL %s NULL \n", NULL);
// 	printf("printf: NULL %s NULL \n", NULL);
// 	printf("\n \n");
// 	ft_printf("ft_printf: Unsigned: %u\n", 4294967295);
// 	printf("printf: Unsigned: %ld\n", 4294967295);
// 	printf("\n \n");
// 	ft_printf("ft_printf: Hex lowercase: %x\n", 255);
// 	printf("printf: Hex lowercase: %x\n", 255);
// 	printf("\n \n");
// 	ft_printf("ft_printf: Hex uppercase: %X\n", 255);
// 	printf("printf: Hex uppercase: %X\n", 255);
// 	printf("\n \n");
// 	ft_printf("ft_printf: %p %p \n", 0, 0);
// 	printf("printf: %p %p \n", (void *)0, (void *)0);
// 	printf("\n \n");
// 	ft_printf("ft_printf: Percent sign: %%\n");
// 	printf("printf: Percent sign: %%\n");
// 	return (0);
// }