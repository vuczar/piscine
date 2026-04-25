/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 16:23:49 by dilferre          #+#    #+#             */
/*   Updated: 2026/04/04 16:23:53 by dilferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_first(int column, int x)
{
	if (column == 1)
		ft_putchar('A');
	else if (column == x)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	ft_middle(int column, int x)
{
	if (column == 1 || column == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	ft_last(int column, int x)
{
	if (column == 1)
		ft_putchar('C');
	else if (column == x)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{		
	int	line;
	int	column;

	line = 1;
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			if (line == 1)
				ft_first(column, x);
			else if (line == y)
				ft_last(column, x);
			else
				ft_middle(column, x);
			column = column + 1;
		}
		ft_putchar('\n');
		line = line + 1;
	}
}
