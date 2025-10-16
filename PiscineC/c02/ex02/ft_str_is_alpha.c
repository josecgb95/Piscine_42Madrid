/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 16:43:19 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/17 18:00:45 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 65 || str [i] > 90) && (str[i] < 97 || str[i] > 122))
			return (0);
		i++;
	}
	return (1);
}

/*int	main()
{
	char test[] = "Ç";

	printf("%d\n", ft_str_is_alpha(test));
	return (0);
}*/