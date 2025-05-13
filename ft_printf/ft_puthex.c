/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd <skatredd@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:30:46 by skatredd          #+#    #+#             */
/*   Updated: 2025/04/01 15:07:02 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long nbr, char format)
{
	int		count;
	char	*base;
	int		temp;

	count = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		temp = ft_puthex(nbr / 16, format);
		if (temp == -1)
			return (-1);
		count += temp;
	}
	if (ft_putchar(base[nbr % 16]) == -1)
		return (-1);
	return (count + 1);
}
