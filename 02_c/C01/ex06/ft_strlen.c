/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 19:32:26 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/08 19:59:33 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char	nome[] = "Vinicius";
	int	len;

	len = ft_strlen(nome);
	printf("O total de é de: %d \n", len);
}
*/
/*
• Crie uma função que conte e retorne o número de caracteres em uma string.

• A função deve ser prototipada da seguinte forma:
	int ft_strlen(char *str);
*/
