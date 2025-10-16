/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayague-a <ayague-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:45:13 by ayague-a          #+#    #+#             */
/*   Updated: 2025/07/27 22:22:55 by ayague-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_monos(char *str, char *dicc)
{
	char	temp[4];
	
	if (str[0] != '0')
	{
		
		temp[0] = '\n';
		temp[1] = str[0];
		temp[2] = ':';
		temp[3] = '\0';
		ft_strstr(dicc, temp);
	}
}


void	print_duos(char *str, char *dicc)
{
	char	temp[5];
	
	if (str[0] != '0' && str[0] != '1')
	{
		temp[0] = '\n';
		temp[1] = str[0];
		temp[2] = '0';
		temp[3] = ':';
		temp[4] = '\0';
		ft_strstr(dicc, temp);
		write(1, " ", 1);
	}
	else if (str[0] == '1')
	{
		temp[0] = '\n';
		temp[1] = str[0];
		temp[2] = str[1];
		temp[3] = ':';
		temp[4] = '\0';
		ft_strstr(dicc, temp);
		write(1, " ", 1);
	}
	if (str[1] != '0' && str[0] != '1')
	{
		
		temp[0] = '\n';
		temp[1] = str[1];
		temp[2] = ':';
		temp[3] = '\0';
		ft_strstr(dicc, temp);
	}
}

void	print_trios(char *str, char *dicc)
{
	char	temp[5];
	
	if (str[0] != '0')
	{
		temp[0] = '\n';
		temp[1] = str[0];
		temp[2] = ':';
		temp[3] = '\0';
		ft_strstr(dicc, temp);
		write(1, " ", 1);
		ft_strstr(dicc, "100:");
		write(1, " ", 1);
	}
	if (str[1] != '0' && str[1] != '1')
	{
		temp[0] = '\n';
		temp[1] = str[1];
		temp[2] = '0';
		temp[3] = ':';
		temp[4] = '\0';
		ft_strstr(dicc, temp);
		write(1, " ", 1);
	}
	else if (str[1] == '1')
	{
		temp[0] = '\n';
		temp[1] = str[1];
		temp[2] = str[2];
		temp[3] = ':';
		temp[4] = '\0';
		ft_strstr(dicc, temp);
		write(1, " ", 1);
	}
	if (str[2] != '0' && str[1] != '1')
	{
		
		temp[0] = '\n';
		temp[1] = str[2];
		temp[2] = ':';
		temp[3] = '\0';
		ft_strstr(dicc, temp);
	}
}