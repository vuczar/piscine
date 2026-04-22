/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:38:06 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/14 15:59:52 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int     main(void)
{
        char    p1[] = "ab";
        char    p2[] = "abc";
        char    p3[] = "abd";

        printf("entre %s e %s é : %d\n", p1, p2, ft_strcmp(p1, p2));
        printf("entre %s e %s é : %d\n", p2, p1, ft_strcmp(p2, p1));
        printf("entre %s e %s é : %d\n", p2, p3, ft_strcmp(p2, p3));
        printf("entre %s e %s é : %d\n", p3, p2, ft_strcmp(p3, p2));
}
*/
/*
• Reproduzir de forma idêntica o funcionamento da função strcmp (man strcmp).

• A função deve ser prototipada da seguinte forma:
	int ft_strcmp(char *s1, char *s2);
*/
