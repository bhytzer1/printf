/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 09:52:28 by dmandric          #+#    #+#             */
/*   Updated: 2026/01/16 21:18:54 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_print_hex(unsigned int n, const char format)
{
	int len;
	char *base;

	len = 0;
	if(format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789abcdef";
	if(n > 16)
		len += ft_printf_hex(n / 16, format);
	len += write(1, &base[n % 16], 1);
	return (len);
}

static int	ft_put_ptr_val(unsigned long)
{
	int	len;
	char	*base;
	
	base = "0123456789abcdef";
	if (n > 16)
		len += ft_put_ptr_val(n / 16);
	len += write(1, &base[n % 16], 1)
	return (len);
}

static int ft_print_ptr(unsigned long long ptr)
{
	int				len;
	unsigned long	addr;
	
	len = 0;
	if (ptr == 0)
	{
		len += write(1, "nil", 3);
		return(3);
	}
	addr = (unsigned long)ptr;
	len += ft_put_ptr_val(addr);
	return(len);
}
