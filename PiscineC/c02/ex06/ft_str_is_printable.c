/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 20:03:39 by jose-car          #+#    #+#             */
/*   Updated: 2025/07/17 20:13:20 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 31 || str[i] > 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{
	char	test[] = "®";
	printf("%d\n", ft_str_is_printable(test));

	return (0);
}*/