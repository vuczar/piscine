/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <vimauric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:01:06 by masalaib          #+#    #+#             */
/*   Updated: 2026/04/22 00:14:23 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./bsq.h"

void	complete_read_file(char *word, char *argv, int max)
{
	char	buffer[1024];
	t_obs	bytes;
	int		fd;

	fd = open(argv, O_RDONLY);
	bytes.y = 0;
	bytes.x = 1;
	bytes.is_block = 0;
	while (bytes.x > 0)
	{
		bytes.x = read(fd, buffer, 1024);
		bytes.is_block = 0;
		while (bytes.y < max && bytes.is_block < 1024)
		{
			word[bytes.y] = buffer[bytes.is_block];
			bytes.y++;
			bytes.is_block++;
		}
	}
	close(fd);
}

char	*read_file(char *argv)
{
	char	*word;
	char	buffer[1024];
	t_obs	bytes;
	int		fd;

	bytes.x = 1;
	bytes.y = 0;
	bytes.is_block = 0;
	fd = open(argv, O_RDONLY);
	while (bytes.x > 0)
	{
		bytes.x = read(fd, buffer, 1024);
		bytes.y += bytes.x;
	}
	close(fd);
	word = (char *)malloc(sizeof(char) * (bytes.y + 1));
	word[bytes.y] = '\0';
	complete_read_file(word, argv, bytes.y);
	return (word);
}

char	*read_stdin(void)
{
	char	buffer[1024];
	char	*result;
	int		bytes;
	int		total;

	result = malloc(1);
	total = 0;
	bytes = 1;
	while (bytes > 0)
	{
		bytes = read(0, buffer, 1024);
		result = append_buffer(result, buffer, total, bytes);
		total += bytes;
	}
	return (result);
}

void	bsq(char *file)
{
	t_bsq	s_bsq;
	t_obs	*s_obs;
	t_obs	init_value;

	s_bsq = complete_bsq(file);
	if (s_bsq.map == NULL || s_bsq.full_map == NULL)
		return ;
	s_obs = complete_obs(s_bsq);
	init_value = find_init_value(s_bsq, s_obs);
	print_matrix(s_bsq, s_obs, init_value);
	free_split(s_bsq.full_map);
	free_linked_list(s_obs);
}

int	main(int argc, char *argv[])
{
	int		len;
	char	*word;

	len = 1;
	if (argc == 1)
	{
		word = read_stdin();
		write(1, "\n", 1);
		bsq(word);
		free(word);
		return (0);
	}
	while (len < argc)
	{
		word = read_file(argv[len]);
		bsq(word);
		len++;
		free(word);
		if (len < argc)
			write(1, "\n", 1);
	}
	return (0);
}
