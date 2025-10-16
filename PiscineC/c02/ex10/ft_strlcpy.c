/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:55:14 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/22 13:56:09 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	lenght;
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	lenght = i;
	i = 0;
	while (src[i] && i < (int)size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (lenght);
}

/*#include <stdio.h>

int	main()
{
	char	src[] = "HolaMundo";
	char	dest[20];
	unsigned	int size = 5;

	printf("String lenght: %d\n", ft_strlcpy(dest, src, size));
	printf("Destino: %s\n", dest);

	return (0);
}*/
