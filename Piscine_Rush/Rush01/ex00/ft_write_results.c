/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_results.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiquot- <tsiquot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:01:22 by tsiquot-          #+#    #+#             */
/*   Updated: 2025/07/20 17:31:31 by tsiquot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_repeat(char results[4][4], int row, int col, char value);

int	ft_check_limits(char results[4][4], char limits[4][4], int row, int col);

int	ft_write_results(char results[4][4], char limits[4][4], int row, int col);

int	ft_write_next_col(char results[4][4], char limits[4][4], int row, int col)
{
	int	is_valid;

	is_valid = 0;
	if (ft_check_limits(results, limits, row, col) == 1)
		is_valid = ft_write_results(results, limits, row, col + 1);
	else
	{
		is_valid = 0;
		results[row][col] = '0';
	}
	return (is_valid);
}

int	ft_write_next_row(char results[4][4], char limits[4][4], int row, int col)
{
	int	is_valid;

	is_valid = 0;
	if (ft_check_limits(results, limits, row, col) == 1)
	{
		if (row != 3)
			is_valid = ft_write_results(results, limits, row + 1, 0);
		else
			is_valid = 1;
	}
	else
	{
		is_valid = 0;
		results[row][col] = '0';
	}
	return (is_valid);
}

int	ft_write_results(char results[4][4], char limits[4][4], int row, int col)
{
	int	i;
	int	is_valid;

	is_valid = 0;
	i = '1';
	while (i < '5')
	{
		if (ft_check_repeat(results, row, col, i) == 1)
		{
			results[row][col] = i;
			if (col < 3)
				is_valid = ft_write_next_col(results, limits, row, col);
			else
				is_valid = ft_write_next_row(results, limits, row, col);
			if (row == 3 && col == 3 && is_valid == 1)
				return (1);
		}
		i++;
	}
	if (is_valid == 0)
	{
		results[row][col] = '0';
		return (0);
	}
	return (1);
}
