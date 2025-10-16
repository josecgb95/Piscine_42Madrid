/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 22:56:47 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/11 10:05:25 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	i;

	if (n >= 0)
	{
		i = 'P';
	}
	else
	{
		i = 'N';
	}
	write(1, &i, 1);
}
/*
int	main(void)
{
	ft_is_negative(50);
	ft_is_negative(-50);
	ft_is_negative(45);
	ft_is_negative(-60);
	ft_is_negative(56);
	return (0);
}
*/
