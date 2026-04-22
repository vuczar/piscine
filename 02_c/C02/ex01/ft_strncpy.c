/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 12:46:04 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/14 14:55:41 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	palavra[] = "Confia no processo !";
	char	copia[7];
	unsigned int n = 6;

	printf("Copia : %s \n", ft_strncpy(copia, palavra, n));
}
*/
/*
• Reproduzir de forma idêntica o funcionamento da função strncpy (man strncpy).

• O protótipo deve ser:
	char *ft_strncpy(char *dest, char *src, unsigned int n);
*/
