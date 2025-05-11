/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_un.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 13:41:22 by kenakamu          #+#    #+#             */
/*   Updated: 2025/05/11 13:41:23 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_un(unsigned int n)
{
	int	len;

	len = 0;
	if (n / 10)
	{
		len = ft_put_un(n / 10);
		if (len == -1)
			return (-1);
	}
	if (ft_putchar((n % 10) + '0') == -1)
		return (-1);
	len++;
	return (len);
}
