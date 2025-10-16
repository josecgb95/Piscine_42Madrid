/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:43:22 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/22 17:01:31 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*result;

	result = dest;
	while (*result != '\0')
	{
		result++;
	}
	while (*src != '\0')
	{
		*result = *src;
		result++;
		src++;
	}
	*result = '\0';
	return (dest);
}

/*#include <stdio.h>

int main()
{
	char name[20] = "Jose";
	char last_name[] = "Garcia";

	//ft_strcat(name, last_name);
	
	//printf("%s\n", name);

	printf("%s\n", ft_strcat(name, last_name));

	
	return (0);
}*/
