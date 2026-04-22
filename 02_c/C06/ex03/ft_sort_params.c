/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:45:19 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/20 19:13:43 by vimauric         ###   ########.fr       */
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
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int c, char *v[])
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < c)
	{
		j = i + 1;
		while (j < c)
		{
			if (ft_strcmp(v[i], v[j]) > 0)
			{
				tmp = v[i];
				v[i] = v[j];
				v[j] = tmp;
			}
			j++;
		}
		ft_putstr(v[i++]);
		ft_putchar('\n');
	}
	return (0);
}
/*
• Como este é um programa, seu arquivo .c deve conter uma função main.

• Escreva um programa que exiba seus argumentos fornecidos, ordenados 
em ordem ASCII.

• O programa deve exibir todos os argumentos, exceto argv[0].

• Cada argumento deve ser impresso em uma nova linha.
*/
