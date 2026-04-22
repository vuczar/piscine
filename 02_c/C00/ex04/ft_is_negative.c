/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:50:55 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/07 15:45:14 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}
/*
int	main(void)
{
	ft_is_negative(5);
	ft_is_negative(0);
	ft_is_negative(-2);
}
*/
/*
• Crie uma função que exiba ’N’ ou ’P’ dependendo do sinal do 
inteiro passado como parâmetro.
	◦ Se n for negativo, exiba ’N’.
	◦ Se n for positivo ou zero, exiba ’P’.
• A função deve ser prototipada da seguinte forma:
	
	void ft_is_negative(int n);

O fracasso faz parte da sua jornada de aprendizado.
*/
