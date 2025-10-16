/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:27:04 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/22 13:40:20 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main()
{
	char	nombre[] = "Garcia";
	char	apellido[10];

	ft_strcpy(apellido, nombre);
	printf("Este es el apellido: %s", apellido);
	return (0);
}*/
