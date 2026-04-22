/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 19:52:10 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/15 18:33:13 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char frase[] = "oi";
	char palavra[] = "oito";
	
	printf("%s\n", ft_strstr(frase, palavra));
}
*/
/*
• Reproduzir de forma idêntica o funcionamento da função strstr (man strstr).

• A função deve ser prototipada da seguinte forma:
	char *ft_strstr(char *str, char *to_find);
*/
