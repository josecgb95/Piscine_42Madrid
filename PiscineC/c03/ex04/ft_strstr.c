/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 10:33:12 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/23 15:27:56 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && (to_find[j] != '\0'))
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int main()
{
	char	cadena1[] = "Estoy cadena probando una larga ";
	char	cadena2[] = "cadena";
	char *resultado = ft_strstr(cadena1, cadena2);


	printf("Este es el resultado: %s\n", resultado);

	return (0);
}*/
