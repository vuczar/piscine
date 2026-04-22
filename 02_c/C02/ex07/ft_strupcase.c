/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 10:28:29 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/13 14:28:41 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "hello world";
	char str2[] = "42 Porto! abc123";
	char str3[] = "";

	printf("Antes:  hello world\n");
	ft_strupcase(str1);
	printf("Depois: %s\n\n", str1);

	printf("Antes:  42 Porto! abc123\n");
	printf("Depois: %s\n\n", ft_strupcase(str2));

	printf("Teste Vazio: [%s]\n", ft_strupcase(str3));

	return (0);
}
*/
/*
• Crie uma função que converta cada letra para maiúscula.

• O protótipo deve ser:
	char *ft_strupcase(char *str);

• Deve retornar str.
*/
