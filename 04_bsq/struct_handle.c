/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_handle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <vimauric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:13:41 by masalaib          #+#    #+#             */
/*   Updated: 2026/04/22 00:27:38 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./bsq.h"

int	ft_atoi(char *line)
{
	int	len;
	int	count;

	len = 0;
	count = 0;
	while (line[len] != '\0')
	{
		if (line[len] < '0' && line[len] < '9')
			break ;
		count = (count * 10) + (line[len] - '0');
		len++;
	}
	return (count);
}

int	c_l(char **splited)
{
	int	len;

	len = 0;
	while (splited[len] != NULL)
		len++;
	return (len);
}

//count_lines_lenght
int	c_l_l(char **splited, int max, t_bsq bsq)
{
	int	now_line;
	int	length_line;

	now_line = 0;
	length_line = 0;
	while (splited[now_line] != NULL)
	{
		length_line = 0;
		while (splited[now_line][length_line] != '\0')
		{
			if (splited[now_line][length_line] != bsq.full &&
				splited[now_line][length_line] != bsq.obs &&
				splited[now_line][length_line] != bsq.void_char)
				return (1);
			length_line++;
		}
		if (max != length_line)
			return (1);
		now_line++;
	}
	return (0);
}

int	count_numbers(char **splited, t_bsq *b)
{
	int	n;

	n = 0;
	while (splited[0][n] != 0 && splited[0][n] >= '0' && splited[0][n] <= '9')
		n++;
	if (splited[0][n] == '\0' || splited[0][n + 1] == '\0' ||
		splited[0][n + 2] == '\0' || splited[0][n + 3] != '\0')
	{
		error_split(splited, b);
		return (-1);
	}
	return (n);
}

t_bsq	complete_bsq(char *file_text)
{
	char	**splited;
	t_bsq	b;
	int		n;

	splited = split(file_text, '\n');
	if (!ft_str_is_printable(splited[0])
		|| splited[1] == NULL || splited[1][0] == '\0')
		return (error_split(splited, &b), b);
	b.map = &(splited[1]);
	b.full_map = splited;
	b.counter_y = ft_atoi(splited[0]);
	n = count_numbers(splited, &b);
	if (n == -1)
		return (b);
	b.void_char = splited[0][n];
	b.obs = splited[0][n + 1];
	b.full = splited[0][n + 2];
	b.counter_x = 0;
	while (splited[1][b.counter_x] != '\0')
		b.counter_x++;
	if ((c_l(b.map) != b.counter_y || c_l_l(b.map, b.counter_x, b))
		|| b.void_char == b.obs || b.obs == b.full || b.void_char == b.full)
		error_split(splited, &b);
	return (b);
}
