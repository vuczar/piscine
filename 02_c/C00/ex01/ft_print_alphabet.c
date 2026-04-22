/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 18:54:18 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/06 19:02:34 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}
/*
int	main(void)
{
	ft_print_alphabet();
}
*/
/* 
• Crie uma função que exiba o alfabeto em minúsculas, em uma única linha, em
ordem ascendente, começando pela letra ’a’.
• A função deve ser prototipada da seguinte forma:
void ft_print_alphabet(void);

Não hesite em perguntar aleatoriamente a alguém em seu cluster se
tiver alguma dúvida.
*/
