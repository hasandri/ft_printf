/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasandri <hasandri@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 11:56:29 by hasandri          #+#    #+#             */
/*   Updated: 2026/02/18 01:22:25 by hasandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int			ft_printf(const char *format, ...);
int			ft_putnbr(int n);
int			ft_putstr(char *s);
int			ft_putchar(char c);
int			ft_putnbr_uns(unsigned long n);
int			ft_puthex_x(unsigned int n);
int			ft_puthexx(unsigned int n);
int			ft_put_ptr(void *ptr);

#endif
