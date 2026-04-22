/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 06:52:42 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/13 16:46:55 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || !ft_is_alphanumeric(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int     main(void)
{
        char    frase[] = "hi, how are you? 42words foRty-tWo; fifty+and+one";

        printf("%s\n", frase);
        ft_strcapitalize(frase);
        printf("%s\n", frase);
}
*/
/*
• Crie uma função que capitalize a primeira letra de cada palavra e converta 
todas as outras letras para minúsculas.

• Uma palavra é uma sequência de caracteres alfanuméricos.

• O protótipo deve ser:
	char *ft_strcapitalize(char *str);

• Deve retornar str.

• Por exemplo:
	hi, how are you? 42words forty-two; fifty+and+one

• Torna-se:
	Hi, How Are You? 42words Forty-Two; Fifty+And+One
*/
