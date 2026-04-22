/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:31:44 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/20 14:43:00 by vimauric         ###   ########.fr       */
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
	if (c != 0)
	{
		while (--c)
		{
			ft_putstr(v[c]);
			ft_putchar('\n');
		}
	}
	return (0);
}
/*
• Como este é um programa, seu arquivo .c deve conter uma função main.

• Escreva um programa que exiba seus argumentos fornecidos.

• Cada argumento deve ser impresso em uma nova linha, na ordem inversa da 
linha de comando.

• O programa deve exibir todos os argumentos, exceto argv[0].
*/
