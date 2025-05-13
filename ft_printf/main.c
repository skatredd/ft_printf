/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd <skatredd@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:51:58 by skatredd          #+#    #+#             */
/*   Updated: 2025/04/24 11:34:22 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("ft_printf: alpha: %c, num: %c\n", 'c', '2');
	printf("printf: alpha: %c, num: %c\n", 'c', '2');
	printf("\n \n");
	ft_printf("ft_printf: Min: %d, Max: %d\n", -2147483648, 2147483647);
	printf("printf: Min: %ld, Max: %d\n", -2147483648, 2147483647);
	printf("\n \n");
	ft_printf("ft_printf: NULL %s NULL \n", NULL);
	printf("printf: NULL %s NULL \n", NULL);
	printf("\n \n");
	ft_printf("ft_printf: Unsigned: %u\n", 4294967295);
	printf("printf: Unsigned: %ld\n", 4294967295);
	printf("\n \n");
	ft_printf("ft_printf: Hex lowercase: %x\n", 255);
	printf("printf: Hex lowercase: %x\n", 255);
	printf("\n \n");
	ft_printf("ft_printf: Hex uppercase: %X\n", 255);
	printf("printf: Hex uppercase: %X\n", 255);
	printf("\n \n");
	ft_printf("ft_printf: %p %p \n", 0, 0);
	printf("printf: %p %p \n", (void *)0, (void *)0);
	printf("\n \n");
	ft_printf("ft_printf: Percent sign: %%\n");
	printf("printf: Percent sign: %%\n");
	return (0);
}
