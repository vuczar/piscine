/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 09:11:04 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/11 10:26:57 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str >= ' ' && *str <= '~')
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
	// Teste 1: Apenas imprimíveis (Espaço, letras, números, símbolos)
	// Deve retornar 1
	printf("T1 'ABC 123 !@#': %d\n", ft_str_is_printable("ABC 123 !@#"));

	// Teste 2: Com caractere não-imprimível (Ex: \n - Newline)
	// Deve retornar 0
	printf("T2 com \\n (NL): %d\n", ft_str_is_printable("Linha1\nLinha2"));

	// Teste 3: Com caractere de controle (Ex: \t - Tabulação)
	// Deve retornar 0
	printf("T3 \\t (TAB):    %d\n", ft_str_is_printable("Texto\tcom tab"));

	// Teste 4: String vazia
	// Deve retornar 1 (padrão da 42)
	printf("T4 String Vazia:    %d\n", ft_str_is_printable(""));

	return (0);
}
*/
/*
• Crie uma função que retorne 1 se a string fornecida contiver apenas caracteres
imprimíveis e 0 se contiver qualquer outro caractere.

• O protótipo deve ser:
	int ft_str_is_printable(char *str);

• Deve retornar 1 se str estiver vazia.
*/
