/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masalaib <masalaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:21:03 by masalaib          #+#    #+#             */
/*   Updated: 2026/04/21 22:54:42 by masalaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./bsq.h"

int	ft_str_is_printable(char *str)
{
	int	len;

	if (!str || str[0] == 0)
		return (1);
	len = 0;
	while (str[len] != 0)
	{
		if (str[len] <= 31 || str[len] >= 127)
			return (0);
		len++;
	}
	return (1);
}

char	*append_buffer(char *result, char *buffer, int total, int bytes)
{
	char	*new;
	int		i;

	new = malloc(total + bytes + 1);
	i = 0;
	while (i < total)
	{
		new[i] = result[i];
		i++;
	}
	i = 0;
	while (i < bytes)
	{
		new[total + i] = buffer[i];
		i++;
	}
	new[total + bytes] = '\0';
	free(result);
	return (new);
}
