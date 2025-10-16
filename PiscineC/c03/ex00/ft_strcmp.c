/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:24:54 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/22 15:03:45 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			return (result);
		}
		i++;
	}
	return (result);
}

/*#include <stdio.h>

int	main()
{
	char	name1[] = "Hola";
	char	name2[] = "Hzla";

	printf("%d\n", ft_strcmp(name1, name2));
}*/