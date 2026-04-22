/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 08:52:50 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/11 09:09:38 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			str++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	// Teste 1: Apenas maiúsculas (Retorno 1)
	printf("T1 'TUDOACIMA': %d\n", ft_str_is_uppercase("TUDOACIMA"));

	// Teste 2: Com minúsculas (Retorno 0)
	printf("T2 'ComMinuscula': %d\n", ft_str_is_uppercase("ComMinuscula"));

	// Teste 3: String vazia (Retorno 1)
	printf("T3 Vazia: %d\n", ft_str_is_uppercase(""));

	// Teste 4: Com números ou espaços (Retorno 0)
	printf("T4 'MAIUSC 123': %d\n", ft_str_is_uppercase("MAIUSC 123"));

	return (0);
}
*/
/*
• Crie uma função que retorne 1 se a string fornecida contiver apenas caracteres
alfabéticos maiúsculos e 0 se contiver qualquer outro caractere.

• O protótipo deve ser:
	int ft_str_is_uppercase(char *str);

• Deve retornar 1 se str estiver vazia.
*/
