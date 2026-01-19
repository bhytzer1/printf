/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 06:01:05 by davide            #+#    #+#             */
/*   Updated: 2026/01/19 15:28:19 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int				ft_printf(const char *format, ...);
int				ft_formats(va_list args, const char format);
int				ft_print_nbr(int n);
unsigned int	ft_print_unsigned(unsigned int n);
int				ft_print_char(char c);
int				ft_print_str(char *s);
int				ft_print_percent(void);
int				ft_print_hex(unsigned int n, const char format);
int				ft_print_ptr(unsigned long long ptr);

#endif
