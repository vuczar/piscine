/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 16:17:27 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/08 17:05:21 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h>

int 	main(void)
{
	int	x;
	int	y;

	x = 5;
	y = 10;

	printf("\nAntes: x = %d, y = %d\n", x, y); // Antes da função
	ft_swap(&x, &y);
    	printf("\nDepois: x = %d, y = %d\n", x, y); // Depois da função
}
*/
/*
• Crie uma função que troque os valores de dois inteiros usando seus endereços 
recebidos como parâmetros.

• A função deve ser prototipada da seguinte forma:
	void ft_swap(int *a, int *b);
*/
