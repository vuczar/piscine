/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masalaib <masalaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 20:36:14 by masalaib          #+#    #+#             */
/*   Updated: 2026/04/21 22:41:28 by masalaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./bsq.h"

void	free_split(char **splited)
{
	int	len;

	len = 0;
	while (splited[len] != NULL)
	{
		free(splited[len]);
		len++;
	}
	free(splited);
}

void	error_split(char **splited, t_bsq *b)
{
	free_split(splited);
	write(1, "map error", 9);
	b->map = NULL;
	b->full_map = NULL;
}
