/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 03:34:19 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/16 04:38:12 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char string[] = "42sp";
	ft_putstr(string);
}
*/
/*
• Crie uma função que imprima uma string de caracteres na saída padrão.

• A função deve ser prototipada da seguinte forma:
	void ft_putstr(char *str);
*/
