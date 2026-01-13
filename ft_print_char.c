/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davide <davide@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 04:50:58 by davide            #+#    #+#             */
/*   Updated: 2026/01/13 05:16:25 by davide           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <unistd.h>

int ft_print_char(char c)
{
    write(1, &c, 1);
}

int main()
{
    char n;

    n = "b";
    printf(ft_print_char(n));
}