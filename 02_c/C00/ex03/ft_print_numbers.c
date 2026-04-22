/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 19:12:55 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/07 12:02:19 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}
/*
int	main(void)
{
	ft_print_numbers();
}
*/
/*
• Crie uma função que exiba todos os dígitos em uma única linha, 
em ordem ascendente.
• A função deve ser prototipada da seguinte forma:
void ft_print_numbers(void);

Colaboração é a chave para o sucesso.
*/
