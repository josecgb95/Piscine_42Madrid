/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:03:49 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/23 18:41:38 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lenght;

	i = 0;
	j = 0;
	lenght = 0;
	while (src[i])
		i++;
	while (dest[j])
		j++;
	if (j >= size)
		return (size + i);
	while (src[lenght] && lenght < (size - 1 - j))
	{
		dest[j + lenght] = src[lenght];
		lenght++;
	}
	dest[j + lenght] = '\0';
	return (i + j);
}

/*#include <stdio.h>

int	main()
{
	char	a[] = "Hola";
	char	b[] =  "Mundo";
	unsigned int	c;

	c = 10;

	printf("String lenght: %d\n", ft_strlcat(a, b, c));
	printf("Destino: %s\n", a);

	return (0);
}*/