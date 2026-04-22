/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masalaib <masalaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:04:59 by masalaib          #+#    #+#             */
/*   Updated: 2026/04/21 22:54:22 by masalaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_bsq
{
	char	**map;
	char	**full_map;
	char	void_char;
	char	obs;
	char	full;
	int		counter_x;
	int		counter_y;
}	t_bsq;

typedef struct s_obs
{
	int				x;
	int				y;
	int				is_block;
	struct s_obs	*next;
}	t_obs;

/* struct_handle */
int		get_line_size(char *line);
t_bsq	complete_bsq(char *file);
int		ft_strlen(char *line);

/* split */
char	**split(char *str, char c);

/* complete_obs */
t_obs	*complete_obs(t_bsq s_bsq);
void	free_linked_list(t_obs	*s_obs);

/* find_init */
t_obs	find_init_value(t_bsq bsq, t_obs *s_obs);
void	is_minus_block(t_obs *obs, int x, int y);
int		is_big_block(t_obs *obs, int x, int y);

/* printer */
void	print_matrix(t_bsq bsq, t_obs *obs, t_obs biggest);

/* error_handle */
void	error_split(char **splited, t_bsq *b);
void	free_split(char **splited);

/* utils */
int		ft_str_is_printable(char *str);
char	*append_buffer(char *result, char *buffer, int total, int bytes);

#endif