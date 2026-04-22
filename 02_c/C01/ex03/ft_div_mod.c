/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 16:38:02 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/08 17:03:26 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
 	int 	a;
 	int 	b;
 	int 	*divisao = &a;
 	int 	*modulo = &b;
 	a = 39;
 	b = 10;
 	ft_div_mod(a, b, divisao, modulo);
 	printf("Resultado divisao a / b: %d\n", *divisao);
 	printf("Resto divisao a / b: %d\n", *modulo);	
}
*/
/*
• Crie uma função ft_div_mod com o seguinte protótipo:
	void ft_div_mod(int a, int b, int *div, int *mod);

• Esta função divide ‘a’ por ‘b’ e armazena o resultado no 
inteiro apontado por ‘div’. Ela também armazena o resto da 
divisão de ‘a’ por ‘b’ no inteiro apontado por ‘mod’
*/
