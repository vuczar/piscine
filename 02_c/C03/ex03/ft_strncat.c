/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 19:09:48 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/15 18:32:14 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != 0 && j < nb)
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
	char	p1[50] = "Hello, ";
	char	p2[] = "Skynet";
	int	nbr = 3;

	printf("%s\n%s\n", p1, p2);
	printf("%s\n", ft_strncat(p1, p2, nbr));
}
*/
/*
• Reproduzir de forma idêntica o funcionamento da função strncat (man strncat).

• A função deve ser prototipada da seguinte forma:
	char *ft_strncat(char *dest, char *src, unsigned int nb);
*/
