/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:51:23 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/23 23:17:05 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i - 1] >= '0'
				&& str[i - 1] <= '9') && !(str[i - 1] >= 'A'
				&& str[i - 1] <= 'Z') && !(str[i - 1] >= 'a'
				&& str[i - 1] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char	prueba[] = "salut, comment tu vas
	? 42mots quarante-deux; cinquante+et+un";
	
	ft_strcapitalize(prueba);
	printf("%s\n", prueba);
	return (0);
}
*/