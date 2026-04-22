/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 19:01:40 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/11 08:46:04 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z')
			|| (*str >= 'A' && *str <= 'Z'))
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
	// Teste 1: Apenas letras (Deve retornar 1)
	printf("Teste 'TudoAlpha': %d\n", ft_str_is_alpha("TudoAlpha"));

	// Teste 2: Com números (Deve retornar 0)
	printf("Teste 'Alpha123': %d\n", ft_str_is_alpha("Alpha123"));

	// Teste 3: String vazia (Deve retornar 1 conforme o padrão da 42)
	printf("Teste 'Vazia':    %d\n", ft_str_is_alpha(""));

	// Teste 4: Com caracteres especiais/espaço (Deve retornar 0)
	printf("Teste 'Com Espaco': %d\n", ft_str_is_alpha("Hello World"));

	return (0);
}
*/
/*
• Crie uma função que retorne 1 se a string fornecida contiver apenas 
caracteres alfabéticos e 0 se contiver qualquer outro caractere.

• O protótipo deve ser:
	int ft_str_is_alpha(char *str);

• Deve retornar 1 se str estiver vazia.
*/
