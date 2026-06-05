/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 10:21:45 by vimauric          #+#    #+#             */
/*   Updated: 2026/04/23 12:57:31 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	d;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	d = max - min;
	*range = malloc(d * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (i < d)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (d);
}

/*
• Crie uma função ft_ultimate_range que aloque e atribua um array de ints. 
Este array de int deve conter todos os valores entre min e max.

• Min incluído - max excluído.

• Eis como deve ser prototipado:
	int ft_ultimate_range(int **range, int min, int max);

• O tamanho de range deve ser retornado (ou -1 em caso de erro).

• Se o valor de min for maior ou igual ao valor de max, range apontará 
para NULL e deve retornar 0.
*/
