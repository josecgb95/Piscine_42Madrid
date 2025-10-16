/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:37:34 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/31 11:31:24 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str) // cuenta mi string pasada or argumento
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int	ft_strcmp(char *s1, char *s2) // compara dos cadenas de texto
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			return (result);
		}
		i++;
	}
	return (result);
}

void	ft_swap(char **a, char **b) // invierte las cadenas de str
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(char **argv, int argc) // organiza mi arr de char
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < argc)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
			}
			i++;
		}
		j++;
		i = 0;
	}
}

int	main(int argc, char *argv[])
{
	int	longitud_argv_count;
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_sort_int_tab(argv, argc);
		longitud_argv_count = ft_strlen(argv[i]);
		write(1, argv[i], longitud_argv_count);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
