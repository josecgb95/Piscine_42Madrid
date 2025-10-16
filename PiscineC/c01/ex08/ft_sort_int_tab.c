/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:47:55 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/16 18:03:48 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < size)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
		i = 0;
	}
}
/*int	main ()
{
	int arr[] = {45, 35, 20, 10, 70, 55, 67, 23, 1, 0, 6, 99};
	ft_sort_int_tab(arr, 12);

	int	i = 0;

	while (i < 12)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}*/