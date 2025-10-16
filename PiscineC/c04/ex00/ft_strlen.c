/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:30:36 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/23 22:18:12 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}

/*#include <stdio.h>
int	main()
{
	char	str[]  = "Hola Mundo";

	printf("Numero de caracteres coontados: %d\n", ft_strlen(str));
	return (0);
}*/
