/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:08:33 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/31 11:31:06 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int	main(int argc, char *argv[])
{
	int	longitud_argv_count;
	int	i;

	i = 1;
	while (i < argc)
	{
		longitud_argv_count = ft_strlen(argv[i]);
		write(1, argv[i], longitud_argv_count);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
