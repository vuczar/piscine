/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 13:17:51 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/07 18:28:06 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(int a, int b)
{
	char	c[5];

	c[0] = (a / 10) + '0';
	c[1] = (a % 10) + '0';
	c[2] = ' ';
	c[3] = (b / 10) + '0';
	c[4] = (b % 10) + '0';
	write (1, c, 5);
	if (!(a == 98 && b == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putstr(a, b);
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
/*
• Crie uma função que exiba todas as diferentes combinações de dois
números de dois dígitos distintos (XX XX) entre 00 e 99, listadas em ordem
crescente.

• Saída esperada:

$>./a.out | cat -e
00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>

• A função deve ser prototipada da seguinte forma:
	void ft_print_comb2(void);

! Inspire-se nos outros, mas não deixe que eles façam o trabalho por você!
*/
