/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 15:31:21 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/29 19:55:26 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	int	numero;
	int	potencia;

	numero = 10;
	potencia = 10;
	printf("Es: %d\n", ft_iterative_power(numero, potencia));
	return (0);
}*/
