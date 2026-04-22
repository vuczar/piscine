/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 17:06:52 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/08 17:34:41 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a = 42;
	int	b = 10;
	int	*div = &a;
	int	*mod = &b;

	printf("Valores anterior de a: %d \n", a);
	printf("Valores anterior de b: %d \n", b);
	ft_ultimate_div_mod(div,mod);
	printf("Valores depois de a: %d \n", a);
	printf("Valores depois de a: %d \n", b);
}
*/
/*
• Crie uma função ft_ultimate_div_mod com o seguinte protótipo:
	void ft_ultimate_div_mod(int *a, int *b);

• Esta função divide o valor apontado por ‘a’ pelo valor apontado por ‘b’. 
O resultado da divisão é armazenado no inteiro apontado por ‘a’, enquanto 
o resto é armazenado no inteiro apontado por ‘b’.
*/
