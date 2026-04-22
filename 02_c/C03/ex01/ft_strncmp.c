/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 18:53:13 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/14 15:20:28 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int     main(void)
{
        // Teste 1: Iguais dentro do limite N
        printf("T1 (n=3): %d\n", ft_strncmp("abcdef", "abcZZE", 3));

        // Teste 2: Diferentes dentro do limite N
        printf("T2 (n=4): %d\n", ft_strncmp("abcdef", "abcZZE", 4));

        // Teste 3: N maior que as strings
        printf("T3 (n=10): %d\n", ft_strncmp("42", "42", 10));

        // Teste 4: N igual a zero
        printf("T4 (n=0): %d\n", ft_strncmp("abc", "xyz", 0));

        // Teste 5: String vazia
        printf("T5 (n=1): %d\n", ft_strncmp("", "a", 1));

        return (0);
}
*/
/*
• Reproduzir de forma idêntica o funcionamento da função strncmp (man strncmp).

• A função deve ser prototipada da seguinte forma:
	int ft_strncmp(char *s1, char *s2, unsigned int n);
*/
