/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:12:42 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/20 14:33:57 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int c, char *v[])
{
	int	i;

	if (c > 1)
	{
		i = 1;
		while (i < c)
		{
			ft_putstr(v[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
/*
• Como este é um programa, seu arquivo .c deve conter uma função main.

• Escreva um programa que exiba seus argumentos fornecidos.

• Cada argumento deve ser impresso em uma nova linha, na mesma ordem que na
linha de comando.

• O programa deve exibir todos os argumentos, exceto argv[0].

• Exemplo:

$>./a.out test1 test2 test3 | cat -e
test1$
test2$
test3$
$>

*/
