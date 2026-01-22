/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 23:18:32 by davide            #+#    #+#             */
/*   Updated: 2026/01/22 19:26:17 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		lenght;

	if (!str)
		return (-1);
	i = 0;
	lenght = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			lenght += ft_formats(args, str[i + 1]);
			i++;
		}
		else
		{
			lenght += write(1, &str[i], 1);
		}
		i++;
	}
	va_end(args);
	return (lenght);
}

int	ft_formats(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_print_char(va_arg(args, int));
	else if (format == 's')
		len += ft_print_str(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		len += ft_print_nbr(va_arg(args, int));
	else if (format == 'u')
		len += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == '%')
		len += ft_print_percent();
	else if (format == 'x' || format == 'X')
		len += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == 'p')
		len += ft_print_ptr(va_arg(args, unsigned long long));
	else
{
	len += write(1, "%", 1);
	len += write(1, &format, 1);
}
return (len);
	return (len);
}
