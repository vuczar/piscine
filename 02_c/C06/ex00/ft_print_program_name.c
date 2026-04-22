/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:29:35 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/20 14:18:08 by vimauric         ###   ########.fr       */
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
		ft_putstr(v[0]);
	ft_putchar('\n');
	return (0);
}

/*
• Como este é um programa, seu arquivo .c deve conter uma função main.

• Escreva um programa que exiba seu próprio nome, seguido por uma nova linha.

• Exemplo:

$>./a.out | cat -e
./a.out$
$>

*/
