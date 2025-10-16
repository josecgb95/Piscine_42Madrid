/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_repeat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiquot- <tsiquot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:59:23 by tsiquot-          #+#    #+#             */
/*   Updated: 2025/07/20 17:39:42 by tsiquot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_repeat(char results[4][4], int row, int col, char value)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (results[row][i] == value)
			return (0);
		if (results[i][col] == value)
			return (0);
		i++;
	}
	return (1);
}
