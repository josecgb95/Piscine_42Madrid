/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:33:00 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/13 21:33:53 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if (col == 0 && (row == 0 || row == y - 1))
				ft_putchar('A');
			else if (col == x - 1 && (row == 0 || row == y - 1))
				ft_putchar('C');
			else if ((col == 0 || col == x - 1) || (row == 0 || row == y - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		col = 0;
		row++;
	}
}
