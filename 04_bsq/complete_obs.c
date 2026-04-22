/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complete_obs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masalaib <masalaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:16:25 by masalaib          #+#    #+#             */
/*   Updated: 2026/04/21 22:50:03 by masalaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./bsq.h"

void	free_linked_list(t_obs *s_obs)
{
	t_obs	*temp;

	while (s_obs != NULL)
	{
		temp = s_obs->next;
		free(s_obs);
		s_obs = temp;
	}
}

t_obs	*create_obs(int x, int y)
{
	t_obs	*obs;

	obs = malloc(sizeof(t_obs));
	obs->x = x;
	obs->y = y;
	obs->is_block = 0;
	obs->next = NULL;
	return (obs);
}

static void	append_obs(t_obs **c_obs, int x, int y)
{
	(*c_obs)->next = create_obs(x, y);
	*c_obs = (*c_obs)->next;
}

t_obs	*complete_obs(t_bsq s_bsq)
{
	t_obs	*obs;
	t_obs	*c_obs;
	int		x;
	int		y;

	y = -1;
	obs = NULL;
	while (s_bsq.counter_y > ++y)
	{
		x = 0;
		while (s_bsq.counter_x > x)
		{
			if (s_bsq.map[y][x] == s_bsq.obs && obs == NULL)
			{
				obs = create_obs(x, y);
				c_obs = obs;
			}
			else if (s_bsq.map[y][x] == s_bsq.obs && obs != NULL)
				append_obs(&c_obs, x, y);
			x++;
		}
	}
	return (obs);
}
