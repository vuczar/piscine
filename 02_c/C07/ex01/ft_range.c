/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:39:13 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/23 06:57:10 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	i;
	int	d;
	int	*n;

	if (min >= max)
		return (NULL);
	d = max - min;
	n = malloc(d * sizeof(int));
	if (!n)
		return (NULL);
	i = 0;
	while (i < d)
	{
		n[i] = min;
		i++;
		min++;
	}
	return (n);
}

/*
• Crie uma função ft_range que retorne um array de ints. Este array de 
  int deve conter todos os valores entre min e max.

• Min incluído - max excluído.

• Eis como deve ser prototipado:
	int *ft_range(int min, int max);

• Se o valor de min for maior ou igual ao de max, um ponteiro NULL 
  deve ser retornado.
*/
