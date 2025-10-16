/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:09:16 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/24 15:21:36 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 0;
	while ((s1[i] || s2[i]) && i < n)
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

#include <stdio.h>

int	main()
{
	char	name1[] = "Hoza";
	char	name2[] = "Hola";


	printf("%d\n", ft_strncmp(name1, name2, 3));
}