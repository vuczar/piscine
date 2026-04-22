/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:26:20 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/15 18:30:51 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	p1[] = "Hello";
	char	p2[] = "World";
	

	printf("%s\n%s\n", p1, p2);
	printf("\n%s\n", ft_strcat(p1,p2));
}
*/
/*
• Reproduzir de forma idêntica o funcionamento da função strcat (man strcat).

• A função deve ser prototipada da seguinte forma:
	char *ft_strcat(char *dest, char *src);
*/
