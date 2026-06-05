/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:02:58 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/22 19:38:15 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*dst;

	len = 0;
	while (src[len])
		len++;
	dst = malloc(len + 1);
	if (!dst)
		return (NULL);
	len = 0;
	while (src[len])
	{
		dst[len] = src[len];
		len++;
	}
	dst[len] = '\0';
	return (dst);
}
/*
• Reproduzir de forma idêntica o funcionamento da função strdup (man strdup).

• Eis como deve ser prototipado:
	char *ft_strdup(char *src);
*/
