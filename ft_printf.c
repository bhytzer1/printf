/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 23:18:32 by davide            #+#    #+#             */
/*   Updated: 2026/01/13 04:32:39 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h";

int ft_printf(const char *str, ...)
{
	va_list args;
	int		i;
	int		lenght;

	i = 0;
	lenght = 0;
	va_start(args, str);
	while(str[i])
	{
		if(str[i] == '%')
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
