/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 03:08:28 by kenakamu          #+#    #+#             */
/*   Updated: 2025/05/11 03:08:29 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	size_t	len;

	len = 0;
	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		if (ft_putchar(*str) == -1)
			return (-1);
		len++;
		str++;
	}
	return (len);
}
