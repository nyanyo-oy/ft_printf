/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 13:40:09 by kenakamu          #+#    #+#             */
/*   Updated: 2025/05/11 14:20:26 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(uintptr_t value, int islower)
{
	char	*hex_digits;
	int		i;
	char	buffer[17];

	if (islower)
		hex_digits = "0123456789abcdef";
	else
		hex_digits = "0123456789ABCDEF";
	i = 16;
	buffer[i--] = '\0';
	if (value == 0)
		buffer[i--] = '0';
	else
	{
		while (value > 0)
		{
			buffer[i--] = hex_digits[value % 16];
			value = value / 16;
		}
	}
	if (ft_putstr(&buffer[i + 1]) == -1)
		return (-1);
	return (16 - i - 1);
}
