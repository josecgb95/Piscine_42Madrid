/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayague-a <ayague-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 19:51:00 by ayague-a          #+#    #+#             */
/*   Updated: 2025/07/27 22:57:24 by ayague-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc,  char **argv)
{
	char	*num;

	if (argc == 2 || argc == 3)
	{
		num = check_input(argv[1]);
		if (num[0] == 'E')
		{
			write(1, "Error, invalid input", 20);
			return (1);
		}
		if (argc == 2)
			divide_num(num, format_str(dict_to_str("numbers.dict")));
		else
			divide_num(num, format_str(dict_to_str(argv[2])));
	}
}