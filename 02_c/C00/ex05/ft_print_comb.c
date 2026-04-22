/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:03:22 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/07 18:45:17 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!((a == '7') && (b == '8') && (c == '9')))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putstr(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}
*/
/*
• Crie uma função que exiba todas as combinações únicas de três
dígitos distintos, com os dígitos dentro de cada combinação e as próprias
combinações em ordem crescente.

• Saída esperada:

$>./a.out | cat -e
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>

• 987 não é incluído porque 789 já cobre essa combinação.

• 999 não é incluído porque o dígito 9 aparece mais de uma vez.

• A função deve ser prototipada da seguinte forma:
void ft_print_comb(void);

! Você verificou com seu vizinho da direita?
*/
