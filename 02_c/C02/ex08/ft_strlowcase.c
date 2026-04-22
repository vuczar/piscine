/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 06:20:07 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/13 14:31:21 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	// Strings em arrays para permitir modificação
	char str1[] = "HELLO WORLD";
	char str2[] = "42 PORTO! 123 ABC";
	char str3[] = "Ja Estava Misturado";
	char str4[] = "";

	printf("--- Testando ft_strlowcase ---\n");

	printf("T1 (HELLO WORLD): %s\n", ft_strlowcase(str1));
	printf("T2 (42 PORTO! 123 ABC): %s\n", ft_strlowcase(str2));
	printf("T3 (Ja Estava Misturado): %s\n", ft_strlowcase(str3));
	printf("T4 (Vazio): [%s]\n", ft_strlowcase(str4));

	return (0);
}
*/
/*
• Crie uma função que converta cada letra para minúscula.

• O protótipo deve ser:
	char *ft_strlowcase(char *str);

• Deve retornar str.
*/
