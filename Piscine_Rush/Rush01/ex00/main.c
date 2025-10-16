/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiquot- <tsiquot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:58:59 by tsiquot-          #+#    #+#             */
/*   Updated: 2025/07/20 17:49:19 by tsiquot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_write_results(char results[4][4],
			char limits[4][4], int row, int col);

int		ft_parameterize(int count, char **args, char limits[4][4]);

void	ft_write(char results[4][4]);

int	main(int count, char **args)
{
	char	limits[4][4];
	char	results[4][4];

	if (!(ft_parameterize(count, args, limits)))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ft_write_results(results, limits, 0, 0) == 1)
		ft_write(results);
	else
		write(1, "Error\n", 6);
}
