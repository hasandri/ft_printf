/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasandri <hasandri@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 14:23:12 by hasandri          #+#    #+#             */
/*   Updated: 2026/02/23 14:26:54 by hasandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_uns(unsigned long n)
{
	int	count;

	count = 0;
	if (n > 9)
		count = count + ft_putnbr_uns(n / 10);
	count = count + ft_putchar((n % 10) + '0');
	return (count);
}
