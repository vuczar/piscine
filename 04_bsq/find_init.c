/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <vimauric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:47:43 by masalaib          #+#    #+#             */
/*   Updated: 2026/04/22 01:00:29 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./bsq.h"

void	restart_obs(t_obs *obs)
{
	while (obs != NULL)
	{
		obs->is_block = 0;
		obs = obs->next;
	}
}

void	is_minus_block(t_obs *obs, int x, int y)
{
	while (obs != NULL)
	{
		if (obs->x >= x && obs->y >= y)
			obs->is_block = 1;
		obs = obs->next;
	}
}

int	is_big_block(t_obs *obs, int x, int y)
{
	while (obs != NULL)
	{
		if (obs->x <= x && obs->y <= y && obs->is_block == 1)
			return (1);
		obs = obs->next;
	}
	return (0);
}

int	find_length(int x, int y, t_bsq bsq, t_obs *s_obs)
{
	int	length;

	length = 0;
	is_minus_block(s_obs, x, y);
	while (bsq.counter_y > y && bsq.counter_x > x)
	{
		if (is_big_block(s_obs, x, y))
			break ;
		x++;
		y++;
		length++;
	}
	restart_obs(s_obs);
	return (length);
}

t_obs	find_init_value(t_bsq bsq, t_obs *s_obs)
{
	t_obs	here_bsq;
	int		x;
	int		y;
	int		lenght;

	y = -1;
	here_bsq.is_block = 0;
	here_bsq.x = 0;
	here_bsq.y = 0;
	here_bsq.next = NULL;
	while (bsq.counter_y > ++y)
	{
		x = -1;
		while (bsq.counter_x > ++x)
		{
			lenght = find_length(x, y, bsq, s_obs);
			if (lenght > here_bsq.is_block)
			{
				here_bsq.x = x;
				here_bsq.y = y;
				here_bsq.is_block = lenght;
			}
		}
	}
	return (here_bsq);
}
