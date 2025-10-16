/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:22:43 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/28 22:17:30 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (1);
}
/*#include <stdio.h>

int	main()
{
	int	index_send = 8;

	printf("%d", ft_fibonacci(index_send));

	return (0);
}*/
