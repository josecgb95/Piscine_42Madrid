/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parameterize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiquot- <tsiquot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:57:44 by tsiquot-          #+#    #+#             */
/*   Updated: 2025/07/20 17:02:31 by tsiquot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_parameters(char **args, char limits[4][4], int values[3])
{
	if (args[1][values[0]] > '4' || args[1][values[0]] < '1')
		return (0);
	limits[values[1]][values[2]] = args[1][values[0]];
	values[0]++;
	values[2]++;
	if (args[1][values[0]] == '\0')
		return (2);
	if (args[1][values[0]] != ' ')
		return (0);
	values[0]++;
	if (values[2] == 4)
	{
		values[1]++;
		values[2] = 0;
	}
	if (values[1] == 4)
		return (2);
	return (1);
}

int	ft_parameterize(int count, char **args, char limits[4][4])
{
	int	values[3];
	int	case_val;

	values[0] = 0;
	values[1] = 0;
	values[2] = 0;
	if (count != 2)
		return (0);
	while (args[1][values[0]] != '\0')
	{
		case_val = ft_check_parameters(args, limits, values);
		if (case_val == 0)
			return (0);
		if (case_val == 2)
			break ;
	}
	if (values[0] != 31)
		return (0);
	return (1);
}
