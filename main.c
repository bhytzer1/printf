/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 20:18:39 by dmandric          #+#    #+#             */
/*   Updated: 2026/01/16 20:07:41 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int lenm, lenv;

    // Test 1: Percentuale
    printf("\n--- TEST 1 ---\n");
    lenm = ft_printf("mio: 100%%\n"); // Aggiunto \n per pulizia
    lenv = printf("vero: 100%%\n");
    printf("len: %d vs %d\n", lenm, lenv);
    
    // Test 2: Numero 42
    printf("\n--- TEST 2 ---\n");
    lenm = ft_printf("mio: %d\n", 42);
    lenv = printf("vero: %d\n", 42);
    printf("len: %d vs %d\n", lenm, lenv);

    // Test 3: Negativo
    printf("\n--- TEST 3 ---\n");
    lenm = ft_printf("mio: %i\n", -4245);
    lenv = printf("vero: %i\n", -4245);
    printf("len: %d vs %d\n", lenm, lenv);

    // Test 4: Zero (il caso critico)
    printf("\n--- TEST 4 ---\n");
    lenm = ft_printf("mio: %d\n", 0);
    lenv = printf("vero: %d\n", 0);
    printf("len: %d vs %d\n", lenm, lenv);

    // Test 5: INT MIN (il boss)
    printf("\n--- TEST 5 ---\n");
    lenm = ft_printf("mio: %d\n", -2147483648);
    // Nota: uso (long) cast per zittire il warning del printf vero se uso %ld
    lenv = printf("vero: %ld\n", (long)-2147483648); 
    printf("len: %d vs %d\n", lenm, lenv);

    return(0);
}