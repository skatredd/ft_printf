/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd <skatredd@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:16:55 by skatredd          #+#    #+#             */
/*   Updated: 2025/04/01 14:48:39 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	count;
	int	temp;

	count = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		n = -n;
		count++;
	}
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
