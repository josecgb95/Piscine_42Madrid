/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 20:05:32 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/10 20:42:42 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	n;

	n = 'a';
	while (n <= 'z')
	{
		write(1, &n, 1);
		n++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
