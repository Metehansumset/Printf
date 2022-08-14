/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumset <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:31:13 by msumset           #+#    #+#             */
/*   Updated: 2022/08/13 13:31:15 by msumset          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while (s[c])
		c++;
	return (c);
}

void	ft_put_base(unsigned int n, const char *base, int *count)
{
	size_t	format;

	format = ft_strlen(base);
	if (n < format)
	{
		*count += ft_putchar_fd(base[n % format], 1);
		return ;
	}
	else
		ft_put_base(n / format, base, count);
	*count += ft_putchar_fd(base[n % format], 1);
}
