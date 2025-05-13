/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd <skatredd@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:14:38 by skatredd          #+#    #+#             */
/*   Updated: 2025/04/01 14:50:27 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	int	count;
	int	temp;

	count = 0;
	if (n >= 10)
	{
		temp = ft_putnbr(n / 10);
		if (temp == -1)
			return (-1);
		count += temp;
	}
	if (ft_putchar((n % 10) + '0') == -1)
		return (-1);
	return (count + 1);
}
