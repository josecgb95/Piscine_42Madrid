/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:13:40 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/30 20:30:29 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*new_copy;
	int		i;
	int		count;

	i = 0;
	count = ft_strlen(src);
	new_copy = (char *)malloc(sizeof(char) * (count + 1));
	if (new_copy == NULL)
	{
		free(new_copy);
		return ("Error");
	}
	while (src[i])
	{
		new_copy[i] = src[i];
		i++;
	}
	new_copy[i] = '\0';
	return (new_copy);
}

/*int	main(void)
{
	char	*test;

	test = ft_strdup("Hola Mundo");

	printf("La cadena copiada es: %s\n", test);

	free(test);

	return (0);
}*/
