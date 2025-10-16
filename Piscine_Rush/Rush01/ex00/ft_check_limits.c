/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_limits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiquot- <tsiquot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:00:33 by tsiquot-          #+#    #+#             */
/*   Updated: 2025/07/20 17:39:12 by tsiquot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_limits_down(char results[4][4], char limits[4][4],
int row, int col)
{
	int		i;
	int		max;
	char	visibles;

	i = 0;
	visibles = '0';
	max = 0;
	while (i < 4)
	{
		if (max < results[i][col])
		{
			max = results[i][col];
			visibles++;
		}
		i++;
	}
	if (row == 3 && visibles == limits[0][col])
		return (1);
	if (row != 3 && visibles <= limits[0][col])
		return (1);
	return (0);
}

int	ft_check_limits_up(char results[4][4], char limits[4][4], int row, int col)
{
	int		i;
	int		max;
	char	visibles;

	if (row != 3)
		return (1);
	i = 3;
	visibles = '0';
	max = 0;
	while (i >= 0)
	{
		if (max < results[i][col])
		{
			max = results[i][col];
			visibles++;
		}
		i--;
	}
	if (visibles != limits[1][col])
		return (0);
	return (1);
}

int	ft_check_limits_right(char results[4][4],
	char limits[4][4], int row, int col)
{
	int		i;
	int		max;
	char	visibles;

	i = 0;
	visibles = '0';
	max = 0;
	while (i < 4)
	{
		if (max < results[row][i])
		{
			max = results[row][i];
			visibles++;
		}
		i++;
	}
	if (col == 3 && visibles == limits[2][row])
		return (1);
	if (col != 3 && visibles <= limits[2][row])
		return (1);
	return (0);
}

int	ft_check_limits_left(char results[4][4],
	char limits[4][4], int row, int col)
{
	int		i;
	int		max;
	char	visibles;

	if (col != 3)
		return (1);
	i = 3;
	visibles = '0';
	max = 0;
	while (i >= 0)
	{
		if (max < results[row][i])
		{
			max = results[row][i];
			visibles++;
		}
		i--;
	}
	if (visibles != limits[3][row])
		return (0);
	return (1);
}

int	ft_check_limits(char results[4][4], char limits[4][4], int row, int col)
{
	return (ft_check_limits_down(results, limits, row, col)
		&& ft_check_limits_up(results, limits, row, col)
		&& ft_check_limits_right(results, limits, row, col)
		&& ft_check_limits_left(results, limits, row, col));
}
