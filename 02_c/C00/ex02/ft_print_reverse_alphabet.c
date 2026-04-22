/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 19:01:29 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/06 19:09:57 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
/*
• Crie uma função que exiba o alfabeto em minúsculas, em uma única linha, em
ordem descendente, começando pela letra ’z’.
• A função deve ser prototipada da seguinte forma:
void ft_print_reverse_alphabet(void);
Envie seu código para o Git regularmente!
*/
