/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:27:46 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/28 15:24:22 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		nb--;
		fact *= nb;
	}
	return (fact);
}

/*#include <stdio.h>

int	main()
{
	int	entero = 1;
	int	factorial = ft_iterative_factorial(entero);

	printf("El factorial de: %d\n", entero);
	printf("Es: %d\n", factorial);
	
	return (0);
}*/