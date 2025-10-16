/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 10:52:29 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/29 16:53:14 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1 || nb == 0)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	next;

	if (nb == 1 || nb == 0)
		return (0);
	next = ft_is_prime(nb);
	if (next == 1)
		return (nb);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			nb++;
			i = 1;
		}
		i++;
	}
	return (nb);
}

/*int ft_find_next_prime2(int nb)
{
	while(!ft_is_prime(nb))
		nb++;
	return (nb);
}*/

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_find_next_prime(24));
}*/
