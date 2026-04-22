/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masalaib <masalaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:22:43 by masalaib          #+#    #+#             */
/*   Updated: 2026/04/21 16:13:53 by masalaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./bsq.h"

int	count_words(char *str, char c)
{
	int	is_string;
	int	controll;
	int	count;

	is_string = 0;
	controll = 0;
	count = 0;
	while (str[controll] != 0)
	{
		if (str[controll] == c)
			is_string = 0;
		else
		{
			if (is_string == 0)
				count++;
			is_string = 1;
		}
		controll++;
	}
	return (count);
}

char	*copy_word(char *str, char c, int *controll)
{
	char	*word;
	int		len;

	len = 0;
	while (str[len + (*controll)] != c && str[len + (*controll)] != 0)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	word[len] = 0;
	len = 0;
	while (str[len + (*controll)] != c && str[len + (*controll)] != 0)
	{
		word[len] = str[*controll + len];
		len++;
	}
	*controll = (*controll) + len;
	return (word);
}

char	**split(char *str, char c)
{
	int		counted_words;
	int		number_word;
	char	**splited;
	int		controll;

	counted_words = count_words(str, c);
	splited = (char **)malloc((counted_words + 1) * sizeof(char *));
	splited[counted_words] = NULL;
	controll = 0;
	number_word = 0;
	while (str[controll] != 0)
	{
		while (str[controll] == c)
			controll++;
		if (str[controll] != c && str[controll] != 0)
		{
			splited[number_word] = copy_word(str, c, &controll);
			number_word++;
		}
	}
	return (splited);
}
