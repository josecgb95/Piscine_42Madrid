/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:07:26 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/16 11:47:02 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*int	main()
{
	int result[] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(result, 5);
	
	int i;
	i = 0;
	
	while (i < 5)
	{
		printf("%d", result[i]);
		i++;
	}
	return (0);
}*/