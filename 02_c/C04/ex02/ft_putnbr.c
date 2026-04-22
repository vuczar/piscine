/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 04:39:40 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/16 11:57:23 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{	
	long	nbr;
	char	c;

	nbr = nb;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}
/*
#include <limits.h>

int     main(void)
{
        ft_putnbr(0);
        ft_putchar('\n');
        ft_putnbr(42);
        ft_putchar('\n');
        ft_putnbr(-42);
        ft_putchar('\n');
        ft_putnbr(INT_MAX);
        ft_putchar('\n');
        ft_putnbr(INT_MIN);
        ft_putnbr('\n');
}
*/
/*
int	main(void)
{
	ft_putnbr(548742);
	ft_putnbr(-2);
	ft_putnbr(0);
}
*/
/*
• Crie uma função que exiba o número passado como parâmetro. A função deve ser
capaz de lidar com todos os valores possíveis do tipo int.

• A função deve ser prototipada da seguinte forma:
	void ft_putnbr(int nb);

• Exemplo de uso:
	◦ ft_putnbr(42) exibe "42".
*/
