/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 17:39:08 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/08 19:29:09 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
/*
int	main(void)
{
	char nome[] = "Vinicius\n";
	ft_putstr(nome);
}
*/
/*
• Crie uma função que exiba uma string de caracteres na saída padrão.

• A função deve ser prototipada da seguinte forma:
	void ft_putstr(char *str);
*/
