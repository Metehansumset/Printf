/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumset <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:31:37 by msumset           #+#    #+#             */
/*   Updated: 2022/08/13 13:31:38 by msumset          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_pointer(unsigned long long n, int *count)
{
	const char	*base;

	base = "0123456789abcdef";
	if (n < 16)
	{
		*count += ft_putchar_fd(base[n], 1);
		return ;
	}
	else
		ft_put_pointer(n / 16, count);
	*count += ft_putchar_fd(base[n % 16], 1);
}
