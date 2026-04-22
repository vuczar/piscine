/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 03:24:32 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/16 03:32:31 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char string[] = "Maycon Douglas, nunca mais eu vou dormir";

	printf("O tamanho da frase [%s]\né : %d\n", string, ft_strlen(string));
}
*/
/*
• Crie uma função que conte e retorne o número de caracteres em uma string.

• A função deve ser prototipada da seguinte forma:
	int ft_strlen(char *str);
*/
