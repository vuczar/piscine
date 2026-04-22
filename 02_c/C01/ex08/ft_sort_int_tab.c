/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 07:57:32 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/09 08:33:07 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			t = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = t;
			i = 0;
		}
		else
			i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	nbr[] = {0, 1, 2, 3, 4, 5, 6};
	int	size = 7;
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", nbr[i]);
		i++;
	}

	ft_sort_int_tab(nbr, size);
	printf("\n");

	i = 0;
	while (i < size)
	{
		printf("%d ", nbr[i]);
		i++;
	}
}
*/
/*
• Crie uma função que ordene um array de inteiros em ordem crescente.

• A função recebe dois argumentos: um ponteiro para um int e o número 
de elementos no array.

• A função deve ser prototipada da seguinte forma:
	void ft_sort_int_tab(int *tab, int size);
*/
