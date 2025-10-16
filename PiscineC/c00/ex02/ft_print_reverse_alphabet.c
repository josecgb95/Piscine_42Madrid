/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 20:45:30 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/10 20:50:41 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	n;

	n = 'z';
	while (n >= 'a')
	{
		write(1, &n, 1);
		n--;
	}
}
/*
int     main(void)
{
        ft_print_reverse_alphabet();
        return (0);
}
*/
