/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 22:24:53 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/25 14:23:35 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = (nb % 10 + '0');
	write(1, &c, 1);
}

/*int	main()
{
	int	j = 42;

	ft_putnbr(j);
	return (0);
}*/