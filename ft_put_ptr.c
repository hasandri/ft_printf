/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasandri <hasandri@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 14:41:02 by hasandri          #+#    #+#             */
/*   Updated: 2026/02/23 15:10:19 by hasandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex(unsigned long n)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (n >= 16)
		count = count + ft_puthex(n / 16);
	count = count + ft_putchar(base[n % 16]);
	return (count);
}

int	ft_put_ptr(void *ptr)
{
	int				len;
	unsigned long	p;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	p = (unsigned long) ptr;
	write(1, "0x", 2);
	len = ft_puthex(p) + 2;
	return (len);
}
