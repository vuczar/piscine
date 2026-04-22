/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 06:34:12 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/16 11:56:40 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	s;
	int	nbr;

	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	s = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			s *= -1;
		str++;
	}
	nbr = 0;
	while (*str >= '0' && *str <= '9' && *str)
	{
		nbr = (nbr * 10) + (*str - '0');
		str++;
	}
	return(nbr * s);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_atoi(argv[1]));
	}
	return (0);
}
*/
/*
• Escreva uma função que converta a porção inicial da string apontada por str 
para sua representação inteira.

• A string pode começar com uma quantidade arbitrária de espaços em branco 
(conforme determinado por isspace(3)).

• A string pode ser precedida por um número arbitrário de sinais ‘+’ e ‘-’. 
Um sinal ‘-’ inverterá o resultado dependendo se o número de sinais ‘-’ 
é ímpar ou par.

• A função deve então processar quaisquer dígitos consecutivos na base 10.

• A função lê a string até que um caractere não-conforme seja encontrado e 
retorna o número obtido até então.

• Overflow e underflow não precisam ser tratados; o valor de retorno da função 
é indefinido em tais casos.

• Exemplo de Saída do Programa:

	$>./a.out " ---+--+1234ab567"
	-1234

• A função deve ser prototipada da seguinte forma:
	int ft_atoi(char *str);
*/
