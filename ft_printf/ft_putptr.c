/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd <skatredd@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 16:12:04 by skatredd          #+#    #+#             */
/*   Updated: 2025/04/01 14:43:56 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long	num;
	int				count;
	int				hex_count;

	if (!ptr)
		return (ft_putstr("0x0"));
	num = (unsigned long)ptr;
	count = ft_putstr("0x");
	if (count == -1)
		return (-1);
	hex_count = ft_puthex(num, 'x');
	if (hex_count == -1)
		return (-1);
	return (count + hex_count);
}
