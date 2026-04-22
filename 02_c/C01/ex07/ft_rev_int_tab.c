/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 06:59:51 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/09 07:54:47 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	i = 0;
	while (i < --size)
	{
		t = tab[i];
		tab[i] = tab[size];
		tab[size] = t;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	nbr[] = {32, 1, 14, 8, 3, -8, 0};
	int	size = 7;
	int	i = 0;
	
	while (i <= (size - 1))
	{
		printf("%d ", nbr[i]);
		i++;
	}
	
	printf("\n");
	
	ft_rev_int_tab(nbr, size);
	
	i = 0;
	
	while (i <= (size - 1))
	{
		printf("%d ", nbr[i]);
		i++;
	}
}
*/
/*
• Crie uma função que inverta um array de inteiros dado (o primeiro 
elemento se torna o último, e assim por diante).

• A função recebe dois argumentos: um ponteiro para 
um int e o número de elementos no array.

• A função deve ser prototipada da seguinte forma:
	void ft_rev_int_tab(int *tab, int size);
*/
