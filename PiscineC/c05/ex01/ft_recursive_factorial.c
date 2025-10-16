/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 15:19:59 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/28 15:30:53 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*#include <stdio.h>

int	main()
{
	int	entero = 4;
	int	factorial = ft_recursive_factorial(entero);

	printf("El factorial de: %d\n", entero);
	printf("Es: %d\n", factorial);
	
	return (0);
}*/
