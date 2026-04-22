/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 08:36:24 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/11 08:51:23 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
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
	// Teste 1: Apenas minúsculas (Retorno 1)
	printf("Teste 'tudoabaixo': %d\n", ft_str_is_lowercase("tudoabaixo"));

	// Teste 2: Com maiúsculas (Retorno 0)
	printf("Teste 'ComMaiuscula': %d\n", ft_str_is_lowercase("ComMaiuscula"));

	// Teste 3: String vazia (Retorno 1)
	printf("Teste Vazia: %d\n", ft_str_is_lowercase(""));

	// Teste 4: Com números ou espaços (Retorno 0)
	printf("Teste 'minusc 123': %d\n", ft_str_is_lowercase("minusc 123"));

	return (0);
}
*/
/*
• Crie uma função que retorne 1 se a string fornecida contiver apenas caracteres
alfabéticos minúsculos e 0 se contiver qualquer outro caractere.

• O protótipo deve ser:
	int ft_str_is_lowercase(char *str);

• Deve retornar 1 se str estiver vazia. 
 */
