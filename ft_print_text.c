/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_text.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 04:50:58 by davide            #+#    #+#             */
/*   Updated: 2026/01/16 17:41:16 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <unistd.h>

int	ft_print_char(char c)
{
	write(1, &c, 1);
	return(1);
}

int	ft_print_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
    {
		write(1, "null", 4);
		return (4);
    }
	while(str[i])
    {
		write(1, &str[i], 1);
		i++;
    }
	return(i);
}

int ft_print_percent(void)
{
	write(1, "%", 1);
	return(1);
}