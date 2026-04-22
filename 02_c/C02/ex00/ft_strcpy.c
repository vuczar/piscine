/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 10:28:10 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/11 08:04:35 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{	
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char nome[] = "Vinicius";
	char copia[10];
	printf("Copia: %s", ft_strcpy(copia, nome));
}
*/
/*
• Reproduzir de forma idêntica o funcionamento da função strcpy (man strcpy).

• O protótipo deve ser:
	char *ft_strcpy(char *dest, char *src);
*/
