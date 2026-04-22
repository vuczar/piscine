/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 15:33:09 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/11 08:47:28 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
    // Casos de teste
    char *teste1 = "1234567890";
    char *teste2 = "123a45";
    char *teste3 = "";
    char *teste4 = " ";
    char *teste5 = "!@#";

    printf("--- Testando ft_str_is_numeric ---\n");

    printf("T1 (\"%s\"): %d (Esperado: 1)\n", teste1, ft_str_is_numeric(teste1));
    printf("T2 (\"%s\"): %d (Esperado: 0)\n", teste2, ft_str_is_numeric(teste2));
    printf("T3 (vazia): %d (Esperado: 1)\n", ft_str_is_numeric(teste3));
    printf("T4 (espaço): %d (Esperado: 0)\n", ft_str_is_numeric(teste4));
    printf("T5 (\"%s\"): %d (Esperado: 0)\n", teste5, ft_str_is_numeric(teste5));

    return (0);
}
*/
/*
• Crie uma função que retorne 1 se a string fornecida contiver apenas 
dígitos e 0 se contiver qualquer outro caractere.

• O protótipo deve ser:
	int ft_str_is_numeric(char *str);

• Deve retornar 1 se str estiver vazia.
*/
