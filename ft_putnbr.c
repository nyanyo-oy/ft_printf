/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 13:41:30 by kenakamu          #+#    #+#             */
/*   Updated: 2025/05/11 13:42:06 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	len;

	if (n == INT_MIN)
		return (ft_putstr("-2147483648"));
	len = 0;
	if (n < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		len++;
		n *= -1;
	}
	if (n / 10)
		len += ft_putnbr(n / 10);
	if (ft_putchar('0' + (n % 10)) == -1)
		return (-1);
	len++;
	return (len);
}
