/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masalaib <masalaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:47:28 by masalaib          #+#    #+#             */
/*   Updated: 2026/04/21 22:50:20 by masalaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./bsq.h"

void	print_matrix(t_bsq bsq, t_obs *obs, t_obs biggest)
{
	int	x;
	int	y;

	y = 0;
	is_minus_block(obs, biggest.x, biggest.y);
	while (y < bsq.counter_y)
	{
		x = 0;
		while (x < bsq.counter_x)
		{
			if (bsq.map[y][x] == bsq.obs)
				write(1, &(bsq.obs), 1);
			else if (bsq.map[y][x] == bsq.void_char &&
				x >= biggest.x && x < biggest.x + biggest.is_block &&
				y >= biggest.y && y < biggest.y + biggest.is_block
			)
				write(1, &(bsq.full), 1);
			else
				write(1, &(bsq.void_char), 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}
