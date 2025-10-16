/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayague-a <ayague-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 16:29:48 by ayague-a          #+#    #+#             */
/*   Updated: 2025/07/27 22:46:18 by ayague-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_strstr(char *str, char *to_find)
{
        int     i;
        int     j;

        i = 0;
        while (str[i])
        {
                j = 0;
                while (str[i + j] && str[i + j] == to_find[j] && to_find[j])
                {
                        j++;
                        if (to_find[j] == '\0')
                                write_result(&str[i]);
                }
                i++;
        }
}

void	write_result(char *str)
{
	int		i;

	i = 0;
	while (str[i] != ':')
		i++;
	i++;
	while (str[i] != '\n')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		str_len(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	divide_num(char *str, char *dicc)
{
	int		len;
	int		i;
	int		trios;
	char	sub_nbr[3];
	
	len = str_len(str);
	i = 0;
	trios = 0;
	if (len % 3 == 1)
	{
		sub_nbr[0] = str[i];
		i = i + 1;
		print_monos(sub_nbr, dicc);
	}
	else if (len % 3 == 2)
	{
		sub_nbr[0] = str[i];
		sub_nbr[1] = str[i + 1];
		i = i + 2;
		print_duos(sub_nbr, dicc);
	}
	while (str[i])
	{
		sub_nbr[0] = str[i];
		sub_nbr[1] = str[i + 1];
		sub_nbr[2] = str[i + 2];
		i = i + 3;
		write(1, " ", 1);
		tillion(((len - 1) / 3) * 3 -  3 * trios, dicc);
		write(1, " ", 1);
		trios++;
		print_trios(sub_nbr, dicc);
	}
		
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*check_input(char *str)
{
    int		i;
	int		j;
	char	*num;
	
	i = 0;
	j = 0;
	;
	while (str[i] == ' ')
		i++;
    if (str[i] == '+' || str[i] == '-')
		return ("ERROR");
	while ('0' <= str[i + j] && str[i + j] <= '9')
		j++;
	num = malloc(sizeof (char) * j);
	j = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		num[j++] = str[i];
		i++;
	}
	if (j == 0)
		return ("0");
	return (num);
}

void	tillion(int n, char *dicc)
{
	int		i;
	char	tillion[39];

	i = 0;
	if (n > 0)
	{
		tillion[0] = '\n';
		tillion[1] = '1';
		while (i < n)
				tillion[2 + i++] = '0';
		tillion[2 + i] = ':';
		tillion[3 + i] = '\0';
		ft_strstr(dicc, tillion);
	}
	
}