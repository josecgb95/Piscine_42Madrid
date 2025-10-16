/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:17:53 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/29 19:43:53 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		result = nb * ft_recursive_power(result, power - 1);
	return (result);
}

/*#include <stdio.h>

int	main()
{
	int	numero = 10;
	int	potencia = 5;

	printf("Es: %d\n", ft_recursive_power(numero, potencia));
	
	return (0);
}*/
