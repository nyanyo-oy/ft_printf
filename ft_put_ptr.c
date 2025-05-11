/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 13:40:14 by kenakamu          #+#    #+#             */
/*   Updated: 2025/05/11 14:03:30 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_ptr(void *ptr)
{
	int	len;
	int	hex_len;

	len = 0;
	if (ptr == NULL)
	{
		if (ft_putstr("(nil)") == -1)
			return (-1);
		return (5);
	}
	if (ft_putstr("0x") == -1)
		return (-1);
	len = 2;
	hex_len = ft_put_hex((uintptr_t)ptr, 1);
	if (hex_len == -1)
		return (-1);
	return (len + hex_len);
}
