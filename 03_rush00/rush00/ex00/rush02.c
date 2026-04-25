/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 11:51:24 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/05 20:32:00 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

int	ft_check(int x, int y)
{
	if (x <= 0 || y <= 0)
		return (1);
	else if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
		return (1);
	else if ((y >= 'A' && y <= 'Z') || (y >= 'a' && y <= 'z'))
		return (1);
	else
		return (0);
}

void	ft_first(int column, int x)
{
	if (column == 1 || column == x)
		ft_putchar('A');
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
	if (column == 1 || column == x)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	line;
	int	column;

	if (ft_check(x, y) == 1)
		write(1, "try with positive numbers\n", 26);
	else
	{
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
}
